#include <bits/stdc++.h>
using namespace std;

void solve()
{

	int n;
	cin>>n;
	int a1[n],a2[n];
	for(int i=0; i<n; i++)
	{
		cin>>a1[i];
	}
	for(int i=0; i<n; i++)
	{
		cin>>a2[i];
	}
	if(n==1 ){
		if(a1[0]==a2[0])
			cout<<2<<endl;
		else
			cout<<1<<endl;
		return ;
	}
	
	map<int , int> m1;
	map<int , int> m2;
	int j=1;
	for(int i=0; i<n-1; i++)
	{
		if(a1[i]==a1[i+1])
		{
			j++;
			// cout<<j<<" j1: ";
		}
		else
		{
			m1[a1[i]]=max(m1[a1[i]],j);
			j=1;
		}

	}
	if(a1[n-1]==a1[n-2])
		m1[a1[n-1]]=max(m1[a1[n-1]],j);
	else
		m1[a1[n-1]]=max(m1[a1[n-1]],1);
	
	j=1;
	for(int i=0; i<n-1; i++)
	{
		if(a2[i]==a2[i+1])
		{
			j++;
			// cout<<j<<" j:";sudo apt-get install conky-all
		}
		else
		{
			m2[a2[i]]=max(m2[a2[i]],j);
			j=1;
		}

	}
	if(a2[n-1]==a2[n-2])
		m2[a2[n-1]]=max(m2[a2[n-1]],j);
	else
		m2[a2[n-1]]=max(m2[a2[n-1]],1);
	int ans=0;
	for(int i=1; i<=2*n; i++)
	{
		ans=max(ans, m1[i]+m2[i]);

	}
	cout<<ans<<endl;
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