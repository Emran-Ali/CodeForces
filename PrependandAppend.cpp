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
    	int n;
    	string s;
    	cin>>n>>s;
    	int i=0,j=n-1;
    	while(i<j)
    	{
    		if((s[i]=='1' && s[j]=='0') || (s[i]=='0' && s[j]=='1'))
    			{
    				n-=2;
    				i++; j--;
    			}
    		else
    			break;
    	}
    	cout<<n<<endl;
    }

    return 0;
}