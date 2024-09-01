#include<iostream>
#include<cstdio>
#include<climits>
using namespace std;
#define int long long int
#define endl '\n'
int vessel[1100];
int n,m;
int container(int capacity)
{
    int counter=1,poured=0,i;
    for(i=0; i<n; i++)
    {
        if(vessel[i]>capacity) return INT_MAX;
        if(poured+vessel[i]<=capacity) poured+=vessel[i];
        else poured=vessel[i],counter++;
    }
    return counter;
}

int binary_s()
{
    int low,high,mid,i;
    low=0;
    high=1000000000;
    for(i=0;i<100;i++)
    {
        mid=(low+high)/2;
        if(container(mid)<=m) high=mid;
        else low=mid+1;
    }
    return mid;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++)
    {
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            cin>>vessel[i];
        }
        cout<<"Case "<<tc<<": "<<binary_s()<<endl;
    }
    return 0;
}