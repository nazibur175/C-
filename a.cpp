#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int maxSubArraySum(int a[], int size)
{
	int max_so_far = INT_MIN, max_ending_here = 0;

	for (int i = 0; i < size; i++) {
        int m=a[i]%2;
        int n=a[i-1]%2;
        if(m<0) m=m*(-1);
        if(n<0) n=n*(-1);
        if(i!=0 && m==n){
            max_ending_here=0;
            //max_ending_here=a[i];
            //max_ending_here=a[i-1];
            //continue;
            //break;
        }
        // else 
		max_ending_here = max_ending_here + a[i];
		if (max_so_far < max_ending_here)
			max_so_far = max_ending_here;

		if (max_ending_here < 0)
			max_ending_here = 0;
        //cout<<i<<"--"<<max_so_far<<endl;
	}
	return max_so_far;
}
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans = maxSubArraySum(a, n);
	    cout<< ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}