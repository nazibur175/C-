#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
string queryshuru1(string s){

    string temp="1"+s;
    //cout<<temp.size()<<" "<<temp<<endl;
    cout<<"? "<<temp<<endl;
    cout<<flush;
    int val;
    cin>>val;
    if(val==1) return temp;
    else return "#";
}
string queryshuru0(string s){
    string temp="0"+s;
    cout<<"? "<<temp<<endl;
    cout<<flush;
    int val;
    cin>>val;
    if(val==1) return temp;
     else return "#";
}

string queryshes1(string s){
    string temp=s+"1";
    cout<<"? "<<temp<<endl;
    cout<<flush;
    int val;
    cin>>val;
    if(val==1) return temp;
    else return "#";
}
string queryshes0(string s){
    string temp=s+"0";
    cout<<"? "<<temp<<endl;
    cout<<flush;
    int val;
    cin>>val;
    if(val==1) return temp;
    else return "#";
}
void solve(){
    test{
        int n;
        cin>>n;
        string ans="";
        if(queryshuru1(ans)!="#"){
            ans="1";
        }
        else ans="0";
        
        while (ans.size()<n)
        {
            if(queryshes0(ans)!="#"){
                ans+="0";
            }
            else if(queryshes1(ans)!="#"){
                ans+="1";
            }
            else{
                break;
            }
        }

        if(ans.size()!=n){
            while (1)
            {
                if(ans.size()+1==n){
                    if(queryshuru0(ans)!="#"){
                    ans="0"+ans;
                    }
                    else {
                        ans="1"+ans;
                    }
                    break;
                }
                else {
                    if(queryshuru0(ans)!="#"){
                    ans="0"+ans;
                    }
                    else if(queryshuru1(ans)!="#"){
                    ans="1"+ans;
                    }
                    else break;
                }
            }
            
        }
        cout<<"! "<<ans<<endl;
        //cout<<"------"<<endl;
        cout<<flush;
        
    }


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}