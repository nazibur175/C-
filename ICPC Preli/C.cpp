#include <bits/stdc++.h>
using namespace std;

bool canPartitionIntoThreeSets(vector<int>& nums) {
    int n = nums.size();
    if (n < 3) return false;

    int totalSum = accumulate(nums.begin(), nums.end(), 0);
    if (totalSum % 3 != 0) return false;

    int targetSum = totalSum / 3;
    int currentSum = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        currentSum += nums[i];
        if (currentSum == targetSum) {
            count++;
            currentSum = 0;
        }
    }

    return count >= 3;
}

int main() {
    int t;
    cin>>t;
    for(int ii = 1;ii<=t;ii++){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    for (int i = 1; i <= n; i++) {
        vector<int> prefix(nums.begin(), nums.begin() + i);
        int result = canPartitionIntoThreeSets(prefix) ? 1 : 0;
        cout << result << endl;
    }
    }

    return 0;
}
