//       1       
//     2   2     
//   3       3   
// 4           4 

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	for(int row = 1; row <= n; row++){
		for(int col = 1; col < 2*n; col++)
			if(col <= (n - row))	cout << "  ";
			else if (col==(n-row+1)||col==(n+row-1)) cout << row << ' ';
			else cout << "  ";
		cout << endl;
	}
	return 0;
}