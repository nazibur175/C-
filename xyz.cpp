#include <bits/stdc++.h>
using namespace std;
map<string,int>m;
int ans=0;
int a,b,mm;
void cal(string current, int k, set<string>& mountainNumbers) {
   
    if (current.size() == 2 * k + 1) {
       
        char middleDigit = current[k]; 
        if (count(current.begin(), current.end(), middleDigit) == 1) {
            m[current]++;
            int val = stoll(current);
            if(val%mm==0 && val>=a && val<=b) ans++;
        }
        return;
    }

    char lastDigit = current.back();
    for (char digit = lastDigit; digit >= '1'; digit--) {
        current.push_back(digit);
        cal(current, k, mountainNumbers);
        current.pop_back();
    }
}

void generateMountainNumbers(string current, int pos, int k, set<string>& mountainNumbers) {
   
    if (pos == k + 1) {
        cal(current, k, mountainNumbers);
        return;
    }

    char lastDigit = (pos == 0) ? '1' : current.back();
    for (char digit = lastDigit; digit <= '9'; ++digit) {
        current.push_back(digit);
        generateMountainNumbers(current, pos + 1, k, mountainNumbers);
        current.pop_back();
    }
}

void generateAllMountainNumbers(int n) {
    
    int k = (n - 1) / 2; 
    set<string> mountainNumbers; 
    generateMountainNumbers("", 0, k, mountainNumbers); 
}

int32_t main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

     //freopen("metaa.in", "r", stdin);
     //freopen("metaa.out", "w", stdout);
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        ans = 0;
        m.clear();
        cin >> a >> b >> mm;
        string aa = to_string(a);
        string bb = to_string(b);
        int x = aa.size();
        int y = bb.size();

        for (int i = x; i <= y; i++) {
            if (i % 2) { 
                generateAllMountainNumbers(i); 
            }
        }
        cout << "Case #" << tt << ": " << ans << endl;
    }
    return 0;
}
