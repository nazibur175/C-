#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=3e5;
int v[N+5];
int get_sum(int a,int n,int d)
{
    return (((a * 2) + (n - 1) * d) * n) / 2;
}
struct node
{
    int a,d;
    node operator +(const node &t) const
   {
       return {a+t.a,d+t.d};
    }
};
int nth(int a,int n,int d)
{
    return a+(n-1)*d;
}
struct Stree
{
    #define lf (nd << 1)
    #define rt ((nd << 1) | 1)
    long long t[4 * N];
    node lazy[4 * N];
    Stree()
    {
        memset(t, 0, sizeof t);
        memset(lazy, 0, sizeof lazy);
    }
    inline void push(int nd, int lo, int hi)
    {
        if (lazy[nd].a==0&&lazy[nd].d==0)
            return;
        t[nd] = t[nd] + get_sum(lazy[nd].a,hi-lo+1,lazy[nd].d);
        if (lo != hi)
        {
            int mid=(lo+hi)>>1;
            lazy[lf].a +=nth(lazy[nd].a,lo-lo+1,lazy[nd].d);
            lazy[rt].a +=nth(lazy[nd].a,mid+1-lo+1,lazy[nd].d);
            lazy[lf].d =lazy[nd].d+lazy[lf].d;
            lazy[rt].d =lazy[nd].d+lazy[rt].d;
        }
        lazy[nd] = {0,0};
    }
    inline long long milao(long long x,long long y)
    {
        return x + y;
    }
    inline void uthao(int nd)
    {
        t[nd] = t[lf] + t[rt];
    }
    void build(int nd, int lo, int hi)
    {
        lazy[nd] = {0,0};
        if (lo == hi)
        {
            t[nd] = v[lo];
            return;
        }
        int mid = (lo + hi) >> 1;
        build(lf, lo, mid);
        build(rt, mid + 1, hi);
        uthao(nd);
    }
    void update(int nd, int lo, int hi, int i, int j, long long a,long long d)
    {
        push(nd, lo, hi);
        if (j < lo || hi < i)
            return;
        if (i <= lo && hi <= j)
        {
            lazy[nd] = {nth(a,lo-i+1,d),d}; //set lazy
            push(nd, lo, hi);
            return;
        }
        int mid = (lo + hi) >> 1;
        update(lf, lo, mid, i, j, a,d);
        update(rt, mid + 1, hi, i, j, a,d);
        uthao(nd);
    }
    long long query(int nd, int lo, int hi, int i, int j)
    {
        push(nd, lo, hi);
        if (i > hi || lo > j)
            return 0;
        if (i <= lo && hi <= j)
            return t[nd];
        int mid = (lo + hi) >> 1;
        return milao(query(lf, lo, mid, i, j), query(rt, mid + 1, hi, i, j));
    }
};
void solve()
{
    ///Problem CF-1661D
    int a,b;
    cin>>a>>b;
    vector<int> vv(a+1);
    for(int i=1;i<=a;i++) cin>>vv[i];
    Stree st;
    st.build(1,1,a);
    int an=0;
    for(int i=a; i>0; i--)
    {
        int cr=st.query(1,1,a,i,i);
        if(cr>=vv[i])
            continue;
        int d=vv[i]-cr;
        if(i<b)
        {
            int s=(d+i-1)/i;
            an+=s;
            st.update(1,1,a,1,b,1*s,1*s);
        }
        else
        {
            int s=(d+b-1)/b;
            an+=s;
            st.update(1,1,a,i-b+1,i,1*s,1*s);
        }
    }
    cout<<an<<endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();


}