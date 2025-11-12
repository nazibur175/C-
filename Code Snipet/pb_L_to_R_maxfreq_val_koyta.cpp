/*You are given an array of size N (1e5). You will be given Q(1e5) queries. 
In each query, you will be given (L,R). If you count the frequency of each number 
in the subArray A[L,R], then what is the maximum frequency and how many numbers 
have that frequency?*/


#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;

int N, Q, block;
int A[MAXN];

struct Query {
    int l, r, idx;
    bool operator<(const Query& other) const {
        int blockA = l / block, blockB = other.l / block;
        if(blockA != blockB) return blockA < blockB;
        return r < other.r; // same block: increasing R
    }
};

vector<Query> queries;
pair<int, int> answers[MAXN];

// frequency of each number in current window
int freq[MAXN];
// frequency count: freqCount[f] = count of numbers with frequency f
int freqCount[MAXN];
// current max frequency in the window
int maxFreq = 0;

void add(int idx) {
    int x = A[idx];
    freqCount[freq[x]]--;
    freq[x]++;
    freqCount[freq[x]]++;
    if(freq[x] > maxFreq) maxFreq = freq[x];
}

void remove(int idx) {
    int x = A[idx];
    freqCount[freq[x]]--;
    freq[x]--;
    freqCount[freq[x]]++;
    while(maxFreq > 0 && freqCount[maxFreq] == 0) maxFreq--;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> Q;
    block = sqrt(N);
    for(int i = 0; i < N; ++i) cin >> A[i];

    queries.resize(Q);
    for(int i = 0; i < Q; ++i) {
        int l, r;
        cin >> l >> r;
        queries[i] = {--l, --r, i}; // 0-based
    }
    sort(queries.begin(), queries.end());

    int curL = 0;
    int curR = -1;

    memset(freq, 0, sizeof(freq));
    memset(freqCount, 0, sizeof(freqCount));
    maxFreq = 0;

    // queries are sorted: block wise, then increasing R
    for(size_t i = 0; i < queries.size(); ) {
        size_t j = i;
        // process bucket
        int blockStart = queries[i].l / block;
        curL = blockStart * block; // for every block, start L at blockStart position
        curR = curL - 1;
        memset(freq, 0, sizeof(freq));
        memset(freqCount, 0, sizeof(freqCount));
        maxFreq = 0;
        while(j < queries.size() && queries[j].l / block == blockStart) {
            int L = queries[j].l, R = queries[j].r;
            // move R to expand to R
            while(curR < R) add(++curR);
            // move L to desired position
            while(curL < L) remove(curL++);
            while(curL > L) add(--curL);
            answers[queries[j].idx] = {maxFreq, freqCount[maxFreq]};
            ++j;
        }
        i = j;
    }

    for(int i = 0; i < Q; ++i) {
        //max Kon Frequency ----------------seita Kotobar ache 
        cout << answers[i].first << " " << answers[i].second << '\n';
    }
    return 0;
}
