#include<bits/stdc++.h>
using namespace std;
void solve(){   
    int n,k;
    cin>>n>>k;
    int x,a,b,c;
    cin>>x>>a>>b>>c;
    // vector<int>v(n);
    // v[0]=x;
    int aa=x;
    int bb=0;
    int sum=aa;
    for(int i=1;i<k;i++){
        bb=(a*bb + b)%c;
        sum+=bb;
    }

    // vector<int>res;
    // res.push_back(sum);

    int anss=sum;
    for(int i=k;i<n;i++){
        bb=(a*bb + b) % c;
        sum+=(bb-aa+2*c)%c;
        res.push_back(sum);
    }
    for(auto xx:res){
        anss^=xx;
    }
    cout<<anss<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}   
