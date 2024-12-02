#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int D(int a, int b) {
    cout << "? " << a << " " << b << endl;
    int answer;
    cin >> answer;
    return answer;
}

void solve() {
    int n;
    cin >> n;
    
    vector<int> p(n + 1, 0);
    priority_queue<int, vector<int>, greater<int>> set;
    bool find = false;
    for (int i = 2; i < n; ++i) {
        if (!find) {
            int answer = D(1, i);
            if (answer == -1) {
                return;
            }
            set.push(i);
            if (answer == 0) {
                find = true;
                p[i] = 1;
            }
        } else {
            while (!set.empty()) {
                int nodes = set.top();
                set.pop();
                int answer = D(i, nodes);
                if (answer == 0) {
                    p[i] = nodes;
                    set.push(i);
                    break;
                }
            }
        }
    }

    cout << "! ";
    for (int i = 1; i <= n - 1; ++i) {
        cout << p[i] << " ";
    }
    cout << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
test{
    solve();
}

}