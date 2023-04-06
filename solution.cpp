#include <bits/stdc++.h>
using namespace std;
void encode(string s){
    int i = 0; 
    int cnt = 1;
    while (i < s.length()){
        if (s[i] == s[i+1]){
            ++cnt;
        }
        if ((s[i] != s[i+1]) && (cnt == 1)){
            cout << s[i] << cnt;
            cnt = 1;
        }
        else if (s[i] != s[i+1]){
            cout << s[i] << cnt;
            cnt = 1;
        }
        ++i;
    }
}
int main(){
    string s;
    cin >> s;
    encode(s);
    return 0;
}