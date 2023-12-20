#include <bits/stdc++.h>
using namespace std;

int re(vector<int > a, vector<int > b,int ans, int k,int p,int mb){
	
	if(b[p]>b[mb]) mb=p;
	
	if(k==0) return ans;
	if(p>=a.size()) 
		ans+=b[mb];
	if(b[mb]>a[p]){
		ans+=b[mb];
	}
	else{
		ans+=a[p++];

	}
	return re(a,b, ans, k-1,p,mb);


}

void solve()
{
	int n, k; cin>>n>>k;

	vector<int > a(n);
	vector<int>b(n);

	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<n; i++){
		cin>>b[i];
	}
	int p=0;
	int mb=0;

	cout<<re(a,b, a[0], k-1,p+1,mb)<<endl;
	
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