#include<bits/stdc++.h>
using namespace std;
bool issafe(int row, int col, int n, int board[][20]){
    int rowDuplicate = row, colDuplicate = col;
    while((col >= 0) && (row >= 0)) if(board[row--][col--]==1) return false;
    row = rowDuplicate, col = colDuplicate;
    while(col >= 0) if(board[row][col--]==1) return false;
    row = rowDuplicate, col = colDuplicate;
    while((col >= 0) && (row < n)) if(board[row++][col--]==1) return false;
    return true;
}
void solve(int col, int n, int board[][20]){
    if(col == n){
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)    cout << board[i][j] << " ";
            cout << endl;
        }
        cout << endl;
    }
    else
        for(int row = 0; row < n; row++)
            if(issafe(row, col, n, board)){ 
                board[row][col] = 1; 
                solve(col +1, n, board); 
                board[row][col] = 0;  
            }
}
int main(){
    int n; cin >> n;
	int board[20][20] = {0};
    solve(0, n, board);
	return 0;
}