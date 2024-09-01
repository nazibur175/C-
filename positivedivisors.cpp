#include<bits/stdc++.h>
using namespace std;
#define int long long
void divisor(int n)
{
    int lim=sqrt(n);
    vector<int>v;
    for(int i=1;i<=lim;i++)
    {
        if(n%i==0)
        {
            if(i==n/i)
            {
                v.push_back(i);
            }
            else
            {
                v.push_back(i);
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    for(auto x:v)
    cout<<x<<endl;
}
int32_t main()
{
    int n;
    cin>>n;
    divisor(n);
    return 0;
}