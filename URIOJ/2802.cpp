#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	cout << 1 + (((n-1)*n)/2) + (((n)*(n - 1)*(n - 2 )*(n - 3))/24) << '\n';
	return 0;
}

