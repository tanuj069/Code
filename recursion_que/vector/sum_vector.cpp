#include<bits/stdc++.h>
using namespace std;
int sum_vect(vector<int> v){
    if(!v.size())    return 0;
    v.pop_back();
    return sum_vect(v) + v.back();
}
int main(){
	int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    cout << sum_vect(v);
    
	return 0;
}