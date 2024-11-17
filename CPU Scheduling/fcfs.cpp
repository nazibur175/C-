#include<bits/stdc++.h>
using namespace std;
struct Process {
    int pid;             
    int arrivalTime;    
    int burstTime;      
    int waitingTime;    
    int turnAroundTime;  
};
bool cmp(Process &x,Process &y){
    if(x.arrivalTime==y.arrivalTime)
    return x.pid<y.pid;
    
    return x.arrivalTime<y.arrivalTime;
}

void calculateTimes(vector<Process> &processes) {
    int n = processes.size();
    int currentTime = 0;
    
    for (int i = 0; i < n; ++i) {

        currentTime = max(currentTime, processes[i].arrivalTime);
        processes[i].waitingTime = currentTime - processes[i].arrivalTime;
        processes[i].turnAroundTime = processes[i].waitingTime + processes[i].burstTime;
        currentTime += processes[i].burstTime;
    }
}

// Function to display the process information
void displayResults(const vector<Process> &processes) {
    cout << "PID\tArrival\tBurst\tWaiting\tTurnaround\n";
    for (const auto &process : processes) {
        cout << process.pid << "\t" 
             << process.arrivalTime << "\t" 
             << process.burstTime << "\t" 
             << process.waitingTime << "\t" 
             << process.turnAroundTime << endl;
    }
}

void calculateAverages(const vector<Process> &processes) {
    int n = processes.size();
    float totalWaitingTime = 0, totalTurnAroundTime = 0;

    for (const auto &process : processes) {
        totalWaitingTime += process.waitingTime;
        totalTurnAroundTime += process.turnAroundTime;
    }

    cout << "Average Waiting Time: " << totalWaitingTime / n << endl;
    cout << "Average Turnaround Time: " << totalTurnAroundTime / n << endl;
}

int main() {
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;
    vector<Process> processes(n);
    for (int i = 0; i < n; ++i) {
        processes[i].pid = i + 1;
        cout << "Enter arrival time and burst time for process " << i + 1 << ": ";
        cin >> processes[i].arrivalTime >> processes[i].burstTime;
    }
    sort(processes.begin(),processes.end(),cmp);
    calculateTimes(processes);
    displayResults(processes);
    calculateAverages(processes);
    return 0;
}
