/*
"abc", ""  [" ", "c", "b", "bc"] + ["a", "ac", "ab", "abc"]
"bc", ""   [" ", "c"] + ["b", "bc"]
"c", ""    [" "] + ["c"]
"", ""     [" "]
--------------------
*/
#include<bits/stdc++.h>
using namespace std;
int subseq(string s, string * result){
    if(!s.size()){        result[0] = " ";    return 1;    }
    int return_size = subseq(s.substr(1), result);
    for(int i = 0; i < return_size; i++) result[i+return_size] = result[i] + s[0];
    return (2 * return_size);
}
int main(){
	string s;
    cin >> s;
    int make_size = pow(2, s.size());
    string *result = new string[make_size];
    int counts = subseq(s, result);
    for(int i = 0; i < counts; i++) cout << i + 1 << result[i] << endl;
	return 0;
}