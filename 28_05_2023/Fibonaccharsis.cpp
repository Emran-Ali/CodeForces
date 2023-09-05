#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n,k,ans=0;
	cin>>n>>k;

	for(int i=1; i<=n; i++)
	{
		int scnd=n;
		int fst=i;
		bool vld=true;
		for(int j=0; j<k-2; j++)
		{
			int fx=fst;
			fst=scnd -fst;
			scnd=fx;

			vld &= (fst<=scnd);
			vld &= min(fst,scnd) >=0;
			if(!vld) break;
		}
		if(vld) ans++;
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