// Preparing for the Contest

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, k;
	cin>>n>>k;
	// cout<<n-k<<endl;
	for(int i=1; i<= k; i++){
		cout<<i<<" ";
	}

	for(int i=n; i> k ; i-- )
	{
		cout<<i<<" ";
	}
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