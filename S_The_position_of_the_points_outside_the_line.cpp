#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("position.in", "r", stdin);
    freopen("position.out", "w", stdout);
    long long x1,y1,x2,y2,a,b,c;
    cin>>x1>>y1>>x2>>y2>>a>>b>>c;
    long long temp1 = a*x1 + b*y1 + c;
    long long temp2 = a*x2 + b*y2 + c;
    if((temp1>0 && temp2>0) || (temp1<0 && temp2<0)) 
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
    return 0;
}