#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
	ll n,k,x;
	cin>>n>>k>>x;
	if( k*(k+1)<=x*2 && (n*(n+1))-(n-k)*(n-k+1)>=x*2)
		cout<<"yes\n";
	
	else 
		cout<<"no\n";
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