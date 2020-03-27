#include <bits/stdc++.h>

using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string a,b;
    cin >> a >> b;
    int f =1;
    
    for(int i=0;i<a.length();i++){
        if(tolower(a[i]) > tolower(b[i])){
            f=0;
            cout << 1 << endl;
            break;
        }
        if(tolower(a[i]) < tolower(b[i])){
            f=0;
            cout << -1 << endl;
            break;
        }
    }

    if(f)
        cout << 0 << endl;
    return 0;
}