#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n,con=0;
	cin>>n;
	int ar[n], ans=n;

	for(int i=0;i<n; i++)
	{
		cin>>ar[i];
	}
	for(int i=1; i<n; i++)
	{
		con+=abs(ar[i-1]-ar[i]);
	}
	if(con==0)
		cout<<"1\n";
	else
	{
		int j=0;
		for(int i=1; i<n-1; i++)
		{
			if(ar[i]==ar[j] || ar[i]==ar[i+1])
			{
				ans--;
			}
			else if(ar[j]<ar[i] && ar[i]<ar[i+1])
			{
				ans--;
			}
			else if(ar[j]>ar[i] && ar[i]>ar[i+1])
			{
				ans--;
			}
			else
				j=i;
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