#include<bits/stdc++.h>
using namespace std;
void removeChar(char* s, char x){
    // cout << s << endl;
    int l = strlen(s);
    if(!l)   return ;
    if(s[0] == 'x'){
        for (int i = 0; i < l; i++)    s[i] = s[i+1];
        removeChar(s, x);
    }else removeChar(s+1, x);
}
int main(){
	char s[100];
    cin >> s;
    char x;
    cin >> x;
    removeChar(s, x);
    cout << s;
	return 0;
}