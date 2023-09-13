#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int a,b,c;
	cin>>a>>b>>c;
	cout<<((abs(a - b) + 2 * c - 1) / (2 * c))<<endl;
	// if(a==b) {
	// 	cout<<"0\n";
	// 	return;
	// }
	// else if(abs(a-b)<=c)
	// {
	// 	cout<<"1\n";
	// }
	// else
	// {
	// 	float ans=abs(a-b)/2;
	// 	ans=ceil(ans/c);
	// 	cout<<ans<<endl;
	// }

	
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