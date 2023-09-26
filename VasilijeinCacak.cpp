#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
	ll n,k,x;
	cin>>n>>k>>x;
	int l=n-k;
	if(n*(n+1)/2<x || k*(k+1)/2>x)
		cout<<"no\n";
	
	else if((n*(n+1)/2)-(l*(l+1)/2)<x)
		cout<<"no\n";
	else
	cout<<"yes\n";	
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