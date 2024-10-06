#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

const int MAX_N = 300005;

int testCases, n, arr[MAX_N], lastOccurrence[MAX_N], dp[MAX_N], answer[MAX_N];
int pre[MAX_N];
pair<int, int> sortedArr[MAX_N];

bool comparePairs(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> testCases;

    while (testCases--) {
        cin >> n;

        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
            sortedArr[i] = make_pair(arr[i], i);
        }

        sort(sortedArr + 1, sortedArr + n + 1, comparePairs);

        for (int i = 1; i <= n; i++) {
            lastOccurrence[i] = sortedArr[i].second;
        }

        int maxLength = 0;

        for (int i = 1; i <= n; i++) {
            dp[i] = 1;
            pre[i] = 0;

            for (int j = i - 1; j >= 1; j--) {
                if (lastOccurrence[arr[i]] > lastOccurrence[arr[j]] && dp[j] + 1 > dp[i]) {
                    dp[i] = dp[j] + 1;
                    pre[i] = j;
                }
            }

            if (dp[i] > maxLength) {
                maxLength = dp[i];
                answer[maxLength] = i;
            }
        }

        cout << maxLength << "\n";

        int current = answer[maxLength];

        for (int i = maxLength; i >= 1; i--) {
            cout << arr[current] << " ";
            current = pre[current];
        }

        cout << "\n";
    }

    return 0;
}
