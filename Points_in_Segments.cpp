#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N=1e5+5;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,q;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n>>q;
        vector<int> v(n);
        for(int j=0;j<n;j++){
            cin>>v[j];
        }
        cout<<"Case "<<i<<":"<<endl;
        for(int j=0;j<q;j++){
            int x,y;
            cin>>x>>y;
            int LB=lower_bound(v.begin(),v.end(),x)-v.begin(); 
            int UB=upper_bound(v.begin(),v.end(),y)-v.begin(); 
            cout<<UB-LB<<endl;
        }
        v.clear();
    }
}