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
    	int n,es=0,os=0,bg;
    	cin>>n;
    	for(int i=0; i<n; i++)
    	{
    		cin>>bg;
    		if(bg%2==0)
    			es+=bg;
    		else
    			os+=bg;

    	}
    	if(es>os)
    		cout<<"YES\n";
    	else
    		cout<<"NO\n";
    }

    return 0;
}