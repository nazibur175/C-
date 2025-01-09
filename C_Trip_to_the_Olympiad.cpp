#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int cntbit(int x){
    int cnt=0;
    while (x)
    {
        cnt++;
        x/=2;
    }
    return cnt;
    
}
void solve(){
    test{
        int l,r;
        cin>>l>>r;
        int bit = cntbit(r);
        int a=l;
        int c=r;
        int b=0;
        int f=0;
        int ff=0;
        //cout<<bit-1<<endl;
        for(int i=bit-1;i>=0;i--){
            //cout<<(1<<i)<<endl;
            //cout<<((1<<i)&a)<<endl;
            if(f && ff){
                if((a&(1<<i))==0)
                 b|=(1<<i);
                continue;
            }
            if(((1<<i)&a) && ((1<<i)&c) && f==0 && ff==0){
                //cout<<i<<endl;
                b|=(1<<i);
                //cout<<b<<endl;
            }
            else if(((1<<i)&a)==0 && f){
                 ff=1;
                 b|=(1<<i);
                 //cout<<"Enter "<<i<<endl;
            }
            else if((((1<<i)&a)==0) && ((1<<i)&c)){
                //cout<<"Enter"<<i<<endl;
                //cout<<((1<<3)&&a)<<endl;
                f=1;
                // zero rakhlam
            }
            else {
                //cout<<"Enter "<<i<<endl;
                //cout<<"HERE"<<endl;
                if((1<<i)&a)
                b|=(1<<i);
            }
            
        }
        set<int>s;
        s.insert(a);
        s.insert(b);
        s.insert(c);
        //cout<<a<<" "<<b<<" "<<c<<endl;
        int ans=0;
        if(s.size()==3){
            ans = (a^b) + (b^c) + (c^a);
        }
        
        a=l;
        c=r;
        b=0;
        f=0;
        ff=0;
        for(int i=bit;i>=0;i--){
            if(f && ff){
                if((a&(1<<i))==0)
                 b|=(1<<i);
                continue;
            }
            if(((1<<i)&a) && ((1<<i)&c) && f==0 && ff==0){
                b|=(1<<i);
            }
            else if(((1<<i)&c) && f){
                ff=1;
                 //b|=(1<<i);
            }
            else if((((1<<i)&a)==0) && ((1<<i)&c)){
                f=1;
                b|=(1<<i);
                // 1 rakhlam
            }
            // else {
            //     b|=(1<<i);
            // }
        }
        set<int>ss;
        ss.insert(a);
        ss.insert(b);
        ss.insert(c);
        int x=0;
        if(ss.size()==3){
             x = (a^b) + (b^c) + (c^a);
           
        }
        if(ans>=x){
            //cout<<ans<<endl;
            for(auto x:s) cout<<x<<" ";
            cout<<endl;
        }
        else {
            for(auto x:ss) cout<<x<<" ";
            //cout<<x<<endl;
            cout<<endl;
        }
        //cout<<(6^9)+(9^22)+(6^22)<<endl;


    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}