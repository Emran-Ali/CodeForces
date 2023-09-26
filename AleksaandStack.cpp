#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	cout<<"2 3 ";
	int d=5,ans=4,pe=2, ne=3;

	for(int i=2; i<n; i++)
	{
		d=pe+ne;
		while((3*ans)%d==0)
		{
			ans++;
		}
		cout<<ans<<" ";
		pe=ne;
		ne=ans;
		ans++;
	}
	cout<<endl;
	
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