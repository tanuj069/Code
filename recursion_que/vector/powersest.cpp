#include<bits/stdc++.h>
using namespace std;
void pwSet(int index, int n, int *arr, vector<vector<int>> &ans, vector<int> temp){
    if(index == n) ans.push_back(temp);
    else{
        pwSet(index + 1, n, arr, ans, temp);
        temp.push_back(arr[index]);
        pwSet(index + 1, n, arr, ans, temp);
    }
}
int main(){
	int n; cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    vector<vector<int>> ans;
    vector<int> temp;
    pwSet(0, n, arr, ans, temp);
    for(auto &vec : ans){
        for(auto &ele : vec) cout << ele << " ";
        cout << endl;
    }
	return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// void powset(int index, int n, int *arr, vector<vector<int>>&ans, vector<int>temp){
//     if(index == n)  ans.push_back(temp);
//     else{
//         powset(index + 1, n, arr, ans, temp);
//         temp.push_back(arr[index]);
//         powset(index + 1, n, arr, ans, temp);
//     }
// }
// int main(){
// 	int n; cin >> n;
//     int *arr = new int[n];
//     for(int i = 0; i < n; i++)  cin >> arr[i];
//     vector<vector<int>> ans;
//     vector<int>temp;
//     powset(0, n, arr, ans, temp);
//     for(auto vec:ans){
//         for(auto ele:vec)   cout << ele << " ";
//         cout << endl;
//     }
// 	return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void powerset(int index, int n, int *arr, vector<vector<int>>&ans, vector<int>curr){
//     if(index == n) ans.push_back(curr);
//     else{
//         powerset(index+1, n, arr, ans, curr);
//         curr.push_back(arr[index]);
//         powerset(index+1, n, arr, ans, curr);
//     }
// }
// int main(){
// 	int n; cin >> n;
//     int *arr = new int[n];
//     for(int i = 0; i < n; i++)  cin >> arr[i];
//     vector<vector<int>> ans;
//     vector<int> curr;
//     powerset(0, n, arr, ans, curr);
//     for(auto vec: ans){
//         for(auto ele : vec)
//             cout << ele << " ";
//         cout << endl;
//     }
// 	return 0;
// }