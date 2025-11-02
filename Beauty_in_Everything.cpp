#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int N;
        string A;
        cin >> N >> A;

        // (ক) window with at most 1 zero
        int maxLen0 = 0;
        {
            int l = 0, zeroCnt = 0;
            for (int r = 0; r < N; r++){
                if (A[r] == '0') zeroCnt++;
                while (zeroCnt > 1){
                    if (A[l] == '0') zeroCnt--;
                    l++;
                }
                maxLen0 = max(maxLen0, r - l + 1);
            }
        }

        // (খ) window with at most 1 one
        int maxLen1 = 0;
        {
            int l = 0, oneCnt = 0;
            for (int r = 0; r < N; r++){
                if (A[r] == '1') oneCnt++;
                while (oneCnt > 1){
                    if (A[l] == '1') oneCnt--;
                    l++;
                }
                maxLen1 = max(maxLen1, r - l + 1);
            }
        }

        int answer = max(maxLen0, maxLen1);

        // (গ) খুঁজে দেখি "0101" বা "1010" আছে কিনা
        for (int i = 0; i + 3 < N; i++){
            string sub = A.substr(i, 4);
            if (sub == "0101" || sub == "1010"){
                answer = max(answer, 4);
                // আর বড় কেছেই দরকার নেই, কারণ >4 alternating
                // সব দৈর্ঘ্যে beautiful হয়ে যাবে
                break;
            }
        }

        // তবে যদি N<4 হয়, তাহলে maxLen0/1 নিজেই N পর্যন্ত যেতে পারে
        // আর N<=3 সবসময় not beautiful
        cout << answer << "\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}