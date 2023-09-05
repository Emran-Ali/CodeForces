#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	if (k % 2 == 0)
	{
		sort(s.begin(), s.end());
		cout << s << endl;
	}
	else
		{
			string s1,s2;
			for(int i=0; i<n; i++)
			{
				if(i%2)
					s1+=s[i];
				else
					s2+=s[i];
			}
			sort(s1.begin(), s1.end());
			sort(s2.begin(), s2.end());
			string ans;
			for(int i=0, j=0; i<s1.size()|| j<s2.size(); i++ , j++)
			{
				if(j<s2.size())
					ans+=s2[j];
				if(i<s1.size())
					ans+=s1[i];
			}
			cout<<ans<<endl;
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