#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int a, b, c;
	cin>>a>>b>>c;
	if(a>b) cout<<"First\n";
	else if(b>a) cout<<"Second\n";
	else
	{
		if((a+b+c)%2) cout<<"First\n";
		else cout<<"Second\n";

	}
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