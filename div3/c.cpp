#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, e=0, o=0, mo=INT_MAX;
	bool a=true, b=true;
	cin>>n;
	int ar[n];
	for(int i=0; i<n; i++)
	{
		cin>>ar[i];
		if(ar[i]%2==0)
			e++;
		else
		{
			o++;
			mo=min(mo,ar[i]);
		}
	}
	if(e==n || o==n)
	{
		cout<<"YES\n";
		return;
	}
	// cout<<" min "<<mo<<endl;
	for(int i=0; i<n; i++)
	{
		if(ar[i]%2!=0 )
		{
			
			if((ar[i]-mo)<0 )
			{
				a=false;
				break;
			}
		}
			
	}
	for(int i=0; i<n; i++)
	{
		if(ar[i]%2==0 )
		{
			
			if((ar[i]-mo)<=0 )
			{
				b=false;
				break;
			}
		}
			
	}
	if(!a || !b)
		cout<<"NO\n";
	else
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