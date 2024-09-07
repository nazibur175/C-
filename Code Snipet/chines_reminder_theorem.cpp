#include <iostream>
#include <vector>
using namespace std;

/** Function to compute extended GCD of two numbers. 
 *  It returns gcd(a, b) and updates x and y such that:
 *  a * x + b * y = gcd(a, b)
 */
int ext_gcd(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int gcd = ext_gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return gcd;
}

/** Chinese Remainder Theorem
 *  Takes two vectors A and M as input:
 *  A = [a1, a2, ..., an]
 *  M = [m1, m2, ..., mn]
 *  Returns {x, L} where x is the unique solution such that:
 *  x ≡ a1 (mod m1), x ≡ a2 (mod m2), ..., x ≡ an (mod mn)
 *  L is the product of all moduli (L = m1 * m2 * ... * mn).
 *  If input is invalid, returns {-1, -1}.
 */
pair<int, int> chinese_remainder_theorem(vector<int> A, vector<int> M) {
    if (A.size() != M.size()) return {-1, -1}; /** Invalid input*/

    int n = A.size();
    
    int a1 = A[0]; // First congruence x ≡ a1 (mod m1)
    int m1 = M[0]; // Modulus m1

    /** Iterate over the rest of the congruences */
    for (int i = 1; i < n; i++) {
        int a2 = A[i]; // Current 'ai'
        int m2 = M[i]; // Current 'mi'

        int p, q;
        int gcd = ext_gcd(m1, m2, p, q); // Solve m1 * p + m2 * q = gcd(m1, m2)

        /** If m1 and m2 are not coprime, there is no solution */
        if ((a1 - a2) % gcd != 0) return {-1, -1};

        /** Combine the two congruences into one */
        int mod = m1 * (m2 / gcd); // LCM of m1 and m2
        int x = (a1 * m2 * q + a2 * m1 * p) % mod; // Combine the two equations

        /** Ensure x is non-negative */
        a1 = (x + mod) % mod;
        m1 = mod; // Update the modulus
    }

    return {a1, m1}; // Return the solution x and the combined modulus L
}

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        //vector<int> A = {2, 3, 2}; // Example: x ≡ 2 (mod 3), x ≡ 3 (mod 5), x ≡ 2 (mod 7)
        //vector<int> M = {3, 5, 7};

        vector<int>A;
        vector<int>M;
        int x,m,xx,mm;
        cin>>x>>m>>xx>>mm;
        A.push_back(x);
        A.push_back(xx);
        M.push_back(m);
        M.push_back(mm);

        pair<int, int> result = chinese_remainder_theorem(A, M);
    
        if (result.first == -1) {
            cout << "no solution" << endl;
        } 
        else {
            cout << "x ≡ " << result.first << " (mod " << result.second << ")" << endl;
           
        }
    
    }
    
    return 0;
}


//It's Strong CRT
//https://forthright48.com/chinese-remainder-theorem-part-2-non-coprime-moduli/
