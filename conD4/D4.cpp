#include <bits/stdc++.h>
using namespace std;
bool s=false;
void che(int num, int trgt, map<int,int> &mp)
{
	if(num<trgt ) return;
	if( mp[num]==1) return;
	// cout<<num<<"**   ";
	mp[num]++;
	if(num%3!=0) return ;
	

	
	che((num/3)*2,trgt,mp);
	che(num/3,trgt,mp);


}

void solve()
{
	int num,trgt;
	cin>>num>>trgt;
	map<int , int>mp;
	
	if(num==1 && trgt==1) cout<<"YES\n";
	else 
	{
		che(num,trgt,mp);
		// cout<<"***"<<mp[trgt]<<endl;
		mp[trgt]++;
		if(mp[trgt]>=2) cout<<"YES\n";
		else cout<<"NO\n";

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