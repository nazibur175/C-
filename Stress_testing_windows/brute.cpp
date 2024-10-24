#include <bits/stdc++.h>
using namespace std;

struct Interval {
    int L, R;
};

// Function to check if two intervals can form an edge
bool canFormEdge(const Interval &a, const Interval &b) {
    // Check if intervals a and b can form an edge
    return (a.L < b.R && b.L < a.R) && (a.R > b.L && b.R > a.L);
}

// Function to check if a subset of intervals forms a valid clique
bool isClique(const vector<Interval> &subset) {
    int size = subset.size();
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (!canFormEdge(subset[i], subset[j])) {
                return false; // Not all pairs can form edges
            }
        }
    }
    return true;
}

int solveSingleTestCase(vector<Interval>& intervals) {
    int N = intervals.size();
    int maxCliqueSize = 0;

    // Check all subsets of intervals
    for (int mask = 1; mask < (1 << N); ++mask) {
        vector<Interval> subset;
        for (int i = 0; i < N; ++i) {
            if (mask & (1 << i)) {
                subset.push_back(intervals[i]);
            }
        }

        // Check if the current subset forms a clique
        if (isClique(subset)) {
            maxCliqueSize = max(maxCliqueSize, (int)subset.size());
        }
    }

    return maxCliqueSize;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        vector<Interval> intervals(N);
        
        for (int i = 0; i < N; ++i) {
            cin >> intervals[i].L >> intervals[i].R;
        }
        
        cout << solveSingleTestCase(intervals) << "\n";
    }

    return 0;
}
