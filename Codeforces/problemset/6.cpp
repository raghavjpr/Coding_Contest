#include <bits/stdc++.h>

using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int total=0;

    while (t--){
        int a,b,c;
        cin >>a >>b >>c;
        if(a+b+c >= 2)
            total++;
    }
    cout << total << endl;
    return 0;
}