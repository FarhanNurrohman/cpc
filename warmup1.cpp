#include <iostream>

using namespace std;
int main(){
	int p1,p2,b1,b2;
	cin >> p1 >> p2;
	cin >> b1 >> b2;
	int r1 = p1*b2;
	int r2 = p2*b1;
	
	if(r1 > r2){
		cout << "lebih besar";
	}else if(r1 < r2){
		cout << "lebih kecil";
	}else{
		cout << "sama";
	}
	return 0;
}
