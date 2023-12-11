#include <bits/stdc++.h>
using namespace std;
using ll =long long;

void solve()
{
	int n;
	ll mx=0, mn=1e18;
	cin>>n;
	vector<ll>ar(n);

	for(int i=0; i<n; i++)
	{
		cin>>ar[i];
		if(mx<ar[i]) mx=ar[i];
		if(mn>ar[i]) mn=ar[i];

	}
	if(mx==mn)
		cout<<0<<endl;
	else
	{
		ll ans=mx-mn;
		for(int d=2; d<=n; d++)
		{
			if(n%d==0)
			{mx=-1e9, mn=1e18;
						for(int i=0; i<n; i+=d)
						{
							ll sm=0;
							for(int j=i; j<i+d; j++){
								sm+=ar[j];
							}
							mx=max(mx,sm);
							mn=min(mn,sm);
			
						}
						ans=max(ans, mx-mn);}
		}
		cout<<ans<<endl;
	}

	
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