#include<bits/stdc++.h>
using namespace std;

double distance(int x1,int y1,int x2,int y2){
    return sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
}

int dot(int x1,int y1,int x2,int y2){
    return (x1*x2 + y1*y2);
}

// point , start , end
double cal(int x1,int y1,int x2, int y2, int x3 , int y3){
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

    // Vec BV
    int bvx= x1-x3;
    int bvy = y1-y3;

    int dot_ab_bv = dot(abx,aby,bvx,bvy);
    int dot_ab_av = dot(abx,aby,avx,avy);

    double ans = 0;
    // B near to V
    if(dot_ab_bv>0){
         ans = distance(x1,y1,x3,y3);
    }

    // A near to V
    else if(dot_ab_av<0){
         ans = distance(x1,y1,x2,y2);
    }

    // Perpendicular
    else {
         ans = abs(a*x1 + b*y1 + c)/ sqrt(a*a + b*b);
    }
    
    return ans;
}
int position(int xa,int ya,int xb,int yb,int x,int y){
    int val = (x-xa)*(ya-yb) - (xa-xb)*(y-ya); 
    if(val ==0 ) return 0;
    else if(val > 0) return 1;
    else return 2;
}
bool onsegment(int x1,int y1,int x2,int y2,int x,int y){
    return (x<=max(x1,x2) && x>=min(x1,x2) && y<=max(y1,y2) && y>=min(y1,y2));
}
int intersection_check(int x1,int y1, int x2 , int y2, int x3, int y3, int x4, int y4){
    if((position(x1,y1,x2,y2,x3,y3)+position(x1,y1,x2,y2,x4,y4)==3) && 
        (position(x3,y3,x4,y4,x1,y1)+position(x3,y3,x4,y4,x2,y2)==3))
        {
            return 1;
        }
        else if(position(x1,y1,x2,y2,x3,y3)==0 && onsegment(x1,y1,x2,y2,x3,y3))
        return 1;
        else if(position(x1,y1,x2,y2,x4,y4)==0 && onsegment(x1,y1,x2,y2,x4,y4))
        return 1;
        else if( position(x3,y3,x4,y4,x1,y1)==0 && onsegment(x3,y3,x4,y4,x1,y1))
        return 1;
        else if( position(x3,y3,x4,y4,x2,y2)==0 && onsegment(x3,y3,x4,y4,x2,y2))
        return 1;
        else return 0;

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("distance5.in", "r", stdin);
    freopen("distance5.out", "w", stdout);

    // V A B
    // point , start , end

    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    vector<double>v(4);
    
    //cal(point , start , end) 
        v[0] = cal(x1,y1,x3,y3,x4,y4);
        v[1] = cal(x2,y2,x3,y3,x4,y4);
        v[2] = cal(x3,y3,x1,y1,x2,y2);
        v[3] = cal(x4,y4,x1,y1,x2,y2);

    sort(v.begin(),v.end());

     cout<<setprecision(15)<<fixed;
     if(intersection_check(x1,y1,x2,y2,x3,y3,x4,y4))
     cout<<0<<endl;
     else 
     cout<<v[0]<<endl;
    return 0;

}