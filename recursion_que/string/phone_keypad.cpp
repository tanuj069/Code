#include<bits/stdc++.h>
using namespace std;
string keypad[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
vector<string> result;
void phone_keypad(int index, string s, string temp){
    if(index == s.size()) result.push_back(temp);
    else{
        int x = s[index] - '0';
        string curr = keypad[x];
        if(!curr.size()) phone_keypad(index + 1, s, temp);
        for(int i = 0; i < curr.size(); i++) phone_keypad(index + 1, s, (temp + curr[i]));
    }
}
int main(){
	string s; cin >> s;
    string temp;
    phone_keypad(0, s, temp);    
    cout << "total permutation is : " << result.size() << endl;
    int i =0 ;
    for(auto &vec : result) cout << ++i << "\t|" << vec << "|" << endl;
	return 0;
}