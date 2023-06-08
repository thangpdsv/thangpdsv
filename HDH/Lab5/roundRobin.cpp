#include <iostream>
#include <vector>
#include <iomanip>





using namespace std;
struct Process{
    string name;
    int arrival_time;
    int burst_time;
};
void show(Process p){
    cout << left << setw(15) << "Process" << setw(15) << "Arrival Time" << setw(15) << "Burst Time" << endl;
    cout << left << setw(15) << p.name << setw(15) << p.arrival_time << setw(15) << p.burst_time << endl;
}
void showListProcess(vector<Process> processes){
    for(int i = 0; i < processes.size(); ++i){
        show(processes[i]);
    }
}

void roundRobin(){
    int n;
    cout << "Enter number of Process: ";
    cin >> n; 

    cout << n << endl;
    vector<Process> processes(n);
    for(int i = 0; i < n; ++i){
        cout << "Enter the name of process " << i + 1 << ": ";
        cin >> processes[i].name;
        cout << "Enter the arrival time: ";
        cin >> processes[i].arrival_time;
        cout << "Enter the burst time: ";
        cin >> processes[i].burst_time;
    }

    showListProcess(processes);
    




}

int main(){
    roundRobin();
    return 0;
}