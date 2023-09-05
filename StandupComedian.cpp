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
    	int ar[4];
    	cin>>ar[0]>>ar[1]>>ar[2]>>ar[3];
    	int ans=0;
    	if(ar[0]!=0)
    	{
    		ans=ar[0]+ min(ar[1],ar[2])*2;
    		ans=ans+ min(ar[0]+1, abs(ar[1]-ar[2])+ar[3]);
    		cout<<ans<<endl;
    	}
    	else
    		cout<<'1'<<endl;

    }

    return 0;
}