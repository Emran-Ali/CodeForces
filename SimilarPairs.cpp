#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, ev=0, odd=0;
	cin>>n;
	int ar[n];
	for(int i=0; i<n; i++)
	{
		cin>>ar[i];
		ar[i]%2 ? odd++ : ev++;
	}
	if(odd%2==0 )
	{
		cout<<"YES\n";
	}
	else
	{
		sort(ar,ar+n);
		for(int i=1; i<n; i++)
		{
			if(ar[i]-ar[i-1]==1)
			{
				cout<<"YES\n";
				return;
			}
		}
		cout<<"NO\n";
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