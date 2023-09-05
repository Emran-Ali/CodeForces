#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string s, ans = ""; cin >> s;
	int n = s.length();
	int k[n] = {0}, carr=0,nn, p;
	
	for (int i = n-1; i >= 0; i--)
	{
		nn = s[i] - 48+ carr;
		if(nn>=9) p=i;
		// cout<<nn<<endl;
		if(nn>=5){
			carr=1;
			k[i]=0;
		}
		else{
			k[i]=nn;
			carr=0;
		}
	}

	if(carr) cout<<carr<<"car";

	for(int i=p-1; i>=0; i--)
		cout<<k[i];
	cout<<p-1<<" to 0 :";
	for(int i=p; i<n-1; i++)
		cout<<0;
	cout<<endl;


}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}

	return 0;
}