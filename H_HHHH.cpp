#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define mod 1000000007
#define test int t;cin>>t;while(t--)

struct suf_array
{
    string s;
    int sz;
    vector<int>st, rnk, lcp;
    suf_array() {}
    suf_array(string &ss)
    {
        s=ss;
        s+='$';
        sz=s.size();
        st.resize(sz);
        rnk.resize(sz);
        lcp.resize(sz);
    }
    void count_sort()
    {
        vector<int>cnt(sz);
        for(auto x:rnk)
            cnt[x]++;
        vector<int>st_new(sz);
        vector<int>pos(sz);
        pos[0]=0;
        for(int i=1;i<sz;i++)
            pos[i]=pos[i-1]+cnt[i-1];
        for(auto x:st)
        {
            int i=rnk[x];
            st_new[pos[i]]=x;
            pos[i]++;
        }
        st=st_new;
    }
    void build()
    {
        {
            vector<pair<char,int>>tm(sz);
            for(int i=0;i<sz;i++)
                tm[i]={s[i],i};
            sort(tm.begin(),tm.end());
            for(int i=0;i<sz;i++)
                st[i]=tm[i].second;
            rnk[st[0]]=0;
            for(int i=1;i<sz;i++)
            {
                if(tm[i].first==tm[i-1].first)
                    rnk[st[i]]=rnk[st[i-1]];
                else
                    rnk[st[i]]=rnk[st[i-1]]+1;
            }
        }
        int k=1;
        while(k<sz)
        {
            for(int i=0;i<sz;i++)
                st[i]=(st[i]-k+sz)%sz;
            count_sort();
            vector<int>rnk_new(sz);
            rnk_new[st[0]]=0;
            for(int i=1;i<sz;i++)
            {
                pair<int,int>pre={rnk[st[i-1]], rnk[(st[i-1]+k)%sz]};
                pair<int,int>cr={rnk[st[i]], rnk[(st[i]+k)%sz]};
                if(cr==pre)
                    rnk_new[st[i]]=rnk_new[st[i-1]];
                else
                    rnk_new[st[i]]=rnk_new[st[i-1]]+1;
            }
            rnk=rnk_new;
            k*=2;
        }
    }
    // Compare s.substr(st[pos], q.size()) >= q (lexicographically)
    bool cmp_ge(const string &s, int sufidx, const string &q) {
        for(int i=0;i<q.size();i++) {
            if (sufidx+i>=s.size()) return false;
            if (s[sufidx+i]<q[i]) return false;
            if (s[sufidx+i]>q[i]) return true;
        }
        return true;
    }
    // Compare s.substr(st[pos], q.size()) > q (lexicographically)
    bool cmp_gt(const string &s, int sufidx, const string &q) {
        for(int i=0;i<q.size();i++) {
            if (sufidx+i>=s.size()) return false;
            if (s[sufidx+i]<q[i]) return false;
            if (s[sufidx+i]>q[i]) return true;
        }
        return false;
    }
    // Counts the number of times ss occurs as a substring in s
    int how_many(string &ss) {
        int l=0, r=sz;
        // lower_bound for >= ss
        while(l<r){
            int mid=(l+r)/2;
            if(cmp_ge(s, st[mid], ss))
                r=mid;
            else
                l=mid+1;
        }
        int left=l;
        l=0, r=sz;
        // lower_bound for > ss
        while(l<r){
            int mid=(l+r)/2;
            if(cmp_gt(s, st[mid], ss))
                r=mid;
            else
                l=mid+1;
        }
        int right=l;
        return right-left;
    }
    vector<int> get()
    {
        return st;
    }
    // Not used here, but can be called if you want LCP functionality
    void make_lcp()
    {
        int k=0;
        for(int i=0;i<sz-1;i++)
        {
            int pin=rnk[i];
            int j=st[pin-1];
            while(s[i+k]==s[j+k])
                k++;
            lcp[pin]=k;
            k=max(k-1,0ll);
        }
    }
    vector<int> get_lcp()
    {
        return lcp;
    }
};

void solve(){
    vector<string>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string ss;
        cin>>ss;
        v.push_back(ss);
    }
    int m;
    cin>>m;
    string s;
    for(int i=0;i<m;i++){
        string ss;
        cin>>ss;
        ss.push_back('#');
        s+=ss;
    }
    suf_array suf(s);
    suf.build();
    for(auto x:v){
        cout<<suf.how_many(x)<<endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
