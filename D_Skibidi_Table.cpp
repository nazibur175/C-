#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int cal1(int n,int r,int c){
    if(n==1){
        // 1 4
        // 3 2
        if(r==1 && c==1) 
            return 1;
        else if(r==1 && c==2) 
            return 4;
        else if(r==2 && c==1) 
            return 3;
        else
            return 2;
    }
    int per=(1LL<<(2*n-2)); 
    int hf=(1LL<<(n-1));
    if(r<=hf && c<=hf){
        return cal1(n-1,r,c);
    }
    else if(r>hf && c>hf){
        return cal1(n-1,r-hf,c-hf)+per;
    }
    else if(r>hf && c<=hf){
        return cal1(n-1,r-hf,c)+2*per;
    }
    else{
        return cal1(n-1,r,c-hf)+3*per;
    }
}
pair<int,int>cal2(int n,int d){
    // 1 4
    // 3 2
    if(n==1){
        if(d==1) 
            return {1,1};
        else if(d==2) 
            return {2,2};
        else if(d==3) 
            return {2,1};
        else 
            return {1,2};
    }
    int per=(1LL<<(2*n-2));
    int hf=(1LL<<(n-1));
    if(d<=per){
        pair<int,int>ans=cal2(n-1,d);
        return {ans.first,ans.second};
    }
    else if(d<=2*per){
        pair<int,int>ans=cal2(n-1,d-per);
        return {ans.first+hf,ans.second+hf};
    }
    else if(d<=3*per){
        pair<int,int>ans=cal2(n-1,d-2*per);
        return {ans.first+hf,ans.second};
    }
    else{
        pair<int,int>ans=cal2(n-1,d-3*per);
        return {ans.first,ans.second+hf};
    }
}
void solve(){
    test{
        int n,q;
        cin>>n>>q;
        while(q--){
            string type;
            cin>>type;
            if(type[0]=='-'){
                int x,y;
                cin>>x>>y;
                cout<<cal1(n,x,y)<<endl;
            } else {
                int d;
                cin>>d;
                pair<int,int>ans=cal2(n,d);
                cout<<ans.first<<" "<<ans.second<<endl;
            }
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}