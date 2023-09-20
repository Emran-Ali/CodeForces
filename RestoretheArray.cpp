#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	int ar[n-1];
	int ans[n];
	
	for(int i=0; i< n-1; i++)
	{
		cin>>ar[i];
		
	}
	ans[0]=ar[0];
	// cout<<ans.size()<<endl;
	
	for(int i=1; i<n-1; i++)
	{
		
			ans[i]=min(ar[i],ar[i-1]);
	}
	ans[n-1]=ar[n-2];

	for(auto x: ans)
		cout<<x<<" ";
	cout<<endl;
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