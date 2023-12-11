#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin>>s;
	char ar[]={'a','b','c','d','e','f','g','h'};
	int num= s[1]-'0';
	for(int i=1; i<=8; i++)
	{
		if(i==num) continue;
		cout<<s[0]<<i<<endl;

	}
	for (int i = 0; i < 8; ++i)
	{
		if(ar[i]==s[0]) continue;
		cout<<ar[i]<<num<<endl;
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