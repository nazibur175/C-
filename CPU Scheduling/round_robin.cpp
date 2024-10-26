#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
struct Process {
    int pid;              // Process ID
    int arrivalTime;      // Arrival time of the process
    int burstTime;        // Burst time (CPU time) of the process
    int remainingTime;    // Remaining burst time for the process
    int waitingTime;      // Waiting time of the process
    int turnAroundTime;   // Turnaround time of the process
};

// Function to calculate waiting and turnaround times using Round Robin scheduling
void calculateTimes(vector<Process> &processes, int quantum) {
    int n = processes.size();
    int currentTime = 0;               // Track the current time
    int completed = 0;                 // Number of processes completed
    queue<int> readyQueue;             // Queue to manage processes

    // Initialize remaining times and mark all processes as not yet completed
    for (auto &process : processes) {
        process.remainingTime = process.burstTime;
        process.waitingTime = 0;
    }

    // Sort processes by arrival time for initial queueing
    sort(processes.begin(), processes.end(), [](const Process &a, const Process &b) {
        return a.arrivalTime < b.arrivalTime;
    });

    // Add the first process to the ready queue
    readyQueue.push(0);
    int nextProcessIndex = 1;  // Track the next process to arrive

    while (completed < n) {
        if (!readyQueue.empty()) {
            int idx = readyQueue.front();
            readyQueue.pop();

            // Calculate time slice (either the quantum or the remaining time if shorter)
            int timeSlice = min(quantum, processes[idx].remainingTime);

            // Advance the current time
            currentTime += timeSlice;
            processes[idx].remainingTime -= timeSlice;

            // Check if process is completed
            if (processes[idx].remainingTime == 0) {
                completed++;
                processes[idx].turnAroundTime = currentTime - processes[idx].arrivalTime;
                processes[idx].waitingTime = processes[idx].turnAroundTime - processes[idx].burstTime;
            } else {
                // If not completed, re-add to the end of the queue
                readyQueue.push(idx);
            }
        }

        // Add all processes that have arrived by currentTime to the queue
        while (nextProcessIndex < n && processes[nextProcessIndex].arrivalTime <= currentTime) {
            readyQueue.push(nextProcessIndex++);
        }

        // If ready queue is empty and more processes are to come, skip to the next arrival time
        if (readyQueue.empty() && completed < n && nextProcessIndex < n) {
            currentTime = processes[nextProcessIndex].arrivalTime;
            readyQueue.push(nextProcessIndex++);
        }
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
    int n, quantum;
    cout << "Enter the number of processes: ";
    cin >> n;

    vector<Process> processes(n);

    // Input process details
    for (int i = 0; i < n; ++i) {
        processes[i].pid = i + 1;
        cout << "Enter arrival time and burst time for process " << i + 1 << ": ";
        cin >> processes[i].arrivalTime >> processes[i].burstTime;
    }

    cout << "Enter the time quantum: ";
    cin >> quantum;

    // Calculate waiting and turnaround times using Round Robin scheduling
    calculateTimes(processes, quantum);

    // Display results and averages
    displayResults(processes);
    calculateAverages(processes);

    return 0;
}
