#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string s[10];
	for(int i=0; i<10; i++)
		cin>>s[i];
	int ar[10][10]={{1,1,1,1,1,1,1,1,1,1},
{1,2,2,2,2,2,2,2,2,1},
{1,2,3,3,3,3,3,3,2,1},
{1,2,3,4,4,4,4,3,2,1},
{1,2,3,4,5,5,4,3,2,1},
{1,2,3,4,5,5,4,3,2,1},
{1,2,3,4,4,4,4,3,2,1},
{1,2,3,3,3,3,3,3,2,1},
{1,2,2,2,2,2,2,2,2,1},
{1,1,1,1,1,1,1,1,1,1}
};
	int ans=0;
	for(int i=0; i<10; i++)
		for(int j=0; j<10; j++)
		{
			if(s[i][j]=='X'){
				
				ans+=ar[i][j];
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