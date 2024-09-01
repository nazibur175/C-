#include<bits/stdc++.h>
using namespace std;
#define int long long 

const int N=1e6;
int n;
struct point
{
    int x,y;
};
point arr[N];
int area(point a,point b, point c){
    return (a.x*(b.y - c.y)-(a.y*(b.x-c.x)) + (b.x*c.y - b.y*c.x));
}

int cal(point p){
    int left=0;
    int right=n-1;
    while (right-left>1)
    {
        int mid = (left+right)/2;
        if(area(arr[0],arr[mid],p)<0){
            right=mid;
        }
        else left=mid;
    }
    if(area(arr[0],arr[left],p)<0) return 0;
    else if(area(arr[left],arr[right],p)<0) return 0;
    else if(area(arr[right],arr[0],p)<0) return 0;
    else return 1;
}

void solve(){
    int t;
    cin>>t;
    for(int ii=1;ii<=t;ii++){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i].x>>arr[i].y;
        }
        int q;
        cin>>q;
        cout<<"Case "<<ii<<":"<<endl;
        while (q--)
        {
            point p;
            cin>>p.x>>p.y;
            int ans=cal(p);
            if(ans) cout<<"y"<<endl;
            else cout<<"n"<<endl;
        }
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}