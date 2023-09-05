#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
    	string s, p="314159265358979323846264338327";
    	cin>>s;
    	
    		int m=0;
    		for(int i=0; i<s.size(); i++)
    	{
    		if(s[i]==p[i])
    		{
    			m++;
    		}
    		else
    			break;
    	}
    	cout<<m<<endl;
    	
    }


    return 0;
}