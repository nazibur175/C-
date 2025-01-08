#include<bits/stdc++.h>
using namespace std;
int main(){
    float n;
    cin>>n;
    //[0,25], (25,50], (50,75], (75,100]
    if(n>=0 && n<=25){
        cout<<"Interval [0,25]"<<endl;
    }
    else if(n>25 && n<=50){
        cout<<"Interval (25,50]"<<endl;
    }
    else if(n>50 && n<=75){
        cout<<"Interval (50,75]"<<endl;
    }
    else if(n>75 && n<=100){
        cout<<"Interval (75,100]"<<endl;
    }
    else {
        cout<<"Out of Intervals"<<endl;
    }

    return 0;
}

// int a,b;
// char ch;
//cin>>a>>ch>>b;

// > < =
// if(ch=='>' && a>b){
//     // right
// }
// else {
//     // wrong
// }
// if(ch=='<' && a<b)


// 1-water  // 2- milk
// 1-milk   // 2-water

// 3-water
// 1-milk
// 2-water

// int x=5,y=6;

// int mn;
// if(x<y){
//     mn=x;
// }
// else mn=y;
// //mn=5;

// a,b,c
// 1 2 3
// a b c   if(a<=b && b<=c && a<=c) cout<<a<<" "<<b<<" "c<<endl;
// a c b   else if(a<=c && c<=b && a<=b) // a c b
// b a c   else if(b<=a && a<=c && b<=c) // b a c
// b c a   
// c a b
// c b a







