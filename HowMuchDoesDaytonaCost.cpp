#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, k,ans=0;
	cin>>n>>k;
	int ar[n];
	for(int i=0; i<n; i++)
	{
		cin>>ar[i];
		if(ar[i]==k) ans++;
	}
	ans>0 ? cout<<"yes\n" :	cout<<"no\n";

	
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