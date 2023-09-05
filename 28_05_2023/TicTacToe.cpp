#include <bits/stdc++.h>
using namespace std;

void solve()
{
	char v[3][3];
	for(int i=0; i<3; i++)
		for(int j=0; j<3; j++)
			cin>>v[i][j];
	string ans = "DRAW";
		for(int i = 0; i < 3; i++) {
			if (v[i][0] == v[i][1] && v[i][1] == v[i][2] && v[i][0] != '.')
				ans=v[i][0];
		}
		for (int i = 0; i < 3; i++) {
			if (v[0][i] == v[1][i] && v[1][i] == v[2][i] && v[0][i] != '.')
				ans=v[0][i];
		}
		if (v[0][0] == v[1][1] && v[1][1] == v[2][2] && v[0][0] != '.')
			ans=v[0][0];
		if (v[0][2] == v[1][1] && v[1][1] == v[2][0] && v[0][2] != '.')
			ans=v[0][2];
		cout << ans << endl;
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