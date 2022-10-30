/*
                                           abc,' '
                    bc,'a'                                          bc,' '  
        c,'ab'                  c,'a'                   c,'b'                  c,' '
'','abc'  '','ab'       '','abc'  '','ab'       '','abc'  '','ab'       '','abc'  '','ab'
*/
#include<bits/stdc++.h>
using namespace std;
int index;
void print_subSequences(string s, string help){
    if(!s.size()) cout << ++index << help << endl;
    else{
        print_subSequences(s.substr(1), (help + s[0]));
        print_subSequences(s.substr(1), help);
    }
}
int main(){
	string s, help = " ";
    cin >> s;
    print_subSequences(s, help);
	return 0;
}