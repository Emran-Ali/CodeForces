#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	vector<int>ar(26,0);
	int mx=0;
	for(int i=0; i<n; i++)
	{
		ar[s[i]-'a']++;
		mx=max(mx,ar[s[i]-'a']);

	}
	if(mx<=n-mx)
	{
		n%2==1 ? cout<<"1\n" : cout<<"0\n";
	}
	else
		cout<<mx-(n-mx)<<endl;

	
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