#include <bits/stdc++.h>

using namespace std;

//int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
//int dy[8] = {0, 1, 0, -1, 1, -1, 1, -1};

//int dx[4] = {1, 0, -1, 0};
//int dy[4] = {0, 1, 0, -1};

//int dx[4] = {-1, -1, 1, 1};
//int dy[4] = {-1, 1, -1, 1};

bool can_type(char ch, char *a, int k) {
	for (int i = 0; i < k; i++) {
		if (a[i] == ch) {
			return true;
		}
	}
	return false;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	char a[k];
	for (int i = 0; i < k; i++) {
		cin >> a[i];
	}
	long long ans = 0;
	long long letters = 0;
	for (int i = 0; i < n; i++) {
		if (can_type(s[i], a, k)) {
			letters++;
		} else {
			ans += ((letters * (letters + 1)) / 2);
			letters = 0;
		}
	}
	ans += ((letters * (letters + 1)) / 2);
	cout << ans << '\n';
}
