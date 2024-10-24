#include <bits/stdc++.h>
using namespace std;

struct Interval {
    int L, R;
};

// Function to find the maximum size of a clique
int findMaxClique(vector<Interval>& intervals) {
    int N = intervals.size();
    
    // Sort intervals by their starting point
    sort(intervals.begin(), intervals.end(), [](const Interval &a, const Interval &b) {
        return a.L < b.L;
    });

    multiset<int> activeEnds;
    int maxCliqueSize = 0;

    for (const auto& interval : intervals) {
        // Remove all intervals from the multiset that do not overlap with the current interval
        while (!activeEnds.empty() && *activeEnds.begin() < interval.L) {
            activeEnds.erase(activeEnds.begin());
        }

        // Insert the current interval's end point
        activeEnds.insert(interval.R);

        // Update the maximum clique size
        maxCliqueSize = max(maxCliqueSize, (int)activeEnds.size());
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
        
        cout << findMaxClique(intervals) << "\n";
    }
    
    return 0;
}
