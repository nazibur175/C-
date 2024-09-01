#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void divisors(int n, vector<int>&divisor){
    for(int i=1;i*i<=n;i++){
        if (n%i==0)
        {
            if (n/i!=i){
                divisor.push_back(i);
                divisor.push_back(n/i);
            }
                
            else
               divisor.push_back(i);
        }
    }
}
int lcm(int x, int y){
    //gcd*lcm=x*y;
    int lc=(x*y)/(__gcd(x,y));
    return lc;
}
bool isprime(int n){
	if(n<2) return false;
	if(n<=3) return true;
	if(n%2==0) return false;
	for(int i=3;i<=sqrt(n);i+=2){
		if(n%i==0) return false;
	}
	return true;
}

int solve(){
    int n;
    cin>>n;
    if(isprime(n)){
        cout<<1<<" "<<n<<endl;
        return 0;
    }

    vector<int>v;
    divisors(n,v);
    // cout<<v.size()<<endl;
    sort(v.begin(),v.end());
    int nn=v.size();
    int ans=INT64_MAX;
    int a=0,b=0;
    for(int i=0;i<nn;i++){
        for(int j=i+1;j<nn;j++){
            if(v[i]*v[j]==n && lcm(v[i],v[j])==n){
                int x=max(v[i],v[j]);

                if(x<ans){
                    a=v[i];
                    b=v[j];
                    ans=min(ans,x);
                    //cout<<v[i]<<" "<<v[j]<<" "<<ans<<" "<<x<<endl;;
                }
            }
        }
    }
    if(n==1)
    cout<<1<<" "<<1<<endl;
    else 
    cout<<a<<" "<<b<<endl;
    return 0;
   // cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}