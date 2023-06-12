#include <iostream>
#include <vector>

using namespace std;

struct Process {
    string name;
    int burstTime;
    int startTime;
    int stopTime;
    int remainingTime;
};

void roundRobinScheduling(int numProcesses, int quantumTime, vector<Process>& processes) {
    int currentTime = 0;
    int completedProcesses = 0;
    vector<int> waitingTime(numProcesses, 0);

    while (completedProcesses < numProcesses) {
        for (int i = 0; i < numProcesses; i++) {
            if (processes[i].remainingTime > 0) {
                if (processes[i].remainingTime <= quantumTime) {
                    currentTime += processes[i].remainingTime;
                    processes[i].remainingTime = 0;
                    processes[i].stopTime = currentTime;
                    completedProcesses++;
                } else {
                    currentTime += quantumTime;
                    processes[i].remainingTime -= quantumTime;
                }

                if (processes[i].startTime == -1) {
                    processes[i].startTime = currentTime - processes[i].burstTime;
                }

                for (int j = 0; j < numProcesses; j++) {
                    if (j != i && processes[j].remainingTime > 0) {
                        waitingTime[j] += quantumTime;
                    }
                }
            }
        }
    }

    double totalWaitingTime = 0;
    double totalTurnaroundTime = 0;

    cout << "Gantt Chart:\n";
    cout << "Process\tStart Time\tStop Time\n";
    for (int i = 0; i < numProcesses; i++) {
        cout << processes[i].name << "\t" << processes[i].startTime << "\t\t" << processes[i].stopTime << "\n";
        totalWaitingTime += waitingTime[i];
        totalTurnaroundTime += (waitingTime[i] + processes[i].burstTime);
    }

    double averageWaitingTime = totalWaitingTime / numProcesses;
    double averageTurnaroundTime = totalTurnaroundTime / numProcesses;

    cout << "\nAverage Waiting Time: " << averageWaitingTime << endl;
    cout << "Average Turnaround Time: " << averageTurnaroundTime << endl;
}

int main() {
    int numProcesses;
    int quantumTime;
    vector<Process> processes;

    cout << "Enter the number of processes: ";
    cin >> numProcesses;

    cout << "Enter the quantum time: ";
    cin >> quantumTime;

    cout << "Enter process name and burst time for each process:\n";
    for (int i = 0; i < numProcesses; i++) {
        Process process;
        cout << "Process " << i + 1 << " name: ";
        cin >> process.name;
        cout << "Process " << i + 1 << " burst time: ";
        cin >> process.burstTime;
        process.startTime = -1;
        process.stopTime = -1;
        process.remainingTime = process.burstTime;
        processes.push_back(process);
    }

    roundRobinScheduling(numProcesses, quantumTime, processes);

    return 0;
}
