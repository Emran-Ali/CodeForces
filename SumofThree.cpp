#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	int a=0, b=0;
	n--;
	if(n-2>2 && (n-2)%3!=0)
		{a=2; b=n-2;}
	if(n-4>4 && (n-4)%3!=0)
		{a=4; b=n-4;}
	if(n-5>5 && (n-5)%3!=0)
		{a=5; b=n-5;}
	// 1010
	if(a!=0 )
	{
		cout<<"YES\n";
		cout<<1<<" "<<a<<" "<<b<<endl;
	}
	else
		cout<<"NO\n";

	
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