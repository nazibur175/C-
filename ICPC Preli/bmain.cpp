#include <iostream>
using namespace std;

int calculateS(int A, int N) {
    int S = 0;
    for (int i = 1; i <= N; i++) {
        int x= abs(i % A - i % (A - 1));
        cout<<x<<endl;
        S+=x;
    }
    return S;
}

int main() {
    int t;
    cin>>t;
    for(int ii=1;ii<=t;ii++){
        int a,n;
        cin>>a>>n;
        int result = calculateS(a, n);
        cout<<"Final = "<<result<<endl;

    }

   

    return 0;
}
