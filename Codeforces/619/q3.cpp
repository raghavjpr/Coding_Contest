#include <bits/stdc++.h>

using namespace std;

int countSubString(string s, char c, int k) 
{
    int leftCount = 0, rightCount = 0;
    int  left = 0, right = 0;
    int freq = 0;
    int result = 0, len = s.length();
    while (s[left] != c && left < len) { 
        left++; 
        leftCount++; 
    }
    right = left + 1; 
    while (freq != (k - 1) && (right - 1) < len) { 
        if (s[right] == c) 
            freq++; 
        right++; 
    }
    while (left < len && (right - 1) < len) {
        while (s[left] != c && left < len) { 
            left++; 
            leftCount++; 
        }
        while (right < len && s[right] != c) { 
            if (s[right] == c) 
                freq++; 
            right++; 
            rightCount++; 
        }
        result = result + (leftCount + 1) * (rightCount + 1);
        freq = k - 1;  
        leftCount = 0; 
        rightCount = 0; 
  
        left++; 
        right++; 
    } 
    return result; 
}

void permute(string a, int l, int r){
    if (l == r)  
        cout<<a<<endl;  
    else{ 
        for (int i = l; i <= r; i++){
            swap(a[l], a[i]);
            permute(a, l+1, r);    
            swap(a[l], a[i]);  
        }  
    }  
}   

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        int f=0;
        int n,m;
        cin >> n;
        cin >> m;
        if(m==0){
            cout << "0" << endl;
        }
        else{
            char arr[n] = {0};
            for(int i=0;i<m;i++){
                arr[i] = '1';
            }
            
            unsigned long long int ans = C(n,m)+m;
            cout << ans << endl;
        }
    }
    return 0;
}