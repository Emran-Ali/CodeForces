#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n,s,sm=0;
	cin>>n>>s;
	int ar[n],qs[n+1];
	qs[0]=0;
	for(int i=0; i<n; i++)
	{
		cin>>ar[i];
		sm+=ar[i];
		qs[i+1]=sm;
	}
	if(s>sm) cout<<"-1\n";
	else if(sm==s) cout<<"0\n";
	else
	{
		int i=1,j=1,ans=0;
		while(j<=n)
		{
			while(qs[j]-qs[i-1]<=s && j<=n)
			{
				j++;
			}
			
				ans=max(ans,j-i);
			
			i++; j++;
		}
		cout<<n-ans<<endl;
		
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