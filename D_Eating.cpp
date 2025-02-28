#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
#define Interval pair<int,int>
// Code Snip
vector<Interval> mergeIntervals(vector<Interval> &intervals)
{
    if (intervals.empty())
        return {};

    // Sort intervals by start time
    sort(intervals.begin(), intervals.end());

    vector<Interval> result;
    result.push_back(intervals[0]);

    for (int i = 1; i < intervals.size(); i++)
    {
        auto &last = result.back();
        if (intervals[i].first <= last.second + 1)
        {                                                        
            last.second = max(last.second, intervals[i].second);
        }
        else
        {
            result.push_back(intervals[i]); 
        }
    }

    return result;
}
vector<Interval> intervalIntersection(vector<Interval> &set1, vector<Interval> &set2)
{
    vector<Interval> result;
    int i = 0, j = 0;
    sort(set1.begin(), set1.end());
    sort(set2.begin(), set2.end());
    while (i < set1.size() && j < set2.size())
    {
        int start = max(set1[i].first, set2[j].first);
        int end = min(set1[i].second, set2[j].second);

        if (start <= end)
        {
            result.push_back({start, end});
        }
        if (set1[i].second < set2[j].second)
            i++;
        else
            j++;
    }
    return result;
}
vector<Interval> valid_range(int pre,int cur){
    // pre^x >= cur
    vector<Interval>result;
    int value=0;
    for(int i=29;i>=0;i--){
        int preb=0;
        int curb=0;
        if(pre&(1ll<<i)){
            preb=1;
        }
        if(cur&(1ll<<i)){
            curb=1;
        }
        if(curb){
            value|= (1-preb)*(1ll<<i);
        }
        else{
            int mn=(value|((1-preb)*(1ll<<i)));
            int mx=mn;
            for(int j=i-1;j>=0;j--){
                mx|=(1ll<<j);
            }
            result.push_back({mn,mx});
            value|=(preb)*(1ll<<i);
        }
    }
    result.push_back({value,value});
    return result;
}
int ok(vector<Interval>&v,int mid){
    for(int i=0;i<v.size();i++){
        if(mid>=v[i].first && mid<=v[i].second){
            return 1;
        }
    }
    return 0;
}
void solve(){
    test{
        int n,q;
        cin>>n>>q;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        reverse(v.begin(),v.end());

        int pre=0;
        vector<Interval>final[n+1];
         for(int i=0;i<n;i++){
             vector<Interval>valid= valid_range(pre,v[i]);
             valid=mergeIntervals(valid);
             if(i==0) final[i]=valid;
             else final[i]= intervalIntersection(final[i-1],valid);
             pre^=v[i];
         }
        while (q--)
        {
            int x;
            cin>>x;
            int l=0;
            int r=n+1;
             while(r-l>1){
                int mid = (l+r)/2;
                if(ok(final[mid-1],x)){
                    l=mid;
                }
                else r=mid;
             }
            cout<<l<<" ";
        }
        cout<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}