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

	int len=0, ans=0;
	for(int i=0; i<n; i++)
	{
		if(ar[i]==0)
			len++;
		else
		{
			ans=max(len,ans);
			len=0;
		}
		
	}
	ans=max(len,ans);
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