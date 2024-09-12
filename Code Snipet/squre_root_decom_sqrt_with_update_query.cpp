#include <bits/stdc++.h>
using namespace std;

int block_size;
vector<int> nums;
vector<long long> blocks;

/** Initialize sqrt decomposition */
void sqrt_init(int sqrtn, vector<int>& arr) {
    block_size = sqrtn;
    nums = arr;
    blocks = vector<long long>(sqrtn, 0);
    for (int i = 0; i < nums.size(); i++) {
        blocks[i / block_size] += nums[i];
    }
}

/** O(1) update to set nums[x] to v */
void sqrt_update(int x, int v) {
    blocks[x / block_size] -= nums[x];
    nums[x] = v;
    blocks[x / block_size] += nums[x];
}

/** O(sqrt(n)) query for sum of [0, r) */
long long sqrt_query(int r) {
    long long res = 0;
    for (int i = 0; i < r / block_size; i++) {
        res += blocks[i];
    }
    for (int i = (r / block_size) * block_size; i < r; i++) {
        res += nums[i];
    }
    return res;
}

/** O(sqrt(n)) query for sum of [l, r) */
long long sqrt_range_query(int l, int r) {
    return sqrt_query(r) - sqrt_query(l - 1);
}

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sqrt_init((int)ceil(sqrt(n)), arr);

    for (int i = 0; i < q; i++) {
        int t, l, r;
        cin >> t >> l >> r;
        if (t == 1) {
            sqrt_update(l - 1, r);
        } else {
            cout << sqrt_range_query(l, r) << "\n";
        }
    }
}
