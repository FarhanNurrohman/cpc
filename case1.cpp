#include <iostream>
#include <string>

using namespace std;

string t1[4][4] = {{"AB", "DC", "CC", "CB"},{"CA", "DA", "CD", "DD"},{"BC", "AA", "BA", "DB"},{"BD", "AD", "BB", "AC"}};
string t2[4][4] = {{"CD", "BB", "AC", "CC"},{"CB", "BD", "AD", "DD"},{"DA", "DC", "BC", "BD"},{"AA", "BA", "CA", "AB"}};

int getIndex(char ch){
	if(ch == 'A'){
		return 0;
	}else if(ch == 'B'){
		return 1;
	}else if(ch == 'C'){
		return 2;
	}else if(ch == 'B'){
		return 3;
	}
}

string getCode(int i1, int i2){
	string c = t1[i1][i2];
	cout << c;
	i1 = getIndex(c[0]);
	i2 = getIndex(c[1]);
	cout << t2[i1][i2];
	return t2[i1][i2];
}


int main(){
	string s, r = "";
	cin >> s;
	cout << s.size();
	for(int i = 0; i < s.size(); i+=2){
		cout << t1[getIndex(s[i])][getIndex( s[i+1])];
		r += getCode(getIndex(s[i]),getIndex( s[i+1]));
	}
	
	cout << r;
	return 0;
}
