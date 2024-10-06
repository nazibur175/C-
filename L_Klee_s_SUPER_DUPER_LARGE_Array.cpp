#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define test int t;cin>>t; while(t--)

int diff(int l,int r,int mid){
    int ager_tuku = (l*(l-1))/2;
    int first_tuku= (mid*(mid+1)/2)- ager_tuku;
    int second_tuku= (r*(r+1)/2)-(mid*(mid+1)/2);
    int diff= abs(first_tuku-second_tuku);
    return diff;
}
int n=0;
int ternarySearch(int l, int r)

{
    int x=l;
    int y=r;
    int ans=INT64_MAX;
    while (r > l) {
        int mid1 = l+(r-l)/3;
        int mid2 = r-(r-l)/3;

        if (diff(x,y,mid1) < diff(x,y,mid2)) {
            ans=min(ans,diff(x,y,mid1));
            r=mid2-1 ;
        }
        else {
            l=mid1+1 ;
            ans=min(ans,diff(x,y,mid2));
        }
    }
    return ans;
}

int32_t main()
{
    test{
        int k;
        cin>>n>>k;
        int l=k;
        int r=n+k-1;
        int ans=ternarySearch(l,r);
        cout<<ans<<endl;
    }
}