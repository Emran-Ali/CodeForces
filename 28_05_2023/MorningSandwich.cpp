#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int a,b,c,cd;
	cin>>a>>b>>c;
	cd=b+c;
	if(cd>=a-1) cout<<a+a-1<<endl;
	else cout<<cd+cd+1<<endl;

	
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