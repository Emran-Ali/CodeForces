#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	int ar[n];
	for(int i=0; i<n; i++)
	{
		cin>>ar[i];
	}
	int q; cin>>q;
	for(int i=0; i<q; i++)
	{
		int l, k, ans=-1;
		cin>>l>>k;
		int re=ar[l-1];
		for(int j=l-1; j<n; j++)
		{
			re =re & ar[j];
			// cout<<re<<" re\n";
			if(re==0) break;
			if(re>=k) ans=max(ans, j+1);
		}
		cout<<ans<<" ";
		// ans==-1 ? cout<<"-1 " : cout<<ans<<" ";
	}
	cout<<endl;
	
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