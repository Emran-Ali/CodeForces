#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		std::vector<int> v(n);
		for (auto &i : v) cin >> i;
		vector<int>pref(n);
		pref[0] = v[0];
		for (int i = 1; i < n; ++i) {
			pref[i] = pref[i - 1] + v[i];
		}
		while (k--) {
			int l, r, va;
			cin >> l >> r >> va;
			l--;
			r--;
			int res = (va * (r  - l + 1));
			int ans = pref[r] - pref[l - 1];
			if ((pref[n - 1] - ans + res) % 2 == 1) cout << "YES\n";
			else cout << "NO\n";

		}

	}


	return 0;
}