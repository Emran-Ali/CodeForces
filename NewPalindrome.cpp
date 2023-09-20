#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin>>s;
	int sz=s.size(),ye=1;
	for(int i=0; i<(sz/2)-1; i++)
	{
		if(s[i]!=s[i+1])
		{
			ye=0;
			cout<<"YES\n";
			break;
		}

	}
	if(ye) cout<<"NO\n";

	
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