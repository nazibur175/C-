#include <stdio.h>

#define A	100000
#define MD	1000000007

int vv[A + 1];

void init() {
	int i;

	vv[1] = 1;
	for (i = 2; i <= A; i++)
		vv[i] = (long long) vv[i - MD % i] * (MD / i + 1) % MD;
}

int choose(int n, int k) {
	return k == 0 ? 1 : (long long) choose(n - 1, k - 1) * n % MD * vv[k] % MD;
}

int main() {
	int t;

	init();
	scanf("%d", &t);
	while (t--) {
		int n, m, a, b, c;

		scanf("%d%d%d", &a, &b, &c);
		n = ((long long) c * (a - 1) + 1) % MD;
		m = ((long long) choose(n, a) * c % MD * (b - 1) + 1) % MD;
		printf("%d %d\n", n, m);
	}
	return 0;
}
