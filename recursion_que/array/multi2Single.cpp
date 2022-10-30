#include<bits/stdc++.h>
using namespace std;
void multiCharacter2SingleOnly(char *s, char x){
    int l = strlen(s); 
    if(!l || l==1) return ;
    if(s[0] == x && s[1] == x){
        for(int i = 0; i < l; i++)  s[i] = s[i+1];
        multiCharacter2SingleOnly(s, x);
    }
    else multiCharacter2SingleOnly(s+1, x);
}
int main(){
	char s[1000];
    cin >> s;
    char x;
    cin >> x;
    multiCharacter2SingleOnly(s, x);
    cout << s;
	return 0;
}