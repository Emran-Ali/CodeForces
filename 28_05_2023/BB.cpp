#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	int ar[n],a2[n];
	for(int i=0; i<n; i++)
	{
		cin>>ar[i];
		a2[i]=ar[i];
	}
	sort(ar,ar+n);
	
	for(int i=0; i<n-1; i++){
		if(ar[i]%2!=a2[i]%2)
		{
			cout<<"NO\n";
			return;
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