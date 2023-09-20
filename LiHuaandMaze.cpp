#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int x1,y1,x2,y2;
	int m,n;
	cin>>m>>n;
	cin>>x1>>y1>>x2>>y2;
	if((x1==1 && y1==1)|| (x1==1 && y1==n) || (x1==m && y1==1) ||(x1==m && y1==n)) cout<<2<<endl;
	else if((x2==1 && y2==1) || (x2==1 && y2==n) || (x2==m && y2==1) || (x2==m && y2==n)) cout<<2<<endl;
	else if((x1==1 || x1==m || y1==1 || y1==n || y2==1 || y2==n ||x2==1 || x2==m))cout<<3<<endl;
	else cout<<4<<endl;

	
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