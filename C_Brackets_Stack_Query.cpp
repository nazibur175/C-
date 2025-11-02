#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 8e5+9;
int presum[N]={0};
void solve(){
    int q;
    cin>>q;
    int in=1;
    int last_neg=0;
    while (q--)
    {
        int type;
        cin>>type;
        if(type==1){
            char ch;
            cin>>ch;
            if(ch=='('){
                in++;
                presum[in]=presum[in-1]+1;
            }
            else {
                in++;
                presum[in]=presum[in-1]-1;
            }
            if(last_neg){
                cout<<"No"<<endl;
            }
            else if(presum[in]<0){
                last_neg=in;
                cout<<"No"<<endl;
            }
            else if(presum[in]!=0){
                cout<<"No"<<endl;
            }
            else {
                cout<<"Yes"<<endl;
            }
        }
        else {
            presum[in]=0;
            in--;
            if(presum[in]==0 && (last_neg>=in || last_neg==0)){
                last_neg=0;
                cout<<"Yes"<<endl;
            }
            else {
                cout<<"No"<<endl;
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