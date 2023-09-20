#include<bits/stdc++.h>
using namespace std;
int mask;
//int ans = -1;
vector<vector<int>>v;
int tsp(int cur, int m, int n, int &ans){
	if(cur == mask){
		return v[cur][0];
	}
	for(int city = 0; city < n; ++city){
		if((1<<city)&m == 0){
			int newans = v[cur][city] + tsp(city, m|(1<<city), n, ans);
			ans = min(newans, ans);
		}
	}
	return ans;
}
int main(){
	int n;
	cin >> n;
	std::vector<int> a(n), c(n);
	for(int i = 0; i < n; ++i){
		cin >> a[i] >> c[i];
	}
	v.resize(n + 2);
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			if(i == j) continue;
			v[i][j] = 0;
		}
	}
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			if(i == j) continue;
			v[i][j] = max(abs(a[j] - a[i]), c[i]);
		}
	}
	mask = (1<<n) - 1;
	int ans = -1;
	cout << tsp(0, mask, n, ans) << '\n';
	//cout << ans << '\n';
}