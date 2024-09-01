#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod (int)1e9+7
#define pi acos(-1)



int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    
    for(int i=0;i<n-2;i++)
    {
        if(ar[i]+ar[i+1]>ar[i+2])
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;


}
