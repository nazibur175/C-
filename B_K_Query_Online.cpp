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
vector<pair<int, int>> arr(N);

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

void solve() {
    int n;
    cin >> n;
    int mx=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i].first;
        arr[i].second = i;
        mx = max(mx, arr[i].first);
    }
    sort(arr.begin() + 1, arr.begin() + n + 1, greater<pair<int, int>>());
    PersistentSegTree pst;
    vector<Node*> version(n + 1);
    version[0] = pst.build(1, n);
    map<int,int>last;
    for(int i = 1; i <= n; i++) {
        version[i] = pst.update(version[i - 1], 1, n, arr[i].second, 1);
        last[arr[i].first] = i;
    }
    int ans=0;
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int a,b,c;
        cin>>a>>b>>c;
        int l=a^ans;
        int r=b^ans;
        int k=c^ans;
        //cout<<k<<endl;
        int ver=0;
        if(k<=mx){
            ver=last.upper_bound(k)->second;
        }
        if(ver == 0) {
            ans = 0;
        } else {
            ans = pst.query(version[ver], 1, n, l, r);
        }
        cout << ans << "\n";
    }

    
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
