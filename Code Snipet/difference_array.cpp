#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++) cin>>a[i];
    int diff[n+2]={0};
    int q;
    cin>>q;
    while(q--){
        int l,r,v;
        cin>>l>>r>>v;
        diff[l]+=v;
        diff[r+1]-=v;
    }
    for(int i=1;i<n;i++){
        diff[i]=diff[i]+diff[i-1];
    }
    for(int i=0;i<n;i++){
        a[i]=a[i]+diff[i];
    }

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

