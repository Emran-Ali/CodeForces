#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int l,r;
	cin>>l>>r;
	if(r<=3 ) {
		cout<<"-1\n";
		return;
	}
	if(__gcd(2, r-2)>1) {
		cout<<"2 "<<r-2<<endl;
		return;
	}
	if(__gcd(2, l+2)>1) {
		cout<<"2 "<<l+2<<endl;
		return;
	}
	int a=2,b=2;
	while(a+b<r)
	{
		if(__gcd(a, b)!=1 && a+b>=l)
		{
			cout<<a<<" "<<b<<endl;
			return;
		}
		a++;
	}

	a=2,b=2;
	while(a+b<r)
	{
		if(__gcd(a, b)!=1 && a+b>=l)
		{
			cout<<a<<" "<<b<<endl;
			return;
		}
		a++;
	}
	

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