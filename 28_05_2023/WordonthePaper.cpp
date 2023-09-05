#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string s[8],ans="";
	char a;
	// for(int i=0; i<8; i++)
	// {
	// 	cin>>s[i];
	// }
	// // cout<<ans<<endl;
	for(int i=0; i<8; i++)
	{
		for(int j=0; j<8; j++)
	{
		// if(s[j][i]!='.')
		// {
		// 	// cout<<s[j][i];
		// 	ans+=s[j][i];
		// 	// cout<<ans<<endl;
		// }
		cin>>a;
		if(a!='.')
			cout<<a;
			
	}
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