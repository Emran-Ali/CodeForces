#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string s; cin>>s;
	int cou=0;
	if(s[0]=='a') cou++;
	if(s[1]=='b') cou++;
	if(s[2]=='c') cou++;

	if(cou==0) cout<<"NO\n";
	else cout<<"YES\n";

	
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