#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string c="codeforces";
	string s;
	cin>>s;
	int cot=0;
	int n=s.size();
	for(int i=0; i<n; i++)
	{
		if(i>=10) break;
		if(c[i]!=s[i])
			cot++;
	}
	cout<<cot<<endl;

	
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