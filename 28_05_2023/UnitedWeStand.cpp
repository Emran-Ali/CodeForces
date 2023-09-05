#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	int ar[n];
	vector<int > b,c;
	for(int i=0; i<n; i++)
	{
		cin>>ar[i];
	}
	sort(ar, ar+n);
	if(ar[n-1]==ar[0])
	{
		cout<<"-1\n";
		return;
	}
	else{
		int i=0;
		while(ar[0]==ar[i]) i++;
	
	cout<<i<<" "<<n-i<<endl;
	for(int j=0; j<i; j++ )
		cout<<ar[j]<< " ";
	cout<<endl;
	for(int j=i; j<n; j++)
		cout<<ar[j]<<" ";
	cout<<endl;
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