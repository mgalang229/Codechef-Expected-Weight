#include <bits/stdc++.h>

using namespace std;

const long long MOD = 998244353;

// binary exponentiation
long long Power(long long a, long long b) {
	if (b == 0) {
		return 1;
	}
	if (b == 1) {
		return a;
	}
	long long ret = Power(a, b / 2);
	if (b % 2 == 0) {
		return (ret * ret) % MOD;
	} else {
		return ((ret * ret) % MOD * a) % MOD;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long n;
		cin >> n;
		// formula for getting the answer
		long long ans = ((n * (n + 1)) % MOD * (n + 1)) % MOD;
		// perform FLT (Fermat's Little Theorem)
		cout << (ans * Power(4, MOD - 2)) % MOD << '\n';
	}
	return 0;
}
