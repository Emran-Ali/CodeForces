#include <bits/stdc++.h>
using namespace std;
long long sum(long long l, long long r)
{
	if(l>r) return 0;
	return (l+r)*(r-l+1)/2;
}
void solve()
{
	long long  n, x, y;
	cin>>n>>x>>y;

	long long pls=n/x-n/lcm(x,y);
	long long mns=n/y-n/lcm(x,y);

	cout<<sum(n-pls+1,n)-sum(1, mns)<<endl;
	
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