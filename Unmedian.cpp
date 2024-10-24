#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int mx_ele=*max_element(v.begin(),v.end());
        int mn_ele=*min_element(v.begin(),v.end());
        int max_index=0;
        int min_index=0;
        for(int i=0;i<n;i++){
            if(v[i]==mx_ele){
                max_index=i;
            }
        }
        for(int i=0;i<n;i++){
            if(v[i]==mn_ele){
                min_index=i;
                //break;
            }
        }
        vector<int>age;
        vector<int>pore;
        for(int i=0;i<max_index;i++){
            age.push_back(v[i]);
        }
        for(int i=max_index;i<n;i++){
            pore.push_back(v[i]);
        }
        int remove_pos = n-2;
        if((min_index>max_index) || ((n-1-max_index)>remove_pos)){
            cout<<"-1"<<endl;
            continue;
        }
        else {
            cout<<remove_pos<<endl;
            while(pore.size()>2){
                cout<<max_index+1 <<" "<<max_index+3<<endl;
                pore.pop_back();
            }
            while(pore.size()){
                age.push_back(pore.back());
                pore.pop_back();
            }
            while(age.size()>2){
                int x=age.size();
                int y=age.size()-2;
                cout<<y<<" "<<x<<endl;
                age.pop_back();
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