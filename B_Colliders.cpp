#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=2e5;
int minPrime[N + 1];
vector<int>v[N+1];
vector<int>check[N+1];
void min_prime_divisor(){
    for (int i = 2; i * i <= N; ++i) {
    if (minPrime[i] == 0) {         //If i is prime
        for (int j = i * i; j <= N; j += i) {
            if (minPrime[j] == 0) {
                minPrime[j] = i;
            }
        }
    }
}
for (int i = 2; i <= N; ++i) {
    if (minPrime[i] == 0) {
        minPrime[i] = i;
    }
}
}

//Factorization with min prime

vector<int> factorize(int n) {
    vector<int> res;
    while (n != 1) {
        res.push_back(minPrime[n]);
        n /= minPrime[n];
    }
    return res;
}

void solve(){
    min_prime_divisor();
   
    for(int i=2;i<=N;i++){
        v[i]=factorize(i);
    }

    int n,m;
    cin>>n>>m;
    map<int,int>is_on;
    map<int,vector<int>>prime_factor;
     for(int i=1;i<=m;i++){
         char ch;
         int num;
         cin>>ch>>num;
         if(ch=='+'){
             if(is_on[num]==1){
                 cout<<"Already on"<<endl;
             }
             else{
                 int possible=-1;

                 for(auto x:v[num]){
                    if(prime_factor[x].empty()){
                        continue;
                    }
                    else{
                        possible=prime_factor[x].front();
                        break;
                    }
                 }

                 if(possible==-1){
                     cout<<"Success"<<endl;
                     is_on[num]=1;

                     for(auto x:v[num]){
                        prime_factor[x].push_back(num);
                     }
                 }
                else {
                    cout<<"Conflict with "<<possible<<endl;
                 }
             }
         }
         if(ch=='-'){
             if(is_on[num]==0){
                 cout<<"Already off"<<endl;
             }
             else {
                 cout<<"Success"<<endl;
                 is_on[num]=0;

                 for(auto x:v[num]){
                    auto it = find(prime_factor[x].begin(), prime_factor[x].end(), num);
                    if (it != prime_factor[x].end()) {
                        prime_factor[x].erase(it); 
                    }
                 }
             }
         }
     }

    //cout<<"Ok"<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}