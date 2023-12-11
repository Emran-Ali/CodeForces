#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin >> s;
	int sz = s.size();
	// int ar[sz]={true};
	vector<bool> ar(sz, true);
	stack<int> sml, gtr;

	for (int i = 0; i < sz; i++)
	{
		if (s[i] == 'b')
		{
			ar[i] = false;
			if (!sml.empty()) {
				ar[sml.top()] = false;
				sml.pop();
			}

		}
		else if (s[i] == 'B') {
			ar[i] = false;
			if (!gtr.empty()) {
				
				ar[gtr.top()] = false;
				gtr.pop();
			}
		}
		else {
			if (s[i] >= 'A' && s[i] <= 'Z')
				gtr.push(i);
			else
				sml.push(i);
		}
	}
	for (int i = 0; i < sz; i++)
	{
		if (ar[i])
			cout << s[i];
	}
	cout << endl;


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