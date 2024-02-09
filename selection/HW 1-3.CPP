#include<iostream>
#include<climits>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	
	int res = INT_MIN;

	if (a < 100 && a > res)
		res = a;

	if (b < 100 && b > res)
		res = b;

	if (c < 100 && c > res)
		res = c;

	cout << res << "\n";

	return 0;
}