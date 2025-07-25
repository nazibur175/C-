#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n; 
        cin >> n;
	    vector <pair<int, int>> a(n), b(n);
	    for (int i = 0; i < n; i++){
	        cin >> a[i].first;
	        cin >> b[i].first;
	        a[i].second = i;
	        b[i].second = i;
	    }
	    
	    sort(a.begin(), a.end());
	    sort(b.begin(), b.end());
	    
	    vector <int> c(n), d(n);
	    for (int i = 0; i < n; i++){
	        c[a[i].second] = i;
	        d[b[i].second] = i;
	    }
	    
	    vector<int> v1, v2, v3, v4;
	    for (int i = 0; i < n; i++){
	        if (c[i] < (n / 2) && d[i] < (n / 2)){
	            v1.push_back(i);
	        } else if (c[i] >= (n / 2) && d[i] < (n / 2)){
	            v2.push_back(i);
	        } else if (c[i] >= (n / 2) && d[i] >= (n / 2)){
	            v3.push_back(i);
	        } else {
	            v4.push_back(i);
	        }
	    }
	    
	    vector <pair<int, int>> ans;
	    for (int i = 0; i <v1.size(); i++){
	        ans.push_back({v1[i], v3[i]});
	    }
	    for (int i = 0; i<v2.size(); i++){
	        ans.push_back({v2[i], v4[i]});
	    }
	    
	    for (auto [x, y] : ans){
	        cout << (x + 1) << " " << (y + 1) << "\n";
	    }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}