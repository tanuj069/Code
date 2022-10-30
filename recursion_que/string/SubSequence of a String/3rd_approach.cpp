/*
                                           0,abc,' '
                    1,abc,'a'                                          1,abc,' '  
        2,abc,'ab'                  2,abc,'a'                   2,abc,'b'                  2,abc,' '
3,abc,'abc'  3,abc,'ab'       3,abc,'abc'  3,abc,'ab'       3,abc,'abc'  3,abc,'ab'       3,abc,'abc'  3,abc,'ab'
*/

#include<bits/stdc++.h>
using namespace std;
int counts;
void subSequence(int index, string s, string help){
    int l = s.size();
    if(index == l)   {cout << ++counts << help << endl; return; }
    else{
        subSequence(index+1, s, (help + s[index]));
        subSequence(index+1, s, help);
    }
}
int main(){
	string s, help = " ";
    cin >> s;
    subSequence(0, s, help);
	return 0;
}