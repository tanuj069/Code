#include<bits/stdc++.h>
using namespace std;
int sum_arr(int *arr, int n){
    if(n==0)    return 0;
    return sum_arr(arr+1, n-1) + arr[0];
}
int main(){
	int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)    cin >> arr[i];
    cout << sum_arr(arr, n);
	return 0;
}