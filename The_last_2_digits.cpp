#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    long long int m= a*b*c*d;

    // 10015
    int dig1=m%10;
    //dig1=10015%10=5;
    m=m/10;
    //m = 10015/10 = 1001
    int dig2=m%10;
    // dig2 = 1001%10 = 1
    cout<<dig2<<dig1<<endl;

    return 0;
}

//  div = a/b;
// a = 5, b=1;
// a = 5, b=0;

//div = 5;
// if(b==0) 
//     div = 0;
// else 
//     div = a/b;

// A = 65
// a = 97
//-----------
//     =32

// 65---90
if(ch>='A' && ch<='Z'){
    
}
