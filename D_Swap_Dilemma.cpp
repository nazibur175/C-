#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e5+10;
int cnt=0;
void merge(int a[],int l,int r,int mid){
    //l=3
    //r=4
    //mid=3
    int l_sz = mid-l+1;
    int L[l_sz+1];
    int r_sz= r - mid;
    int R[r_sz+1];
    for(int i=0;i<l_sz;i++){
        L[i]=a[l+i];
    }
    for(int i=0;i<r_sz;i++){
        R[i]=a[i+mid+1];
    }
    L[l_sz] = R[r_sz]= INT_MAX;
    int l_i = 0;
    //4
    int r_i = 0;
    //5
    for(int i=l;i<=r;i++){
        if(L[l_i]<= R[r_i]){
            a[i]=L[l_i];
            l_i ++;
        }
        else{
            a[i] = R[r_i];
            cnt+=(l_sz-l_i);
            //cout<<cnt<<" "<<l<<" "<<r<<" "<<mid<<endl;
            r_i++;
        }
    }
    }
    void mergeSort(int a[], int l,int r){
        if(l==r) return ;
        int mid=(l+r)/2;
        mergeSort(a, l,mid);
        mergeSort(a, mid+1 , r);
        merge(a,l,r,mid);
    }

void solve(){
    
    test{
        int n;
        cin>>n;
        int aa[n];
        int bb[n];
        for(int i=0;i<n;i++){
            cin>>aa[i];
        }
        for(int i=0;i<n;i++){
            cin>>bb[i];
        }
        cnt=0;
        mergeSort(aa,0,n-1);
        //cout<<cnt<<endl;
         int ca=cnt;
         cnt=0;
         mergeSort(bb,0,n-1);
         int cb=cnt;
         int ans=1;
         for(int i=0;i<n;i++){
            if(aa[i]!=bb[i]){
                ans=0;
                break;
            }
         }
        // cout<<ca<<"---"<<cb<<endl;
        if(ans==0) cout<<"NO"<<endl;
        else if(ca==cb)cout<<"YES"<<endl;
        else if(abs(ca-cb)%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}
// cnt+= mid-l+1;
