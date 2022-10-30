#include<bits/stdc++.h>
using namespace std;
bool isSort(int * arr, int n){
    if(!n || n == 1)    return true;
    if(arr[0] <= arr[1])    return isSort(arr+1, n-1);
    return false;
}
int main(){
	int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout << (isSort(arr, n) ? "True" : "False");
	return 0;
}