#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n; 
	vector<string> ar(n);

	for(int i=0; i<n; i++)
	{
		cin>>ar[i];
	}
	for(int j=0; j<n; j++)
	{
		for (int i = 0; i < n; ++i)
		{
			if(ar[j][i]=='1')
			{
				if((i==n-1 || j==n-1) || (i<n-1 && ar[j][i+1]=='1')||(j<n-1 && ar[j+1][i]=='1' ))
					continue;
				else
				{
					cout<<"NO\n";
					return;
				}

			}
		}

	}
	cout<<"YES\n";

	
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