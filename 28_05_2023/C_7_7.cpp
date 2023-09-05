#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin>>n;
	int ar[n];
	int ev=0, od=0;
	for(int i=0; i<n; i++)
	{
		cin>>ar[i];
		(ar[i]%2) ? od++ : ev++;
	}
	(od%2) ? cout<<"NO\n" : cout<<"YES\n";


	
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