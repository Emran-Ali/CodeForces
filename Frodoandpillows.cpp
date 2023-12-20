#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,m,k;
    cin>>n>>m>>k;
    if(n==1){
        cout<<m<<endl;
        return 0;
    }
    int ans=1;
    m-=n;
    
    int left=0;
    int right=0;
    while(m>0){
            int cost=1 + left+ right;
            if(m>=cost)
            {
                ans++;
                m-=cost;
                if(k-left>1) left++;
                if(k+right <n) right++;
            }
            else break;

        
    }

    cout<<ans<<endl;


}