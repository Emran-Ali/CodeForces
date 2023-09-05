#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
	ll n;
	cin>>n;
	int ans=0,tmp=0;
	for(int i=1; i<101; i++)
	{
		if(n%i==0) tmp++;
		else {
			ans=max(ans,tmp);
			tmp=0;
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