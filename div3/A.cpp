#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n,ans=0;
	string s;
	cin>>n>>s;
	map<string, int>mp;
	for(int i=0; i<n-1; i++)
	{
		mp[s.substr(i,2)]++;

		if(mp[s.substr(i,2)]==1)
			ans++;
		// mp[s.substr(i,2)]++;
	}
	cout<<ans<<endl;

	
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
    	solve();
    }

    return 0;
}