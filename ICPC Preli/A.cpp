#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

// Function to find the longest subarray with K almost prime factors
int longestSubarrayWithKAlmostPrimes(vector<int>& A, int K) {
    int n = A.size();
    int left = 0, count = 0, maxLength = 0;
    unordered_map<int, int> primeFactorCount;

    for (int right = 0; right < n; right++) {
        // Check if the right element is a prime
        if (isPrime(A[right])) {
            primeFactorCount[A[right]]++;
            if (primeFactorCount[A[right]] == 1) {
                count++;
            }
        }

        // If there are more than K almost prime factors, move the left pointer
        while (count > K) {
            if (isPrime(A[left])) {
                primeFactorCount[A[left]]--;
                if (primeFactorCount[A[left]] == 0) {
                    count--;
                }
            }
            left++;
        }

        // Update the maximum length
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

int main() {
    int n, K;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> A(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "Enter the value of K: ";
    cin >> K;

    int result = longestSubarrayWithKAlmostPrimes(A, K);
    cout << "Length of the longest subarray with " << K << " almost prime factors: " << result << endl;

    return 0;
}
