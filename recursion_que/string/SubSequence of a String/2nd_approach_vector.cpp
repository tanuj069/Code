#include<bits/stdc++.h>
using namespace std;
void subSequence(string s, vector<string>& output){
    if(!s.size())   output.push_back(" ");
    else{
        subSequence(s.substr(1), output);
        int x = output.size();
        for(int i = 0; i < x; i++) output.push_back((output[i] + s[0]));
    }
}
int main(){
	string s; cin >> s;
    vector<string> output;
    subSequence(s, output);
    for(int i = 0; i < output.size(); i++)  cout << i+1 << output[i] << endl;
    // for(auto &x: output)    cout << x << endl;
	return 0;
}