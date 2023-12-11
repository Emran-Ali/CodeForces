#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int num, pak;
	cin>>num>>pak;
	if(num<=pak)
	{
		cout<<"1\n";
		return;
	}
	int ans=num;
	for(int i=1; i*i<=num ; i++)
	{
		
		if(num%i==0)
		{
			if(i<=pak)
				ans=min(ans,num/i);
			if(num/i <= pak)
				ans=min(ans,i);
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