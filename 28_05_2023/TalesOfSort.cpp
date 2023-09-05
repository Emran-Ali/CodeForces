#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	int ans = 0,  mx = 0;
	for (int i = n-2; i >= 0; i--)
	{
		if(v[i]>v[i+1] )  mx=1;
		if(mx)
		ans = max(ans, v[i]);
	}
	if(ans) ans=max(ans, v[0]);
	cout<<ans<<endl;

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