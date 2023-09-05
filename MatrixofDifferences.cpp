#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	int ar[n*n],ii=0;
    	for (int i = 0; i < n*n; i+=2)
    	{
    		ar[i]=n*n-ii;
    		ii++;
    		ar[i+1]=ii;
    	}
    	if (! n*n%2)
    		ar[n-1]=ii+1;
    	for (int i = 0; i < n; i++)
    	{
    		if(i%2==0)
    		{
    			for(int j=0; j<n; j++)
    				cout<<ar[i*n+j]<<" ";
    		}
    		else
    			for(int j=n-1; j>=0; j--)
    				cout<<ar[i*n+j]<<" ";
    		cout<<endl;
    	}
    }
    return 0;
}