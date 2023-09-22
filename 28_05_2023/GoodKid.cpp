#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin>>n;
	int ar[n],ans=1, mx=11,z=0,o=0;

	for(int i=0; i<n; i++)
	{
		cin>>ar[i];
		mx=min(ar[i], mx);
		if(ar[i]==0)
			z++;
		else if(ar[i]==1) 
			o++;
		else
		{
			ans*=ar[i];
		}
	}
	if(z>1) cout<<"0\n";
	else if(mx==0) cout<<ans<<endl;
	else{
		ans/=mx;
		cout<<(mx+1)*ans<<endl;

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