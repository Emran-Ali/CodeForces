#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, k;
	cin>>n>>k;
	if(n%k)
	{
		cout<<"1\n"<<n<<endl;
	}
	else{
		cout<<"2\n";
		int i=1;
		while(true)
		{
			if(i%k!=0 && (n-1)%k!=0)
			{
				cout<<n-i<<" "<<i<<endl;
				break;
			}
			i++;

		}
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