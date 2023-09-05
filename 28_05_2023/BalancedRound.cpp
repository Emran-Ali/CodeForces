#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n,k;
	cin>>n>>k;
	int ar[n];
	for(int i=0; i<n; i++)
	{
		cin>>ar[i];
	}
	sort(ar,ar+n);
	int ans=0, c=1;
	for(int i=1; i<n; i++)
	{
		if(ar[i]-ar[i-1]>k)
		{
			ans=max(ans,c);
			c=1;
		}
		else c++;

	}
	ans=max(ans,c);
	cout<<n-ans<<endl;

	
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