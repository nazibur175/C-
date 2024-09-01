#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
// using ll = long long int;
#define ll long long int

bool isPalindrome(ll num) {
ll original = num;
ll reversed = 0;

while (num ) {
int digit = num % 10;
reversed = (reversed * 10) + digit;
num /= 10;
}

return original == reversed;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0), cout.tie(0);

ll n,nn ;
cin >> n ;
nn=cbrtl(n) ;
while(true)
{
    if(isPalindrome(nn*nn*nn))break ;
    else nn-- ;
    if(nn==1)break ;
}
cout << nn*nn*nn << endl ;
}