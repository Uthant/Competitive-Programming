#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(cin >> n and n){
		vector < pair <int,int> >a(n);
		for(int i = 0 ; i < n ; i++){
			cin >> a[i].first;
			a[i].second = i+1;
		}
		sort(a.rbegin(),a.rend());
		cout << a[1].second << '\n';	
		}

	return 0;
}

