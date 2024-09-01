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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(n==1){
            cout<<v[0]<<endl;
        }
        else if(n==2){
            cout<<max(v[0],v[1])*2<<endl;
        }
        else if(n==3){
            int x=v[0]*v[2] + max(v[0],v[2])*2;
            int y=max(v[0],v[1]);
            y=max(y,v[2])*3;
            cout<<max(x,y)<<endl;
        }
        else {
            int ma=*max_element(v.begin(),v.end());
            int begin=0;
            int end=n-1;
            for(int i=0;i<n;i++){
                if(v[i]==ma){
                    begin=i;
                    break;
                }
            }
            int k=0;
            for(int i=n-1;i>=0;i--){
                k++;
                if(v[i]==ma){
                    end=i;
                    break;
                }
            }
            int lav=begin;
            if(k<lav) lav=end;
            
            int ans=0;
            if(lav==0){
                ans=2*ma;
                for(int i=2;i<n;i++){
                    ans+=ma*v[i];
                }
            }
            else if(lav==n-1){
                ans=2*ma;
                for(int i=0;i<lav-1;i++){
                    ans+=ma*v[i];
                }
            }
            else {
                for(int i=0;i<n;i++){
                    if(i!=lav && i!=lav-1 && i!=lav+1){
                        ans+=v[i]*ma;
                    }
                }
                vector<int>temp;
                temp.push_back(v.front());
                temp.push_back(ma);
                temp.push_back(v.back());
                int x=temp[0]*temp[2] + max(temp[0],temp[2])*2;
                int y=max(temp[0],temp[1]);
                y=max(y,temp[2])*3;
                ans+=max(x,y);
            }


            cout<<ans<<endl;
            

        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}