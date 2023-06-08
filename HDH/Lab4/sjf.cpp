#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;
struct Process {
    string name;
    int arrival_time;
    int burst_time;
};

bool compareProcesses(const Process& p1, const Process& p2) {
    return (p1.arrival_time < p2.arrival_time) || 
           (p1.arrival_time == p2.arrival_time && p1.burst_time < p2.burst_time);
}

void sjfScheduling() {
    int numProcesses;
    cout << "Enter the number of processes: ";
    cin >> numProcesses;

    vector<Process> processes(numProcesses);

    for (int i = 0; i < numProcesses; ++i) {
        cout << "Enter the name of process " << i + 1 << ": ";
        cin >> processes[i].name;
        cout << "Enter the arrival time: ";
        cin >> processes[i].arrival_time;
        cout << "Enter the burst time: ";
        cin >> processes[i].burst_time;
    }

    sort(processes.begin(), processes.end(), compareProcesses);

    vector<int> response_time(numProcesses, 0);
    vector<int> waiting_time(numProcesses, 0);
    vector<int> turnaround_time(numProcesses, 0);

    int total_waiting_time = 0;
    int total_turnaround_time = 0;

    for (int i = 0; i < numProcesses; ++i) {
        if (i == 0) {
            response_time[i] = 0;
            waiting_time[i] = 0;
        } else {
            response_time[i] = processes[i - 1].burst_time + response_time[i - 1];
            waiting_time[i] = response_time[i] - processes[i].arrival_time;
        }

        turnaround_time[i] = processes[i].burst_time + waiting_time[i];
        total_waiting_time += waiting_time[i];
        total_turnaround_time += turnaround_time[i];
    }

    double average_waiting_time = static_cast<double>(total_waiting_time) / numProcesses;
    double average_turnaround_time = static_cast<double>(total_turnaround_time) / numProcesses;

    cout << "\nResult:" << endl;
    cout << left << setw(15) << "Process" << setw(15) << "Response Time"
              << setw(15) << "Waiting Time" << setw(15) << "Turnaround Time" << endl;
    for (int i = 0; i < numProcesses; ++i) {
        cout << left << setw(15) << processes[i].name << setw(15) << response_time[i]
                  << setw(15) << waiting_time[i] << setw(15) << turnaround_time[i] << endl;
    }

    cout << "\nAverage Waiting Time: " << average_waiting_time << endl;
    cout << "Average Turnaround Time: " << average_turnaround_time << endl;
}

int main() {
    sjfScheduling();
    return 0;
}