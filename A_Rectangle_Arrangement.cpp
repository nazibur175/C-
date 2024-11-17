#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a=0;
        int b=0;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            a=max(a,x);
            b=max(b,y);
        }
        cout<<(2*(a+b))<<endl;
    }

}