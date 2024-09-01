#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    ll x=1;
    ll maxx=0,minn=0;
    for(int i=0;i<n;i++){
        maxx+=a[i]*x;
        x*=2;
    }
    x=1;
    for(int i=n-1;i>=0;i--){
        minn+=a[i]*x;
        x*=2;
    }
    cout<<maxx-minn<<endl;
}