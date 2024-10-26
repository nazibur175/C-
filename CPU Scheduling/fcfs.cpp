#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Process {
    int pid;             // Process ID
    int arrivalTime;     // Arrival time of the process
    int burstTime;       // Burst time (CPU time) of the process
    int waitingTime;     // Waiting time of the process
    int turnAroundTime;  // Turnaround time of the process
};

// Function to calculate waiting and turnaround times for each process
void calculateTimes(vector<Process> &processes) {
    int n = processes.size();
    int currentTime = 0;
    
    for (int i = 0; i < n; ++i) {
        // Adjust current time if it's less than the arrival time of the current process (idle time)
        currentTime = max(currentTime, processes[i].arrivalTime);
        
        // Calculate waiting time as the difference between current time and arrival time
        processes[i].waitingTime = currentTime - processes[i].arrivalTime;
        
        // Calculate turnaround time as waiting time + burst time
        processes[i].turnAroundTime = processes[i].waitingTime + processes[i].burstTime;
        
        // Update current time after processing this process
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
        cout << "Enter arrival time and burst time for process " << i + 1 << ": ";
        cin >> processes[i].arrivalTime >> processes[i].burstTime;
    }

    // Sort processes by arrival time
    sort(processes.begin(), processes.end(), [](const Process &a, const Process &b) {
        return a.arrivalTime < b.arrivalTime;
    });

    // Calculate waiting and turnaround times
    calculateTimes(processes);

    // Display results and averages
    displayResults(processes);
    calculateAverages(processes);

    return 0;
}
