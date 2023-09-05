#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int ar[n];
		for (int i = 0; i < n; i++)
		{
			cin >> ar[i];
		}

		if (ar[n-1] == ar[0]) {
			cout << "NO\n";
		}
		else {
			cout << "YES\n";
			swap(ar[0],ar[1]);
			swap(ar[0],ar[n-1]);
			for (int i = 0; i < n; i++)
				cout << ar[i] << " ";
			cout << endl;
		}
	}
}