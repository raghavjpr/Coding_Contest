#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
		int x,y,a,b;
	    cin >> x >> y >> a >> b;
		int f=0;
		count = (y-x)/(a+b);
		if(count == (int)count)
			f=1;
		if(f==1)
		    cout << count << endl;
	    else
		    cout << "-1" << endl;
    }
    return 0;
}