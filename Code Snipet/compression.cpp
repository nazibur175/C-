// vector<int> d = a;
// sort(d.begin(), d.end());
// d.resize(unique(d.begin(), d.end()) - d.begin());
// for (int i = 0; i < n; ++i) {
//   a[i] = lower_bound(d.begin(), d.end(), a[i]) - d.begin();
// }

//original value of a[i] can be obtained through d[a[i]]


// Errichto

// int n = a.size();
// vector<pair<int, int>> pairs(n);
// for(int i = 0; i < n; ++i) {
// 	pairs[i] = {a[i], i};
// }
// sort(pairs.begin(), pairs.end());
// int nxt = 0;
// for(int i = 0; i < n; ++i) {
// 	if(i > 0 && pairs[i-1].first != pairs[i].first) nxt++;
// 	a[pairs[i].second] = nxt;
// }