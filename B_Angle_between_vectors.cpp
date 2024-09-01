#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("angle2.in", "r", stdin);
    freopen("angle2.out", "w", stdout);
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    double dot = x1*x2 + y1*y2;
    double len1 = sqrt(x1*x1 + y1*y1);
    double len2 = sqrt(x2*x2 + y2*y2);

    double angle = acos(dot/(len1*len2));
    cout<<setprecision(5)<<fixed<<angle<<endl;
    
    return 0;
}