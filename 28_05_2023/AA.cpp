#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, m,k,h,ans=0;
	cin>>n>>m>>k>>h;
	int ar[n];
	for(int i=0; i<n; i++)
	{
		cin>>ar[i];
	}
	for(int i=0; i<n; i++)
	{
		int hi=abs(h-ar[i]);
		for(int i=1; i<m; i++)
		{
			if(i*k==hi)
			{
				ans++; break;
			}
		}
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