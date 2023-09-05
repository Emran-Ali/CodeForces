#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	int tim[n];
	string skl[n];
	int ans=INT_MAX;
	int sk1=INT_MAX;
	int sk2=INT_MAX;
	bool s1=false, s2=false;
	for(int i=0; i<n; i++)
	{
		cin>>tim[i]>>skl[i];
		if(skl[i][0]=='1' && skl[i][1]=='1') ans=min(ans,tim[i]);
	}
	for(int i=0; i<n; i++)
	{
		if(skl[i][0]=='1') 
			{
				sk1=min(sk1,tim[i]);
				s1=true;
			}
		if(skl[i][1]=='1')
		{
			sk2=min(sk2,tim[i]);
			s2=true;
		} 
	}

	ans=min(ans, sk1+sk2);
	if(s1 && s2)
		cout<<ans<<endl;
	else cout<<"-1\n";

	
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