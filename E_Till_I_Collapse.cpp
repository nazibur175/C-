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
        if (lo == hi) return newNode(0);
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
int n;
vector<Node*> version(100000 + 9);
int cal(PersistentSegTree &pst,int mid){
    int c=0;
    for(int i=1;i<=n;i++){
        int l=i, r=n+1;
        while(r-l>1) {
            int m = (l + r) >> 1;
            if (pst.query(version[m], 1, n, i, m) <= mid) {
                l=m;
            } else {
                r=m;
            }
        }
        c++;
        i=l;
    }
    return c;
}
void solve() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> arr[i];

    PersistentSegTree pst;
    version[0] = pst.build(1, n);

    unordered_map<int,int> last;
    last.reserve(n * 2);

    for (int i = 1; i <= n; i++) {
        Node* curr = version[i - 1];
        if (auto it = last.find(arr[i]); it != last.end()) {
            curr = pst.update(curr, 1, n, it->second, 0);
        }
        curr = pst.update(curr, 1, n, i, 1);
        version[i] = curr;
        last[arr[i]] = i;
    }

    for(int i=1;i<=n;i++){
        int l=i, r=n+1;
        int temp=cal(pst, i);
        while(r-l>1) {
            int m = (l + r) >> 1;
            if (cal(pst,m) == temp) {
                l=m;
            } else {
                r=m;
            }
        }
        for(int j=i;j<=l;j++){
            cout<<temp;
            if(j!=n) cout << " ";
        }
        i = l;
        //cout<<cal(pst, i);
        //if (i < n) cout << " ";
    }
    cout << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
