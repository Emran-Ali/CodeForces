#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
	int n;
	cin>>n;
	vector<ll> nn(n);
	ll num;
	for(int i=0; i<n; i++)
	{
		cin>>nn[i];
		
	}
	
	sort(nn.begin(), nn.end());
	num=nn[0];
	for(int i=0; i<n-1; i++){
		num=max(num, nn[i+1]-nn[i]);
	}
	cout<<num<<endl;
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