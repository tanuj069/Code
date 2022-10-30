#include<bits/stdc++.h>
using namespace std;
void removeChar(string s, char x){
    cout << s << endl;
    if(!s.size())   return ;
    if(s[0] == 'x'){
        for (int i = 0; i < s.size(); i++)    s[i] = s[i+1];
        removeChar(s, x);
    }else removeChar(s.substr(1), x);
}
int main(){
	string s;
    cin >> s;
    char x;
    cin >> x;
    removeChar(s, x);
    cout << s;
	return 0;
}
