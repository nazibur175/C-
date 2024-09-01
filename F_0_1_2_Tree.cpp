#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int a,b,c;
        cin>>a>>b>>c;
        if(a+1!=c){
            cout<<"-1\n";
            continue;
        }
        int height=0;
        vector<int>now,next;
        if(a){
            now.push_back(2);
            a--;
        }
        else if(b){
            now.push_back(1);
            b--;
        }
        else{
            now.push_back(0);
            c--;
        }
        while(a+b+c){
            height++;
            for(auto z:now){
                if(z==2){
                    if(a){next.push_back(2);a--;}
                    else if(b){next.push_back(1);b--;}
                    else if(c){next.push_back(0);c--;}
 
                    if(a){next.push_back(2);a--;}
                    else if(b){next.push_back(1);b--;}
                    else if(c){next.push_back(0);c--;}
                }
                else if(z==1){
                    if(b){next.push_back(1);b--;}
                    else if(c){next.push_back(0);c--;}
                }
            }
            now.clear();
            now=next;
            next.clear();
        }
        cout<<height<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}