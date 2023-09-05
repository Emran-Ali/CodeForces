#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	int ar[n], ans = 0, ns = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
		if (i + 1 == ar[i]) ns++;
		if (ns == 2) {
			ans++; ns = 0;
		}

	}
	if(ns) ans++;
	cout << ans << endl;

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