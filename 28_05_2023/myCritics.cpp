#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int a,b,c;
	cin>>a>>b>>c;
	(a+b+c-min(a,min(b,c))>=10) ? cout<<"YES\n" : cout<<"NO\n";
	
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