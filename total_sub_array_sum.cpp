#include<bits/stdc++.h>
using  namespace  std;
int solve(int ar[],int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=(i*(n-i+1))*ar[i];
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n+4];
        for(int i=1;i<=n;i++)cin>>ar[i];
        cout<<solve(ar,n)<<endl;
    }
    return 0;
}
