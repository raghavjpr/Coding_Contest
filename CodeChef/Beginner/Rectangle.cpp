#include<iostream>

int main(){
	int t;
	std::cin >>t;
	for(int i=0;i<t;i++){
		int a,b,c,d;
		std::cin >>a >>b >>c >>d;
		if((a^b^c^d) == 0)
			std::cout <<"YES" <<std::endl;
		else
			std::cout <<"NO" <<std::endl;
	}
}
