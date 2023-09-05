#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
    	int n, n1=0;
    	cin>>n;
    	int ar[n];
    	for(int i=0; i<n; i++)
    	{
    		cin>>ar[i];
    		if(ar[i]==1)
    			n1++;
    	}
    	cout<<n-(n1/2)<<endl;
    }

    return 0;
}