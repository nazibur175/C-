#include <bits/stdc++.h>
using namespace std;

bool canPartitionIntoThreeSets(vector<int>& nums) {
    int n = nums.size();
    if (n < 3) return false;

    int totalSum = accumulate(nums.begin(), nums.end(), 0);
    if (totalSum % 3 != 0) return false;

    int targetSum = totalSum / 3;
    
    // Bitmask approach to generate all possible subsets
    for (int mask = 1; mask < (1 << n); mask++) {
        vector<int> subset;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                subset.push_back(nums[i]);
            }
        }
        
        int subsetSum = accumulate(subset.begin(), subset.end(), 0);
        if (subsetSum == targetSum) {
            targetSum = totalSum / 3;
        }
    }

    return targetSum == 0;
}

int main() {
    int t;
    cin >> t;
    for (int ii = 1; ii <= t; ii++) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        for (int i = 1; i <= n; i++) {
            vector<int> subset(nums.begin(), nums.begin() + i);
            int result = canPartitionIntoThreeSets(subset) ? 1 : 0;
            cout << result << endl;
        }
    }

    return 0;
}
