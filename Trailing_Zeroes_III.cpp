#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=105;
int countFive(int n){
    int cnt=0;
    while(n>0){
        cnt+=(n/5);
        n/=5;
    }
    return cnt;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t,c=1,n;
    cin>>t;
    while(t--){
        cin>>n;
        int l=0;
        int r=1e9+1;
        int m=0;
        int ans=-1;
        while(l<=r){
            m=l+(r-l)/2;
            if(countFive(m)>=n){
                ans=m;
                r=m-1;
            }
            else l=m+1;
        }
        cout<<"Case "<<c<<": ";
        if(countFive(ans)==n) 
            cout<<ans<<endl;
        else 
            cout<<"impossible"<<endl;
        c++;
    }
}