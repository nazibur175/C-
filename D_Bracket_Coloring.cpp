#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(') cnt++;
            else cnt--;
        }
        if(cnt!=0) {
            cout<<"-1"<<endl;
            continue;
        }

        stack<int>st;
        vector<int>color(n,2);
        int f=1;
        for(int i=0;i<n;i++){
            if(s[i]=='(') st.push(i);
            else {
                if(st.empty()){
                    f=0;
                    continue;
                }
                color[i]=1;
                color[st.top()]=1;
                st.pop();
            }
        }
        if(f==0){
            stack<int>stt;
            color.assign(n,2);
            for(int i=0;i<n;i++) {
                if(s[i]==')') stt.push(i);
                else {
                    if(stt.empty()) {
                        continue;
                    }
                    color[i]=1;
                    color[stt.top()]=1;
                    stt.pop();
                }
            }
            
        }
        int clr=*max_element(color.begin(),color.end());
        cout<<clr<<endl;
        for(int i=0;i<n;i++) cout<<color[i]<<" ";
        cout<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}