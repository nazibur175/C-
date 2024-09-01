#include<bits/stdc++.h>
using namespace std;
double distance(int x1,int y1,int x2,int y2){
    return sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
}
int dot(int x1,int y1,int x2,int y2){
    return (x1*x2 + y1*y2);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("distance3.in", "r", stdin);
    freopen("distance3.out", "w", stdout);
    // V A B
    // point , start , end
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    
    //line 
    int a = y2-y3;
    int b = x3-x2;
    int c= y2*(x2-x3) - x2*(y2-y3) ;

    //Vec AB
    int abx = x3-x2;
    int aby = y3-y2;
    //Vec AV
    int avx = x1-x2;
    int avy = y1-y2;

    int dot_ab_av = dot(abx,aby,avx,avy);

    double ans = 0;
    // a near to v
    if(dot_ab_av<0){
         ans = distance(x1,y1,x2,y2);
    }
    // Perpendicular
    else {
         ans = abs(a*x1 + b*y1 + c)/ sqrt(a*a + b*b);
    }
    
    cout<<setprecision(10)<<fixed<<ans<<endl;
    return 0;
}