#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin>> n;
	int ar[n];
	for(int i=0; i<n; i++)
		cin>>ar[i];
	if(n& 1){
		cout<<"4\n";
		cout<<"1 "<<n-1<<endl;
		cout<<"1 "<<n-1<<endl;
		cout<<n-1<<" "<<n<<endl;
		cout<<n-1<<" "<<n<<endl;
	}
	else
	{
		cout<<"2\n";
		cout<<"1 "<<n<<endl;
		cout<<"1 "<<n<<endl;
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