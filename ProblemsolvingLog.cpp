#include <bits/stdc++.h>
using namespace std;

void solve()
{
	char a;
	int n;
	vector<int> v(27,0);
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a;
		v[a-'A']++;
	}
	int ans=0;
	for(int i=0; i<26; i++){
		if(v[i]>=i+1) ans++;
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