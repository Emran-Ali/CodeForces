#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string s; cin>>s;

	int a,b;
	int sz=s.size();
	for(int i=1; i<(sz/2)+1; i++){
		if(s[i]!='0'){
			a=stoi(s.substr(0,i));
			b=stoi(s.substr(i,sz-i));
			if(a<b){
				cout<<a<<" "<<b<<endl;
				return;
			}

		}
	}
	cout<<"-1"<<endl;

	
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