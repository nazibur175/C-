#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int   N= (int) 1e7+5;
int spf[N+5];
void sieve()
{
    spf[1] = 1;
    for (int i=2; i<N; i++)
        spf[i] = i;
    for (int i=4; i<N; i+=2)
        spf[i]=2;
 
    for (int i=3; i*i<N; i++)
    {
        if (spf[i] == i)
        {
            for (int j=i*i; j<N; j+=i)
 
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}
 
 
set<int> getFactorization(int x)
{
    set<int> ret;
    while (x != 1)
    {
        ret.insert(spf[x]);
        x = x / spf[x];
    }
    return ret;
}

int32_t main(){
 sieve();
 int n;
 set<int>v = getFactorization(n);
 for(auto x:v) cout<<x<<" ";
 cout<<endl;

}