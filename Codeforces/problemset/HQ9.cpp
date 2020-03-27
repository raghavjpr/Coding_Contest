#include <bits/stdc++.h>

using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int f=1;
    for(int i=0;i<s.length();i++){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
            f=0;
            break;
        }
    }
    if(f)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}