#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	int arr[n],ar2[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
		// ar2[i]=arr[i];
	}
	for(int i=0; i<n; i++)
	{
		ar2[i]=n-arr[i]+1;
	}
	for(int i=0; i<n; i++)
	{
		cout<<ar2[i]<<" ";
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