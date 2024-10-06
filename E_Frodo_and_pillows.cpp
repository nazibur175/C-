#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int n,m,k;
int ok(int mid){
    int left = k-1;
    int right=  n-(k-1);
    int total_lagbe=0;

    if(left>=mid-1){
        total_lagbe+= ((mid-1)*(mid-1+1))/2;
        total_lagbe+= left-(mid-1);
    }
    else{
      
        total_lagbe+= ((mid-1)*(mid-1+1))/2;
        int beshi = (mid-1) -left;
        total_lagbe-= (beshi*(beshi+1))/2;
    }
    

    if(right>=mid){
        total_lagbe+= (mid*(mid+1))/2;
        total_lagbe+= right-mid;
    }
    else {
        total_lagbe+= (mid*(mid+1))/2;
        int beshi = (mid-right);
        total_lagbe-= (beshi*(beshi+1))/2;
    }
    return total_lagbe<=m;
}
void solve(){
    cin>>n>>m>>k;
    int l=0;
    int r=m+1;

    while (r-l>1)
    {
        int mid=(l+r)/2;
        if(ok(mid)){
            l=mid;
        }
        else {
            r=mid;
        }
    }
    cout<<l<<endl;
  
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}