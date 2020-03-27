#include <bits/stdc++.h>

using namespace std;

int isPalindrome(string str) 
{
    int l = 0; 
    int h = str.length() - 1;
    while (h > l){ 
        if (str[l++] != str[h--]){
            return -1;
        }
    }
    return 1;
}


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){


