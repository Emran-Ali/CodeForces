#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int x,y,z;
	cin>>x>>y>>z;
	if(y-x<z)
	{
		cout<<"-1\n";
	}
	else
	{
		int ar[z],j=1;
		ar[z-1]=y;
		ar[0]=x;

		for(int i=z-2; i>0; i--)
		{
			ar[i]=ar[i+1]-j;
			j++;
			if(ar[i]-ar[0]<j)
			{
				cout<<"-1\n";
				return;
			}
		}
		for(auto h : ar)
		{
			cout<<h<<" ";
		}
		cout<<endl;
	}

	

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
    	solve();
    }

    return 0;
}