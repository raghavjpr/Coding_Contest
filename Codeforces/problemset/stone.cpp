#include <bits/stdc++.h>

using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    string s;
    cin >> s;
    int total=0;
    
    for(int i=0;i<t-1;i++){
        if(s[i] == s[i+1]){
            total++;
        }
    }
    
    cout << total << endl;

    return 0;
}