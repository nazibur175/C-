#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e5 + 5;
int arr[N];
struct Node {
    int val;
    Node* left;
    Node* right;

    Node(int val = 0) : val(val), left(nullptr), right(nullptr) {}
    Node(Node* l, Node* r) : left(l), right(r), val(0) {}
};

struct PersistentSegTree {
    int milao(int x, int y) {
        return x + y; 
    }

    void prop(Node* root) {
        root->val = 0;
        if (root->left) root->val = milao(root->val, root->left->val);
        if (root->right) root->val = milao(root->val, root->right->val);
    }

    Node* build(int lo, int hi) {
        if (lo == hi) return new Node(arr[lo]);
        int mid = (lo + hi) >> 1;
        Node* left = build(lo, mid);
        Node* right = build(mid + 1, hi);
        Node* root = new Node(left, right);
        prop(root);
        return root;
    }

    Node* update(Node* prev, int lo, int hi, int idx, int val) {
        if (lo == hi) return new Node(val);
        int mid = (lo + hi) >> 1;
        Node* left = prev->left;
        Node* right = prev->right;

        if (idx <= mid)
            left = update(prev->left, lo, mid, idx, val);
        else
            right = update(prev->right, mid + 1, hi, idx, val);

        Node* root = new Node(left, right);
        prop(root);
        return root;
    }

    int query(Node* node, int lo, int hi, int i, int j) {
        if (!node || j < lo || hi < i) return 0;
        if (i <= lo && hi <= j) return node->val;
        int mid = (lo + hi) >> 1;
        return milao(query(node->left, lo, mid, i, j),
                     query(node->right, mid + 1, hi, i, j));
    }
};

void solve() {
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> arr[i];

    PersistentSegTree pst;
    vector<Node*> version;
    version.push_back(pst.build(1, n)); // version[0]

    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int idx, val;
            cin >> idx >> val;
            version.push_back(pst.update(version.back(), 1, n, idx, val));
        } else {
            int ver, l, r;
            cin >> ver >> l >> r;
            cout << pst.query(version[ver], 1, n, l, r) << '\n';
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
