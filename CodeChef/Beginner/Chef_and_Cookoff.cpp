#include <bits/stdc++.h>

using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        int sum = 0;
        for(int i=0;i<5;i++){
            int a;
            cin >> a;
            sum = sum + a;
        }
        switch (sum)
        {
        case 0:
            cout << "Beginner" << endl;
            break;
        case 1:
            cout << "Junior Developer" << endl;
            break;
        case 2:
            cout << "Middle Developer" << endl;
            break;
        case 3:
            cout << "Senior Developer" << endl;
            break;
        case 4:
            cout << "Hacker" << endl;
            break;    
        case 5:
            cout << "Jeff Dean" << endl;
            break;
        default:
            break;
        }
        
    }
    return 0;
}