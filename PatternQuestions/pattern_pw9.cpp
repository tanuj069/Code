// 1 2 1 2 1 2 
// 2 1 2 1 2 1 
// 1 2 1 2 1 2 
// 2 1 2 1 2 1 

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m; cin >> n >> m;
	int out;
	for(int row = 1; row <= n; row++){
		if(row & 1 == 1) out = 1;
		else out = 2;
		for(int col = 1; col <= m; col++){
			if(out > 2)	out = 1;
			cout << out++ << " ";
		}
		cout << endl;
	}
	cout << "---------------------------\n";
	for(int row = 1; row <= n; row++){
		for(int col = 1; col <= m; col++)
			if((row + col) & 1 == 1)	cout << "2 ";
			else	cout << "1 ";
		cout << endl;
	}
	return 0;
}