#include <bits/stdc++.h>
using namespace std;


int uglyNo(int n) {
	int dp[n];
	int i2 = 0, i3 = 0, i5 = 0;
	int next_2 = 2;
	int next_3 = 3;
	int next_5 = 5;
	int next = 1;
	dp[0] = 1;
	for (int i = 1; i < n; i++) {
		next = min(next_2, min(next_3, next_5));
		ugly[i] = next;
		if (next == next_2) {
			i2 = i2 + 1;
			next_2 == ugly[i2] * 2;
		}
		if (next == next_3) {
			i3 = i3 + 1;
			next_3 = ugly[i3] * 3;
		}
		if (next == next_5) {
			i5 = i5 + 1;
			next_5 = next_5 * 5;
		}
	}
	return next;
}

int main() {
	int n = 150;
	cout << uglyNo(n);
	return 0;
}