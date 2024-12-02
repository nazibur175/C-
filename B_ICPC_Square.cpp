#include <bits/stdc++.h>
#define int long long int
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

  int n,d,x;
  cin>>n>>d>>x;
  if(x*2>n || x>d) cout<<x<<endl;
  else
  {
     int l=0;
     int r=(d/x)*(x);
     r+=x;
     //int p=0;
     while(r-l>x)
     {
        int m=(l+r)/2;
        m=(m/x)*x;
    
        if(((m+x)<=d) && ((m+x)*2)<=n) l=m;
        else r=m;
      
        //p++;
     
     }
     int temp = (999999789319);
     //cout<<temp<<endl;
     cout<<(temp)%x<<endl;
        //cout<<999999789319/2<<endl;
     //cout<<l<<endl;
     //cout<<n<<endl;
     //int ans =(l+x)*2;
     //cout<<ans<<endl;
  }
   
}