#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    // n=400;
    int year=n/365;
    // year = 400/365;
    // year = 1;
    n=n%365;
    int mon=n/30;
    n=n%30;
    cout<<year<<" years"<<endl;
    cout<<mon<<" months"<<endl;
    cout<<n<<" days"<<endl;


    return 0;
} 

// 10^5 * 10^5 = 10^10

// cntrl+c = copy
// cntrl + v = paste 
// cntrl + a = select all 


// n*(n+1)/2;

//let n = 3;
// 3*(3+1)/2 = 12/2  = 6;

// n = 10; 
// 10*11/2 = 5*11 = 55;