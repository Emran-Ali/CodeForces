#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, dt=0;
	map<int, int> mp;
	cin>>n;
	int ar[n];
	for(int i=0; i<n; i++)
	{
		cin>>ar[i];

		if(mp[ar[i]]==0)
			dt++;
		mp[ar[i]]++;
	}
	if((n-dt)%2==0) cout<<dt<<endl;
	else
		cout<<dt-1<<endl;
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