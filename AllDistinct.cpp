#include<bits/stdc++.h>
using namespace std;
#define int long long
int v[1100][1100];
int tsp(int cur, int m, int &n, int all){
	if(m == all){
		return v[cur][0];
	}
	int ans = 1e18;
	for(int city = 0; city < n; ++city){
		if((m &(1LL<<city)) == 0){
			int newans = v[cur][city] + tsp(city, (m|(1<<city)), n, all);
			ans = min(newans, ans);
		}
	}
	return ans;
}
signed main(){
	int n;
	cin >> n;
	std::vector<int> a(n), c(n);
	for(int i = 0; i < n; ++i){
		cin >> a[i] >> c[i];
	}
    for(int i = 0; i < 1100; ++i){
		for(int j = 0; j < 1100; ++j){
			//if(i == j) continue;
			v[i][j] = 0;
		}
	}
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			if(i == j) continue;
			v[i][j] = max(a[j] - a[i], c[i]);
		}
	}
	int mask = (1<<n) - 1;
	cout << tsp(0, 1, n, mask) << '\n';
}
/*
3
1 9
2 1
4 1

6
4 2
8 4
3 0
2 3
7 1
0 1


*/