#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	int ar[n][2];
	int val=0, ini=0, mid=0;
	for(int i=0; i<n; i++)
	{
		cin>>ar[i][0]>>ar[i][1];
		if(ini>=ar[i][0] || ini>=ar[i][1])
		{
			val=max(val,ini-ar[i][1]);
			ini=ar[i][1];
		}
		else
		{
			val=max(val,ar[i][0]-ini);
			ini=ar[i][0];
		}

	}
	cout<<val<<endl;

	
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