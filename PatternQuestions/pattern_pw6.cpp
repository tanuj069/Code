// 1 2 3 4 5 6 7 
// 2 3 4 5 6 7 1 
// 3 4 5 6 7 1 2 
// 4 5 6 7 1 2 3 
// 5 6 7 1 2 3 4 
// 6 7 1 2 3 4 5 
// 7 1 2 3 4 5 6 

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int count = 1;
	for(int row = 1; row <= n; row++){
		for(int col = 1; col <= n; col++)
			cout << ((count % 7) ? (count++ % 7) : (count = 7)++) << " ";
		count++;
		cout << endl;
	}
	cout << "-------------\n";
	for(int row = 1; row <= n; row++){
		for(int col = row; col <= n; col++)
			cout << col << ' ';
		for(int col = 1; col <= (row - 1); col++)
			cout << col << ' ';
		cout << endl;
	}
	return 0;
}