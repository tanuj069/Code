#include<bits/stdc++.h>
using namespace std;
void replaceCharacter(char *s, char *toWhom, char *byWhom){
    int ls = strlen(s);
    if(!ls) return;
    int lt = strlen(toWhom), lb = strlen(byWhom);
    if(ls >= lt){
        int flag = 0;
        for(int i = 0; i < lt; i++)    if(s[i] != toWhom[i]) {    flag = 1;   break;    }
        if(flag == 1)   replaceCharacter(s+1, toWhom, byWhom);
        else{
            int diff = abs(lt-lb);
            if(lt > lb){
                for(int i = 0; i < lb; i++) s[i] = byWhom[i];
                for(int i = lb; i <= ls - diff; i++) s[i] = s[i+diff];
                replaceCharacter(s+lt, toWhom, byWhom);
            }else{
                for (int i = ls; i >= lt; i--)    s[i+diff] = s[i];
                for (int i = 0; i < lb; i++)    s[i] = byWhom[i];
                replaceCharacter(s+lb, toWhom, byWhom);
            }
        }
    }
}
int main(){
	char s[100];
    cin >> s;
    char toWhom[100];
    cin >> toWhom;
    char byWhom[100];
    cin >> byWhom;
    replaceCharacter(s, toWhom, byWhom);
    cout << s;
	return 0;
}