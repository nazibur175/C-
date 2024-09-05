#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             10000007
#define test int t; cin>>t; while(t--)
const int N=1e6+10;
int a[N];
int c=0;
void merge(int l,int r,int mid){
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
    int r_i = 0;
    for(int i=l;i<=r;i++){
        if(L[l_i]<= R[r_i]){
            a[i]=L[l_i];
            l_i ++;
         
        }
        else{
            a[i] = R[r_i];
            r_i++;
            c+=(l_sz-l_i);
            c=c%mod;
         
        }
    }
    }
    void mergeSort(int l,int r){
        if(l==r) return;
        int mid=(l+r)/2;
        mergeSort(l,mid);
        mergeSort(mid+1 , r);
        merge(l,r,mid); 
    }

void solve(){ 

  int t;
  cin>>t;
  for(int tt=1;tt<=t;tt++){
  int n;
  cin>>n;
  memset(a,0,sizeof(a));
  for(int i=0;i<n;i++){
      cin>>a[i];
  }

    mergeSort(0,n-1);
    cout<<"Case "<<tt<<": ";
    cout<<c<<endl;
    c=0;
  }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}