#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
struct suf_array
{
    string s;
    int sz;
    vector<int>st,rnk,lcp;
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
        for(int i=1; i<sz; i++)
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
            ///for k=0;
            vector<pair<char,int>>tm(sz);
            for(int i=0; i<sz; i++)
                tm[i]= {s[i],i};
            sort(tm.begin(),tm.end());
            for(int i=0; i<sz; i++)
                st[i]=tm[i].second;
            rnk[st[0]]=0;
            for(int i=1; i<sz; i++)
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
            for(int i=0; i<sz; i++)
                st[i]=(st[i]-k+sz)%sz;
            count_sort();
            vector<int>rnk_new(sz);
            rnk_new[st[0]]=0;
            for(int i=1; i<sz; i++)
            {
                pair<int,int>pre= {rnk[st[i-1]],rnk[(st[i-1]+k)%sz]};
                pair<int,int>cr= {rnk[st[i]],rnk[(st[i]+k)%sz]};
                if(cr==pre)
                    rnk_new[st[i]]=rnk_new[st[i-1]];
                else
                    rnk_new[st[i]]=rnk_new[st[i-1]]+1;
            }
            rnk=rnk_new;
            k*=2;
        }
    }
    string getsub(int i,int n)
    {
        return s.substr(i,min(n,sz-i));
    }
    int how_many(string &ss)
    {
        int szz=ss.size();
        int lo=0,hi=sz;
        while(lo+1<hi)
        {
            int mid=(lo+hi)>>1;
            string t=getsub(st[mid],szz);
            if(t<=ss)
                lo=mid;
            else
                hi=mid;
        }
        if(getsub(st[lo],szz)!=ss)
            return 0;
        int l=0,r=sz-1;
        while(l<r)
        {
            int mid=(l+r)>>1;
            string t=getsub(st[mid],szz);
            if(t>=ss)
                r=mid;
            else
                l=mid+1;
        }
        return lo-r+1;
    }
    // 1st ta extra ($ er jonno last index ta shurute)
    vector<int> get()
    {
        return st;
    }
    void make_lcp()
    {
        int k=0;
        for(int i=0; i<sz-1; i++)
        {
            int pin=rnk[i];
            int j=st[pin-1];
            while(s[i+k]==s[j+k])
                k++;
            lcp[pin]=k;
            k=max(k-1,0ll);
        }
    }
    //1st 2 ta extra (i,i+1) index compare kore (i+1) 
    //index e thakbo  
    vector<int> get_lcp()
    {
        return lcp;
    }
};
void solve(){

     string s;
     cin>>s;
     suf_array suffixArray(s);
     suffixArray.build();
     vector<int>vv = suffixArray.get();
     suffixArray.make_lcp();
     vector<int>v = suffixArray.get_lcp();

     int mxin=0;
     int mx=0;
    //  for(int i=0;i<vv.size();i++) cout<<vv[i]<<" ";
    //  cout<<endl;

    // for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    // cout<<endl;

    for(int i=2;i<v.size();i++){
        if(v[i]>mx){
            mx=v[i];
            mxin=i;
        }
    }

    //   cout<<mx<<" "<<mxin<<endl;
    //   cout<<s[vv[mxin]]<<endl;
      mxin=vv[mxin];
      

     if(mx==0) cout<<"-1"<<endl;
     else {
        string temp;
        while(mx){
            temp.push_back(s[mxin]);
            mx--;
            mxin++;
        }
        cout<<temp<<endl;
     }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}