#include <bits/stdc++.h>
using namespace std;
using ll= long long;

auto maps = [](ll x) {
        if (x % 4 == 0) return 0;
        if (x % 4 == 1) return x;
        if (x % 4 == 2) return -1;
        return -x - 1;
    };

void solve()
{
	ll x,n;
	cin>>x>>n;

	x%2==0 ? cout<<x- maps(n)<<endl : 
	cout<<x+ maps(n)<<endl;

	
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