#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n,k;
	cin>>n>>k;
	int a[n],b[n],c[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		c[i]=a[i];
	}
	for(int i=0; i<n; i++)
	{
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n);

	map<int,vector<int>>mp;
	for(int i=0; i<n; i++)
	{
		mp[a[i]].push_back(b[i]);
	}

	for(int i=0; i<n; i++)
	{
		cout<<	mp[c[i]].back()<<" ";
		mp[c[i]].pop_back();
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