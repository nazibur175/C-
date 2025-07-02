// get k-th Fibonacci number where first and second Fibonacci is a and b
const int N = 1e5+5;
int f[N];
void precompute_fibonacci() {
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i < N; i++) {
        f[i] = (f[i - 1] + f[i - 2]) % mod;
    }
}
int get_kth(int a,int b,int k){
	a%=mod;
	b%=mod;
	if(k==1) return a;
	if(k==2) return b;
	return ((a*f[k-2])%mod+(b*f[k-1])%mod)%mod;
}
// Here fibonacci first member is a, nex b and so on. 
// If I want to get first n member sum the call fibo_sum()
 int fibo_sum(int a, int b, int n){
    return ((get_kth(a,b,n+2) - b)%mod + mod )%mod;
}

// sum of fibo[1]+fibo[2]+.....fibo[len] = fibo[len+2]- fibo[2];