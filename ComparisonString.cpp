#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	int n;
	cin>>n>>s;
	int ans=0, tmp=1;
	for(int i=1; i<n; i++)
	{
		if(s[i]==s[i-1])
			tmp++;
		else
		{
			ans=max(ans,tmp);
			tmp=1;
		}
	}
	ans=max(ans,tmp);
	cout<<ans+1<<endl;

	
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