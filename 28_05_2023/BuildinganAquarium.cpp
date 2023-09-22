#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
	ll n,w; cin>>n>>w;
	ll ar[n];
	for(ll i=0; i<n; i++)
	{
		cin>>ar[i];
	}

	if(n==1) cout<<w+ar[0]<<endl;
	else{
		ll l=0,r=1e12;
		ll mid,ans=-1;

		while(l<=r)
		{
			mid=(r+l)/2;
			ll wa=0;
			for(ll i=0; i<n; i++)
			{
				wa+=max(0LL,mid-ar[i]);
			}
			if(wa<=w)
				{
					ans=max(ans,mid);
					l=mid+1;
				}
			else
				r=mid-1;
			// cout<<"l r"<<l<<" ,"<<r<<endl;
		}
		cout<<ans<<endl;
	}

	
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--)
    {
    	solve();
    }

    return 0;
}