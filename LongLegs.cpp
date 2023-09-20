#include <bits/stdc++.h>
using namespace std;

void solve()
{

	int x, y;
	cin >> x >> y;
	int mn = min(x, y);
	int mx = max(x, y);
	int a = 0, b = 0, i = 0;
	while (a < mn)
	{
		a += i;
		i++;
	}

	 // cout<<i<<endl;
	if (i >=mx) cout << i << endl;
	else
	{
		while (b < mx)
		{
			b += i;
			i++;
		}

		cout << i << endl;
	}




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