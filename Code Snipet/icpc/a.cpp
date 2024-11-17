#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int f(const vector<int>&a, int k) {
    int product = 1;
    int sum = 0;

    // Calculate product and sum for the first k elements
    for (int i = 0; i < k; ++i) {
        product *= a[i];
        sum += a[i];
    }

    // Perform bitwise AND between product and sum
    return product & sum;
}

int main() {
    // Example usage
    int t;
    cin>>t;
    while (t--)
    {
        vector<int> a ; // Example array
        int n;
        cin>>n;
        for(int i=2;i<=2*n;i++){
        a.push_back(i);
    }
    do {
       // array a
       int ff=1;
       for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n-1;j++){
            if(f(a,i)==f(a,j)){
                //cout<<i<<" "<<j<<endl;
                ff=0;
            }
        }
       }
       if(ff==1){
        for(int i=0;i<n-1;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        break;
       }
    } while (next_permutation(a.begin(), a.end()));

   //cout<<"OK"<<endl;
    }
    return 0;
}
