#include<iostream>

int main(){
	int t;
	std::cin >>t;
	for(int i=0;i<t;i++){
		int a;
		std::cin >>a;
		if(a%10 == 0)
			std::cout <<"0" <<std::endl;
		else if(a%5 == 0)
			std::cout <<"1" <<std::endl;
		else
			std::cout <<"-1" <<std::endl;
	}
}
