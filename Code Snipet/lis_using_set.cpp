// Multiple Occurance not allowed
// Time Complexity: O(nlogn)
// Space Complexity: O(n)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    set<int> s;
    for(int i = 0; i < n; i++)
    {
        s.insert(a[i]);
        auto it = s.find(a[i]);
        it++;
        if(it != s.end())
        {
            s.erase(it);
        }
    }
    cout << s.size() << endl;
    return 0;
}

//Multiple Occurance allowed
// Time Complexity: O(nlogn)
// Space Complexity: O(n)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    multiset<int> s;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
        auto it = s.upper_bound(a[i]);
        if(it != s.end())
        {
            s.erase(it);
        }
    }
    cout << s.size() << endl;
    return 0;
}

// LIS using binary search
// int cnt(vector<int>& nums) {
//         vector<int> temp;
//         for (int x : nums) {
//             auto it = lower_bound(temp.begin(),temp.end(),x);
//             if (it==temp.end())
//                 temp.push_back(x);
//             else{
//                 *it=x;
//             }
//         }
//         return temp.size();
//     }