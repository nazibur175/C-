#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=605;
int n;
int a[N];
int query(int start, int end){
    cout<<"? ";
    vector<int>temp;
    for(int i=start;i<=end;i++){
        if(a[i]==0){
            temp.push_back(i);
        }
    }
    cout<<temp.size()<<" ";
    for(int i=0;i<temp.size();i++){
        cout<<temp[i];
        if(i<temp.size()-1){
            cout<<" ";
        }
        else
        cout<<endl;
    }
    cout.flush();
    int x;cin>>x;
    return x;
}
 int query2(vector<int>&v,int index){
    cout<<"? ";
    cout<<v.size()+1<<" ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<index<<endl;
    cout.flush();
    int x;cin>>x;
    return x;

 }
void solve(){
   test{
     cin>>n;
     for(int i=1;i<=2*n;i++){
        a[i]=0;
     }
     vector<int>v;
     for(int i=1;i<=2*n;i++){
        int x=query(1,i);
        if(x>0){
            a[i]=x;
            v.push_back(i);
        }
     }
     for(int i=1;i<=2*n;i++){
        if(a[i]==0){
            int x=query2(v,i);
            a[i]=x;
        }
     }
     cout<<"! ";
     for(int i=1;i<=2*n;i++){
        cout<<a[i];
        if(i<2*n){
            cout<<" ";
        }
        else cout<<endl;
     }

   }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}