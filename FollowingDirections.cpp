#include <bits/stdc++.h>
using namespace std;
void solve(string s)
{
	int x=0, y=0;
	string ans;
	bool a=false;
    	for(auto c : s)
    	{
    		if(c=='U')
    			y++;
    		else if(c=='R')
    			x++;
    		else if(c=='D')
    			y--;
    		else
    			x--;
    		if(x==1 && y==1)
    		{
    			a=true;
                continue;
    		}
    	}
    	ans=(a)? "yes\n" : "no\n";
    	cout<<ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	string s;
    	cin>>n;
    	cin>>s;
    	solve(s);
    }

    return 0;
}