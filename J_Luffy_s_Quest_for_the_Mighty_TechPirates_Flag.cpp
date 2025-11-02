#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=105;
int a[N][N];
int n,h;
pair<int,int> fr(int row, int start, int end){
     for(int i=start;i<=end;i++){
        h+=a[row][i];
        if(h<=0){
            return {row,i};
        }
     }
     return {0,0};
}
pair<int,int> lc(int col, int start, int end){
     for(int i=start;i<=end;i++){
        h+=a[i][col];
        if(h<=0){
            return {i,col};
        }
     }
     return {0,0};
}
pair<int,int> lr(int row, int start, int end){
     for(int i=start;i>=end;i--){
        h+=a[row][i];
        if(h<=0){
            return {row,i};
        }
     }
     return {0,0};
}
pair<int,int> fc(int col, int start, int end){
     for(int i=start;i>=end;i--){
        h+=a[i][col];
        if(h<=0){
            return {i,col};
        }
     }
     return {0,0};
}
pair<int,int> center(int x,int y){
    if((h-1)<=(a[x][y]+1)){
        return {x,y};
    }
    return {0,0};
}
void solve(){
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++){
        cin>>n>>h;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>a[i][j];
                a[i][j]--;
            }
        }
        int f=1;
        int l=1,r=n;
        pair<int,int>ans;
        for(int i=1;i<=n/2;i++){
            ans= fr(l,l,r);
            if(ans.first!=0ll && ans.second!=0ll){
                f=0;
                break;
            }
            ans=lc(r,l+1,r);
            if(ans.first!=0ll && ans.second!=0ll){
                f=0;
                break;
            }
            ans=lr(r,r-1,l);
            if(ans.first!=0ll && ans.second!=0ll){
                f=0;
                break;
            }
            ans=fc(l,r-1,l+1);
            if(ans.first!=0ll && ans.second!=0ll){
                f=0;
                break;
            }
            l++;
            r--;
        }
        
        if(f) ans=center((n+1)/2, (n+1)/2);
        if(ans.first!=0ll && ans.second!=0ll){
            cout<<"Case #"<<tc<<": "<<"Luffy dies at ("<<ans.first<<", "<<ans.second<<")"<<endl;
        }
        else cout<<"Case #"<<tc<<": Hail TechPirates 47"<<endl;

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}