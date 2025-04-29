#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=4e6;
int prime[N+9];
vector<int> seive()
{
	for(int i=2;i*i<=N;i++)
	{
		if(prime[i]==0)
		{
			for(int j=i*i;j<=N;j+=i)
			{
				prime[j]=1;
			}
		}
	}
    vector<int>v;
	for(int i=2;i<=N;i++)
	{
		if(prime[i]==0)
            v.push_back(i);
	}
	return v;
}
int pre[1000000];
void solve(){
    vector<int>v=seive();
    int temp=v.size();
   
    int sum=0;
    for(int i=0;i<temp;i++){
        sum+=v[i];
        pre[i+1]=sum;
    }
    test{
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.rbegin(),a.rend());
        int s=0;
        int pres[n+100]={0};
     
        for(int i=0;i<n;i++){
            s+=a[i];
            pres[i+1]=s;
        }
        int l=0;
        int r=n+1;
        while (r-l>1){
            int mid = (l+r)/2;
            int sum1=pres[mid];
            int sum2=pre[mid];
            if(sum1>=sum2){
                l=mid;
            }
        else{
                r=mid;
            } 
        }
        cout<<n-l<<endl;
    }
    
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}