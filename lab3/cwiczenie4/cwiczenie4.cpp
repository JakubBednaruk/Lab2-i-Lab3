#include <iostream>
using namespace std;

int main(){
	float bigNumber = 100;
		while( bigNumber >= 0.00004){
			cout << fixed << bigNumber << endl;
			bigNumber = bigNumber / 2;
		}

}
