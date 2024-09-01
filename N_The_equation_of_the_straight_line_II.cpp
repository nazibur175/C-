#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("line3.in", "r", stdin);
    freopen("line3.out", "w", stdout);
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    double temp = d*(sqrt(a*a + b*b));

    double c1= -temp+c;
    double c2= temp+c;
    cout<<setprecision(10)<<fixed;
    cout<<a<<" "<<b<<" "<<c1<<endl;
    cout<<a<<" "<<b<<" "<<c2<<endl;
   
    return 0;
}