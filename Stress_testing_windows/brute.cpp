#include <bits/stdc++.h>
using namespace std;
int ara[100010];
int highestOneBit(int i) {
    i |= (i >>  1);
    i |= (i >>  2);
    i |= (i >>  4);
    i |= (i >>  8);
    i |= (i >> 16);
    return i - (((unsigned)i) >> 1);
}
int main () {
    int T, n;
T=1;
    //scanf("%d", &T);
    assert(T<=1000);
    for (int cs=1; cs<=T; cs++) {
        scanf("%d", &n);
        assert(n<=10000);
        int xorsum = 0;
        for (int i=0; i<n; i++) {
            scanf("%d", &ara[i]);
            assert(ara[i] <= 100000);
            xorsum ^= ara[i];
        }
        int cnt = 0;
        int pos = highestOneBit(xorsum);
        for (int i=0; i<n; i++) {
        	if (pos & ara[i]) cnt++;
        }
        printf("Case %d: %d\n", cs, cnt);
        // 110
        // 011
    }
    return 0;
}