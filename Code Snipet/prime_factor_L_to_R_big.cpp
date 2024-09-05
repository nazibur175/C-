// bool isPrime[r - l + 1]; //filled by true
// for (long long i = 2; i * i <= r; ++i) {
//     for (long long j = max(i * i, (l + (i - 1)) / i  * i); j <= r; j += i) {
//         isPrime[j - l] = false;
//     }
// }
// for (long long i = max(l, 2); i <= r; ++i) {
//     if (isPrime[i - l]) {
//         //then i is prime
//     }
// }