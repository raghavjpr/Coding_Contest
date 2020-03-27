#include <bits/stdc++.h>

using namespace std;

int circle(int x1, int y1, int x2,  
           int y2, int r1, int r2) 
{ 
    long long int distSq = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2); 
    long long int radSumSq = (r1 + r2) * (r1 + r2); 
    if (distSq <= radSumSq) 
        return 1;
	if(distSq > radSumSq)
		return 0;
}

void CIRCLES(int x,vector<int>a,vector<int>final){
	vector<int>::iterator i;
	for(i=a.begin();i<a.end();i++){
		int q1=0,q3=x,cc=0;
		while(circle(q1,0,q3,0,*i,*i) != 1){
			cc = cc + 1;
			q1 = q1 + *i;
			q3 = q3 - *i;
		}
		cc = cc + 1;
		final.push_back(cc*2);
	}
	sort(final.begin(),final.end());
	cout << final[0] << endl;
}

int main(void){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
		int n,x,count=0,f=1;
		cin >> n >> x;
		vector <int> a;
		vector<int> final;
		for(int i=0;i<n;i++){
			int temp;
			cin >> temp;
			if(x%temp == 0)
				final.push_back(x/temp);
			else
				a.push_back(temp);
		}
		CIRCLES(x,a,final);
	}
	return 0;
}