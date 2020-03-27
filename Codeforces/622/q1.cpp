#include <bits/stdc++.h>

using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        int a,b,c;
        cin >>a >>b >>c;
        int total = 0;
        if(a>0){
            a--;
            total++;
        }
        if(b>0){
            b--;
            total++;
        }
        if(c>0){
            c--;
            total++;
        }
        if(a>=b && a>=c){
            if(a>0 && b>0){
                a--;b--;
                total++;
            }
            if(a>0 && c>0){
                a--;c--;
                total++;
            }
            if(b>0 && c>0){
                b--;c--;
                total++;
            }
        }
        else if(b>=a && b>=c){
            if(b>0 && c>0){
                b--;c--;
                total++;
            }
            if(a>0 && b>0){
                a--;b--;
                total++;
            }
            if(a>0 && c>0){
                a--;c--;
                total++;
            }
        }
        else if(c>=a && c>=b){
            if(a>0 && c>0){
                a--;c--;
                total++;
            }
            if(b>0 && c>0){
                b--;c--;
                total++;
            }
            if(a>0 && b>0){
                a--;b--;
                total++;
            }
        }
        if(a>0 && b>0 && c>0){
            a--;b--;c--;
            total++;
        }
        cout << total << endl;
    }
    return 0;
}