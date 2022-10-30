#include<bits/stdc++.h>
using namespace std;
void reverseArray(int *arr, int n){
    if(!n || n == 1)    return;
    swap(arr[0], arr[n-1]);
    reverseArray(arr + 1, n- 2);
}
int main(){
	int n;
    cin >> n;
    int *arr = new int [n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    reverseArray(arr, n);
    for(int i = 0; i < n; i++) cout <<  arr[i] << " ";
	return 0;
}