#include <bits/stdc++.h>
using namespace std;

void solve(){

        int n;
        string s;
        cin>>n>>s;
        int mp[26];
        for(int i=0; i<26; i++)
            mp[i]=-1;

        for(int i=0; i<n; i++)
        {
            if(mp[s[i]-'a']==-1)
            {
                mp[s[i]-'a']=i%2;
            }
            else
            {
                if(mp[s[i]-'a']!= i%2)
                {
                    cout<<"NO\n";
                    return;
                }
                    
            }

        }
        cout<<"YES\n";

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