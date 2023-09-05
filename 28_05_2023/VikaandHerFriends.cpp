#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n,m,k;
	cin>>n>>m>>k;
	int x,y, v,f=0;
	cin>>x>>y;
	v=(x+y)%2;
	for(int i=0; i<k; i++)
	{
		cin>>x>>y;
		if(v==(x+y)%2)
			f=1;
	}
	(f) ? cout<<"NO\n" : cout<<"YES\n";

	
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