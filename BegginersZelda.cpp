#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n; 
	cin>>n;
	map<int ,int>mp;
	int a,b;
	for(int i=1; i<n; i++)
	{
		cin>>a>>b;
		mp[a]++;
		mp[b]++;
	}
	int ans=0;
	for(int i=1; i<=n; i++){
		if(mp[i]==1) ans++;
	}
	ans= (ans+1)/2;
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