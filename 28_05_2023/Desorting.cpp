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
	int ans=INT_MAX;
	for(int i=0; i<n-1; i++)
	{
		if(ar[i]<ar[i+1])
			ans=min(ans, ((ar[i+1]-ar[i])/2)+1);
		else if(ar[i]==ar[i+1])
			ans=min(ans,1);
		else
			ans=0;
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