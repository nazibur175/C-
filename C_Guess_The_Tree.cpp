#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
// void solve1(){
//     test{
//         int n;
//         cin>>n;
//         //vector<int>v;
//         // for(int i=n;i>=1;i--){
//         //     v.push_back(i);
//         // }

//         //map<pair<int,int>,int>is_called;
//         map<pair<int,int>,int>is_vertex;
//         int attach[n+1]={0};
//         int root=1;
//         attach[1]=1;
//         for(int i=2;i<=n;i++){
//             if(attach[i]) continue;
//             int a=root;
//             int b=i;
//             cout<<"? "<<a<<" "<<b<<endl;
//             cout<<flush;
//             int x;
//             cin>>x;
//             if(x==a){
//                 is_vertex[{a,b}]=1;
//                 is_vertex[{b,a}]=1;
//                 attach[a]=1;
//                 attach[b]=1;
//             }
//             else{
//                 vector<int>v;
//                 v.push_back(b);
//                 if(attach[x]){
//                     a=x;
//                 }
//                 else 
//                 v.push_back(x);
//                 //a=a;
                
//                 while (v.size())
//                 {
//                     b=v.back();
//                     cout<<"? "<<a<<" "<<b<<endl;
//                     cout<<flush;
//                     cin>>x;
//                     if(x==a){
//                         is_vertex[{a,b}]=1;
//                         is_vertex[{b,a}]=1;
//                         attach[a]=1;
//                         attach[b]=1;
//                         a=b;
//                         v.pop_back();
//                     }
//                     else if(attach[x]){
//                         a=x;
//                     }
//                     else{
//                         v.push_back(x);
//                     }

//                 }
                
//             }
//         }

//        // cout<<is_vertex.size()<<endl;
//        map<pair<int,int>,int>is_printed;
//        cout<<"! ";
//        for(auto x:is_vertex){
//          int aa= x.first.first;
//          int bb= x.first.second;
//          if(is_printed[{aa,bb}]==0){
    
//             cout<<aa<<" "<<bb<<" ";
//             is_printed[{aa,bb}]=1;
//             is_printed[{bb,aa}]=1;
//          }
//        }
//          cout<<endl;
//          cout<<flush;
        
//     }

// }


set<pair<int,int>>ans;
void is_connected(int a, int b,int check[]){
    if(check[b]) return;
    cout<<"? "<<a<<" "<<b<<endl;
    cout<<flush;
    int x;
    cin>>x;
    if(x==a){
        ans.insert({a,b});
    }
    else{
        is_connected(a,x,check);
        is_connected(x,b,check);
    }
    check[b]=1;
}
void solve2(){
    test{
        ans.clear();
        int n;
        cin>>n;
        int check[n+1]={0};
        for(int i=2;i<=n;i++){
            is_connected(1,i,check);
        }
        cout<<"! ";
        for(auto x:ans) cout<<x.first<<" "<<x.second<<" ";
        cout<<endl;
        cout<<flush;
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
//solve1();
solve2();

}