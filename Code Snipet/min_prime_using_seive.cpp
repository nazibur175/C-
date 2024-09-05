// int minPrime[n + 1];
// for (int i = 2; i * i <= n; ++i) {
//     if (minPrime[i] == 0) {         //If i is prime
//         for (int j = i * i; j <= n; j += i) {
//             if (minPrime[j] == 0) {
//                 minPrime[j] = i;
//             }
//         }
//     }
// }
// for (int i = 2; i <= n; ++i) {
//     if (minPrime[i] == 0) {
//         minPrime[i] = i;
//     }
// }

// Factorization with min prime

// vector<int> factorize(int n) {
//     vector<int> res;
//     while (n != 1) {
//         res.push_back(minPrime[n]);
//         n /= minPrime[n];
//     }
//     return res;
// }
