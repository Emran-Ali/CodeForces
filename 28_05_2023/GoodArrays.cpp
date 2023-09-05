#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	int n; cin >> n;
	vector<int> v(n);
	ll sum = 0, tmp = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		sum += v[i];
		if (v[i] == 1) tmp++;

	}

	if (sum >= n + tmp && n > 1)
		cout << "YES\n";
	else
		cout << "NO\n";

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}

	return 0;
}