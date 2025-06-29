// int bigmod(int a,int b){
//     if(b==1) return a%mod;
//     if(b%2==0){
//         int x = bigmod(a,b/2);
//         return 1LL*x*x%mod;
//     }
//     else {
//         int x=bigmod(a,b/2);
//         return (1LL*x*x)%mod*a%mod;
//     }
// }


// Preferable to use below bigmod function because I get memory limit excedded on 
// NCPC Problem link:https://lightoj.com/problem/rik-vik

// int bigmod(int a, int b) {
//     int res = 1;
//     while (b > 0) {
//         if (b % 2 == 1) {
//             res = (res * a) % mod;
//         }
//         a = (a * a) % mod;
//         b /= 2;
//     }
//     return res;
// }
