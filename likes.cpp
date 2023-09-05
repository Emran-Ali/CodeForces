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
    	int n,i,j,li=0;
    	cin>>n;
    	int ar[n];

    	for(i=0; i<n; i++)
    		cin>>ar[i];
    	sort(ar, ar+n);
    	for(i=n-1; i>-1; i--)
    	{
    		if(ar[i]>=0)
    			li++;
    		else
    			li--;
    		cout<<li<<" ";

    	}
    	cout<<endl;
    	i=0, j=n-1, li=0;
    	while(ar[i]<0)
    	{
    			li++;
    			cout<<li<<" ";
    			li--;
    			cout<<li<<" ";
    			i++;
    	}
    	n=n-i;
    	while(i<n)
    	{
    		cout<<++li<<" ";
    		i++;
    	}
    	cout<<endl;

    }

    return 0;
}