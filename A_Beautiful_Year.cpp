#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,d;
    cin>>n;
    n++;
    while(1)
    {
      a=n%10;
      b=(n/10)%10;
      c=(n/100)%10;
      d=(n/1000)%10;
      if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
      {
        cout<<n<<endl;
        break;
      }
    n++;
    }
    return 0;
}