// 1 2 3 4 5 6 7 
// 1 2 3 4 5 6 7 
// 1 2 3 4 5 6 7 
// 1 2 3 4 5 6 7 
// 1 2 3 4 5 6 7 
// 1 2 3 4 5 6 7 
// 1 2 3 4 5 6 7 

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	for(int row = 1; row <= n; row++){
		for(int col = 1; col <= n; col++)
			cout << col << " ";
		cout << endl;
	}
	return 0;
}