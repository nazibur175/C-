#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 3e3*3e3+3e3+10;
int g[N];
void solve(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int g0,x,y,z;
    cin>>g0>>x>>y>>z;
    g[0]=g0;
    for(int i=1;i<=(n*m+m+5);i++){
        g[i]= ((g[i-1]*x)%z + y%z)%z;
    }

    int matrix[n+1][m+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            matrix[i][j]= g[(i-1)*m+(j-1)];
        }
    }

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=m;j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<"-------"<<endl;
    
    int prefix[n+1][m+1];
    memset(prefix,0,sizeof(prefix));
    for(int i=1;i<=n;i++){
        deque<int>dq;
        for(int j=1;j<=m;j++){
            while (dq.size() && matrix[i][j]<=matrix[i][dq.back()])
            {
                dq.pop_back();
            }
            dq.push_back(j);
            //cout<<dq.front()<<" "<<dq.back()<<endl;
            if((dq.back()-dq.front()+1)>b) dq.pop_front();
            prefix[i][j]=matrix[i][dq.front()];
        }
    }


    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=m;j++){
    //         cout<<prefix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<"-------"<<endl;

    
    memset(matrix,0,sizeof(matrix));
    
    for(int j=1;j<=m;j++){
        deque<int>dq;
        for(int i=1;i<=n;i++){
            while (dq.size() && prefix[i][j]<=prefix[dq.back()][j])
            {
                dq.pop_back();
            }
            dq.push_back(i);
            //cout<<dq.front()<<" "<<dq.back()<<endl;
            if((dq.back()-dq.front()+1)>a) dq.pop_front();
            matrix[i][j]=prefix[dq.front()][j];
        }
    }


    int ans=0;
     for(int i=1;i<=n-a+1;i++){
        for(int j=1;j<=m-b+1;j++){
            ans+= matrix[i+a-1][j+b-1];
        }
       
    }
    cout<<ans<<endl;





}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}