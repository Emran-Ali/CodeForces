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
    	int n, le=0,ri=0;
    	cin>>n;
    	int ar[n];
    	for(int i=0; i<n; i++)
    	{

    		cin>>ar[i];
    		if(ar[i]==2)
    			le++;
    	}
    	// for(int i=0; i<n; i++)
    	// {
    	// 	le*=ar[i];
    	// 	for(int j=i; j<n; j++)

    	// }
    	if(le==0)
    		cout<<1<<endl;
    	else if(le%2!=0 )
    		cout<<-1<<endl;
    	else
    		for(int i=0; i<n; i++)
    		{
    			if(ar[i]==2)
    				ri++;
    			if(ri==le/2)
    			{
    				cout<<i+1<<endl;
    				break;
    			}
    		}
    }

    return 0;
}