#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	char* str1 = "41000000000000000000";
	char* str2 = "40862016542130810467";

	int res1 = atoi(str1[1]);
	int res2 = atoi(str2);

	cout << "atoi(" << str1 << ") is " << res1 << "\n";
	cout << "atoi(" << str2 << ") is " << res2 << "\n";

	return 0;
}