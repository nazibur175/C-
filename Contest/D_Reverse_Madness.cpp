#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl '\n'

const int MAX_N = 200005;
const int LOG = 20;
int a[MAX_N];
int m[MAX_N][LOG]; // m[i][j] is minimum among a[i..i+2^j-1]
int bin_log[MAX_N];

int query(int L, int R)
{ // O(1)
    int length = R - L + 1;
    int k = bin_log[length];
    return m[L][k]& m[R - (1 << k) + 1][k];
}

int solve()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[i][0] = a[i];
    }
    // 2) preprocessing, O(N*log(N))
    for (int k = 1; k < LOG; k++)
    {
        for (int i = 0; i + (1 << k) - 1 < n; i++)
        {
            m[i][k] = m[i][k - 1]& m[i + (1 << (k - 1))][k - 1];
        }
    }
    int q;
    cin >> q;
    while(q--){
        int k, l;
        cin >> l >> k;
        l--;
        int L = l, R = n - 1;

        while(L < R){
            int mid = (L + R + 1) / 2;
            int x = query(l, mid);
            // cout << L << " " << R << " " << x << " " << k << endl;
            if(x < k) R = mid - 1;
            else L = mid;
        }     
        int x = query(l, L);
        if(x < k) cout << -1 << " ";
        else
            cout << L + 1 << " ";   
    }    
    cout << endl;
    return 0;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    bin_log[1] = 0;
    for (int i = 2; i < MAX_N; i++)
    {
        bin_log[i] = bin_log[i / 2] + 1;
    }

    int t=1;
    cin>>t;
    for(int ii=1;ii<=t;ii++)
    {
        // cout<<"Case "<<ii<<": ";
        int x = solve();

    }
}
