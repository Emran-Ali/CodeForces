#include <bits/stdc++.h>
using namespace std;
using ll =long long;

void solve()
{
	ll n, k; cin >> n >> k;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll j = 0, x = 1;
        while (k--) {
        	// cout<<"k "<<k<<endl;
            while (j < n && a[j] <= x+j){
            	// cout<<"j - x - a[j]- :"<<j<<" "<<x<<" "<<a[j]<<endl;
                j++;
            }
            x += j;
        }

        cout << x << "\n";
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