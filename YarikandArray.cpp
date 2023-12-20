#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	vector<int> num(n);
	for(int i=0; i<n; i++){
		cin>>num[i];
	}
	int ans=num[0];
	int sum=num[0], l=min(0,num[0]);
	for(int i=1; i<n; i++){
		if(abs(num[i-1]%2) == abs(num[i]%2))
		{
			l=0;
			sum=0;
		}
		sum+=num[i];
		ans=max(ans,sum-l);
		l=min(l, sum);
		
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