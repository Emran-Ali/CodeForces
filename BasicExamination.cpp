#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	int n;
	cin>>n>>s;
	
	stack<char> ss;
	for(int i=0; i<n; i++)
	{
		if(s[i]=='(')
			ss.push(s[i]);
		else
		{
			if(ss.empty()){
				cout<<"NO\n";
				return;
			} 
			ss.pop();
		} 
			
	}

	ss.empty() ? cout<<"YES\n": cout<<"NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    	solve();

    return 0;
}