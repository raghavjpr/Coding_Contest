#include <bits/stdc++.h>

using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int r=0,c=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int temp;
            cin >> temp;
            if(temp==1){
                r=i;
                c=j;
            }
        }
    }

    int total = abs(2-r) + abs(2-c);

    cout << total << endl;

    return 0;
}