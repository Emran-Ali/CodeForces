#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n,k,ans=0;
	cin>>n>>k;
	string s; cin>>s;
	for(int i=0; i<n; i++)
	{
		if(s[i]=='B')
		{
			ans++;

			i+=k-1;
		}
	}
	cout<<ans<<endl;
	
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