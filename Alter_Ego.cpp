#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        vector<int>even;
        vector<int>odd;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0) even.push_back(a[i]);
            else odd.push_back(a[i]);
        }

        //sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        reverse(even.begin(),even.end());
        vector<int>ans;
        //cout<<even.size()<<endl;
        // for(auto x: even) cout<<x<<" ";
        // cout<<endl;
        vector<int>ans1;
        vector<int>ans2;
        for(int i=0;i<even.size()/2;i++)
        {
            int j=even.size()/2 + i;
                if((even[i]+even[j])==0) ans1.push_back(0);
                else ans1.push_back((even[i]+even[j])/2);

                 if((even[i]-even[j])==0) ans2.push_back(0);
                else ans2.push_back((even[i]-even[j])/2);
                //cout<<even[i]<<" "<<even[j]<<endl;
                // i++;
                // j--;
        }
        sort(odd.begin(),odd.end());
        reverse(odd.begin(),odd.end());
        
        for(int i=0;i<odd.size()/2;i++)
        {
                int j=odd.size()/2  +i;
                if((odd[i]+odd[j])==0) ans1.push_back(0);
                else ans1.push_back((odd[i]+odd[j])/2);

                 if((odd[i]-odd[j])==0) ans2.push_back(0);
                else ans2.push_back((odd[i]-odd[j])/2);
                
                // i++;
                // j--;
        }
        
        //sort(ans.begin(),ans.end());
        //reverse(ans.begin(),ans.end());
        
        
    //    for(int i=0;i<n/2;i++)
    //     {
    //         int j=n/2 + i;
    //         if((a[j]+a[i])%2!=0 || (a[j]-a[i])%2!=0){
    //             no=1;
    //             break;
    //         }
    //         else 
    //         {
    //             if((a[i]+a[j])==0) ans.push_back(0);
    //             else ans.push_back((a[i]+a[j])/2);
    //              if((a[j]-a[i])==0) ans.push_back(0);
    //             else ans.push_back((a[j]-a[i])/2);
    //         }
            
    //     }
    //     sort(ans.begin(),ans.end());
    //     reverse(ans.begin(),ans.end());
    //     if(no) cout<<-1<<endl;
    //     else 

    if(odd.size()%2 !=0 || even.size()%2 !=0 || ans1.size() + ans2.size()!=n) cout<<-1<<endl;
    else {
        for(auto x: ans1){
            cout<<x<<" ";
        }
        for(auto x: ans2){
            cout<<x<<" ";
        }
        cout<<endl;

    }
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}