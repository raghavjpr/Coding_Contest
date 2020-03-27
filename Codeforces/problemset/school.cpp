#include <bits/stdc++.h>

using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
 
    while (t--)
    {
        for (int i = 0; i < n-1; i++)
        {
            if (s[i]<s[i+1])
            {
                swap(s[i], s[i+1]);
                i++;
            }
        }
    }
    cout << s << endl;
    return 0;
}