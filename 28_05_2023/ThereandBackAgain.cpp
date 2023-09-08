#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;

	int d, s, max = 300, tmp = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> d >> s;
		tmp =( s-1 )/ 2;
		// if (s % 2) tmp - 1;
		tmp += d;
		max = min(max, tmp);
	}
	cout << max << endl;

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