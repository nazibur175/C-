#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define test int t; cin>>t; while(t--)
const int N=1e6+9;
int prime[N+1];
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

using u64 = uint64_t;
using u128 = __uint128_t;
u64 binpower(u64 base, u64 e, u64 mod) {
    u64 result = 1;
    base %= mod;
    while (e) {
        if (e & 1)
            result = (u128)result * base % mod;
        base = (u128)base * base % mod;
        e >>= 1;
    }
    return result;
}

bool check_composite(u64 n, u64 a, u64 d, int s) {
    u64 x = binpower(a, d, n);
    if (x == 1 || x == n - 1)
        return false;
    for (int r = 1; r < s; r++) {
        x = (u128)x * x % n;
        if (x == n - 1)
            return false;
    }
    return true;
};

bool MillerRabin(u64 n, int iter=5) { 
    if (n < 4)
        return n == 2 || n == 3;

    int s = 0;
    u64 d = n - 1;
    while ((d & 1) == 0) {
        d >>= 1;
        s++;
    }

    for (int i = 0; i < iter; i++) {
        int a = 2 + rand() % (n - 3);
        if (check_composite(n, a, d, s))
            return false;
    }
    return true;
}

void solve(){
    int n;
    cin>>n;
    vector<int>primes=seive();
    while (n--)
    {
        int x;
        cin>>x;
        int ans=1;
        for(int i=0;i<primes.size() && (prime[i]*prime[i])<=x;i++)
        {
            if(x%primes[i]==0)
            {
                int cnt=0;
                while(x%primes[i]==0)
                {
                    x/=primes[i];
                    cnt++;
                }
                ans*=(cnt+1);
            }
            if(x==1)
            {
                break;
            }
        }
        if(x>1)
        {
            if(MillerRabin(x))
            {
                ans*=2;
            }
            else
            {
                int xx=sqrtl(x);
                if(xx*xx==x)
                {
                    ans*=3;
                }
                else
                {
                    ans*=4;
                }
            }
        }
        cout<<ans<<endl;
    }
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}