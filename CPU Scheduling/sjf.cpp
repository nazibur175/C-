#include<bits/stdc++.h>
using namespace std;
struct Process {
    int pid;             
    //int arrivalTime;    
    int burstTime;      
    int waitingTime;     
    int turnAroundTime;  
};

// Function to calculate waiting and turnaround times for each process
void calculateTimes(vector<Process> &processes) {
    int n = processes.size();
    int currentTime = 0;
    int completed = 0;

    vector<bool> isCompleted(n, false);  // Track if each process is completed

    while (completed < n) {
        int idx=0;
        int minBurstTime = INT_MAX;
        // Find the process with the shortest burst time that has arrived and is not completed
        for (int i = 0; i < n; ++i) {
            if (!isCompleted[i] ) {
                if (processes[i].burstTime < minBurstTime) {
                    minBurstTime = processes[i].burstTime;
                    idx = i;
                }
            }
        }

        processes[idx].waitingTime = currentTime;
        processes[idx].turnAroundTime = processes[idx].waitingTime + processes[idx].burstTime;

        // Update current time and mark the process as completed
        currentTime += processes[idx].burstTime;
        isCompleted[idx] = true;
        completed++;
        
    }
}

// Function to display the process information
void displayResults(const vector<Process> &processes) {
    cout << "PID\tBurst\tWaiting\tTurnaround\n";
    for (const auto &process : processes) {
        cout << process.pid << "\t" 
             //<< process.arrivalTime << "\t" 
             << process.burstTime << "\t" 
             << process.waitingTime << "\t" 
             << process.turnAroundTime << endl;
    }
}

// Function to calculate average waiting and turnaround times
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

    // Input process details
    for (int i = 0; i < n; ++i) {
        processes[i].pid = i + 1;
        cout << "burst time for process " << i + 1 << ": ";
        cin >> processes[i].burstTime;
    }

    // Calculate waiting and turnaround times using SJF non-preemptive
    calculateTimes(processes);

    // Display results and averages
    displayResults(processes);
    calculateAverages(processes);

    return 0;
}
