#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	string s="",s2="";

	for(int i=0; i<n; i++)
	{
		if(i%2==0){
			s2+='W';
			// s+='R';
		} 
		else{
			s2+='R';
			
		}
		s+='W'; 
	}
	for(int i=0; i<n; i++){
		if(i%2==0) 
			cout<<s<<endl;
		else 
			cout<<s2<<endl;
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    	solve();
}