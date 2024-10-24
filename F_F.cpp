#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)

bool isLeapyr(int yr) {
    return (yr % 400 == 0) || (yr % 4 == 0 && yr % 100 != 0);
}

int days(int month, int yr) {
    switch (month) {
        case 1: return 31;
        case 2: return isLeapyr(yr) ? 29 : 28; 
        case 3: return 31; 
        case 4: return 30; 
        case 5: return 31;
        case 6: return 30; 
        case 7: return 31;
        case 8: return 31; 
        case 9: return 30; 
        case 10: return 31;
        case 11: return 30; 
        case 12: return 31; 
        default: return 0; 
    }
}

int getDayOfWeek(int year) {
    int month = 1; 
    int day = 1;
    if (month < 3) {
        month += 12;
        year -= 1;
    }

    int k = year % 100; 
    int j = year / 100; 


    int f = day + (13 * (month + 1)) / 5 + k + (k / 4) + (j / 4) - (2 * j);
    int dayOfWeek = f % 7;

   
    return dayOfWeek;
}
int week(int day,int start){
   //cout<<day<<" "<<start<<endl;
   int temp=0;
   while (1)
   {
     temp++;
     if(start==1) break;
     start++;
     if(start==7) start=0;
   }
   
   int cnt=1;
   day-=temp;
   cnt+=(day/7);
   if(day%7) cnt++;
   //cout<<cnt<<endl;
   return cnt;
   
}
int cal(int n){
   int x = getDayOfWeek(n);
   //cout<<x<<endl;
    int cnt=0;
    for(int i=1;i<=12;i++){
       int day=days(i,n);
       //cout<<day<<endl;
       cnt+=week(day,x);
       //cout<<x<<endl;
       for(int j=1;j<=day;j++){
          x++;
          if(x==7)x=0;
       }
    } 
    return cnt;
}
void solve(){
   int n;
   cin>>n;
   int ans = cal(n);
   cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}