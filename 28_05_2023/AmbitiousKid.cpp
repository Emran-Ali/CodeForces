#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	int mn=INT_MAX,in;
	for(int i=0; i<n; i++)
	{
		cin>>in;
		mn=min(mn, abs(in));
	}
	cout<<mn<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin>>t;
    // while(t--)
    {
    	solve();
    }

    return 0;
}