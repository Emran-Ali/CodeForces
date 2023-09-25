#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    string s="codeforces";
    cin>>t;
    while(t--)
    {
    	bool ans=false;
    	char a;
    	cin>>a;
    	for(auto x : s)
    	{
    		if(a==x)
    		{
    			ans=true;
    			break;
    		}
    	}
    	string f=(ans) ? "yes\n" : "no\n";
    	cout<<f;
    }

    // while(t--)
    // {
    //     bool ans=false;
    //     char a;
    //     cin>>a;
    //     for(auto x : s)
    //     {
    //         if(a==x)
    //         {
    //             ans=true;
    //             break;
    //         }
    //     }
    //     string f=(ans) ? "yes\n" : "no\n";
    //     cout<<f;
    // }

    return 0;
}