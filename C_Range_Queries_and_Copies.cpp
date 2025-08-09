#include <bits/stdc++.h>
using namespace std;
#define int long long
static const int MAXNODES = 8000000;
struct Node {
    int val;
    Node *left, *right;
} pool[MAXNODES];
int pool_ptr = 0;

inline Node* newNode(int v = 0) {
    Node* n = &pool[pool_ptr++];
    n->val = v;
    n->left = n->right = nullptr;
    return n;
}

inline Node* newNode(Node* l, Node* r) {
    Node* n = &pool[pool_ptr++];
    n->left = l;
    n->right = r;
    n->val = (l ? l->val : 0) + (r ? r->val : 0);
    return n;
}

const int N = 2e5 + 5;
int arr[N];

struct PersistentSegTree {
    int milao(int x, int y) {
        return x + y;
    }

    Node* build(int lo, int hi) {
        if (lo == hi) return newNode(arr[lo]);
        int mid = (lo + hi) >> 1;
        Node* L = build(lo, mid);
        Node* R = build(mid + 1, hi);
        return newNode(L, R);
    }

    Node* update(Node* prev, int lo, int hi, int idx, int val) {
        if (lo == hi) {
            return newNode(val);
        }
        int mid = (lo + hi) >> 1;
        if (idx <= mid) {
            Node* L = update(prev->left, lo, mid, idx, val);
            return newNode(L, prev->right);
        } else {
            Node* R = update(prev->right, mid + 1, hi, idx, val);
            return newNode(prev->left, R);
        }
    }

    int query(Node* node, int lo, int hi, int l, int r) {
        if (!node || r < lo || hi < l) return 0;
        if (l <= lo && hi <= r) return node->val;
        int mid = (lo + hi) >> 1;
        return milao(
            query(node->left, lo, mid, l, r),
            query(node->right, mid + 1, hi, l, r)
        );
    }
};

void solve() {
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> arr[i];

    PersistentSegTree pst;
    vector<Node*> version(n + 1);
    version[1] = pst.build(1, n);
    int ver=1;
    while(q--){
        int type;
        cin>>type;
        if(type==1){
            int k,in,val;
            cin>>k>>in>>val;
            version[k] = pst.update(version[k], 1, n, in, val);
        }
        else if(type==2){
            int k,l,r;
            cin>>k>>l>>r;
            cout<<pst.query(version[k], 1, n, l, r)<<"\n";
        }
        else if(type==3){
            int k;
            cin>>k;
            ver++;
            version[ver] = version[k];
        }
        else {
            int k;
            cin>>k;
            ver++;
            version[ver]=version[k];
        }
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
