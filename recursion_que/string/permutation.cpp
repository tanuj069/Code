#include<bits/stdc++.h>
using namespace std;
void permu(int index, string s, vector<string>&vs){
    if(index == s.size())   vs.push_back(s);
    else{
        for (int i = index; i < s.size(); i++){
            swap(s[i], s[index]);
            permu(index + 1, s, vs);
            swap(s[i], s[index]);
        }
    }
}
int main(){
	string s; cin >> s;
    vector<string> vs;
    permu(0, s, vs);
    for(auto &vec : vs) cout << vec << endl;
	return 0;
}