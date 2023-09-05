#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, mx=0, ans, in1,in2;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>in1>>in2;
		if(in1<=10 && mx<in2)
		{
			ans=i+1;
			mx=in2;
		}

	}
	cout<<ans<<endl;
	
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