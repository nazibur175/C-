#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+9];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int evensum=0;
        int oddsum=0;
        for(int i=1;i<=n;i++){
            if(i%2==1) oddsum+=a[i];
            else evensum+=a[i];
        }
        int l=1;
        int r=n;
        int f=0;
        while (l<r)
        {
            if(evensum==oddsum) {
                f=1;
                //cout<<l<<" "<<r<<endl;
                break;
            }
            else if(evensum>oddsum){
                if(l%2==0 && r%2==0) {
                    int need=evensum-oddsum;
                    if(need==a[l]){
                        evensum-=a[l];
                        l++;
                    }
                    else if(need==a[r]){
                        evensum-=a[r];
                        r--;
                    }
                    else if(a[l]>=a[r]){
                        evensum-=a[r];
                        r--;
                    }
                    else {
                        evensum-=a[l];
                        l++;
                    }
                }
                else if(l%2==0){
                    evensum-=a[l];
                    l++;
                }
                else if(r%2==0){
                    evensum-=a[r];
                    r--;
                }
                else {
                    if(a[l]>=a[r]) {
                        oddsum-=a[r];
                        r--;
                    }
                    else {
                        oddsum+=a[l];
                        l++;
                    }
                }

            }
            else if(oddsum>evensum){

                if(l%2==1 && r%2==1) {
                    int need=oddsum-evensum;
                    if(need==a[l]){
                        oddsum-=a[l];
                        l++;
                    }
                    else if(need==a[r]){
                        oddsum-=a[r];
                        r--;
                    }
                    else if(a[l]>=a[r]){
                        oddsum-=a[r];
                        r--;
                    }
                    else {
                        oddsum-=a[l];
                        l++;
                    }
                }
                else if(l%2==1){
                    oddsum-=a[l];
                    l++;
                }
                else if(r%2==1){
                    oddsum-=a[r];
                    r--;
                }
                else {
                    if(a[l]>=a[r]) {
                        evensum-=a[r];
                        r--;
                    }
                    else {
                        evensum+=a[l];
                        l++;
                    }
                }

            }
        }

        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}