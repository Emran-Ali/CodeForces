#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin>>s;
	int n1=0, n0=0;
	int sz=s.size();
	
	for(int i=0; i<sz; i++){
		s[i]=='0'? n0++ : n1++;
	}

	if(n1==n0) {
		cout<<"0\n";
		return;
	}

	for(int i=0; i<sz; i++){
		
		if(s[i]=='0'){
			if(n1==0) break;
			else n1--;
		}
		else{
			if(n0==0) break;
			else n0--;
		}
			
	}

	cout<<n1+n0<<endl;

	
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