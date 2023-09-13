#include <bits/stdc++.h>
using namespace std;

void eq(int l)
{

}
void solve()
{
	int l, r;
	cin >> l;
	cin >> r;
	if (r <= 3)
	{
		cout << "-1\n";
		return;
	}
	if (l == r)
	{
		int i = 2, che = 1;
		while (i * i < l)
		{
			if (l % i == 0)
			{
				che = 0;
				cout << i << " " << l - i << endl;
				return;
			}
			i++;
		}
		if (che)
		cout << "-1\n";
		return;
	}
	cout << (r - r % 2) / 2 << " " << (r - r % 2) / 2 << endl;


}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}

	return 0;
}