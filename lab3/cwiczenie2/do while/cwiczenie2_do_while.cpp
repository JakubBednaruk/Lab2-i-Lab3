#include <iostream>
using namespace std;

int main(){
	int i = 0;
	do{
		if(i % 2 == 0){
			cout << i << endl;
			i++;
		}else{
			i++;
		}
	}while(i <= 20);

}
