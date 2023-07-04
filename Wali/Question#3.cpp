include <iostream>
using namespace std;

class romanType{
public:
	void roman();
	int convert();
	void print();
	void get();

private:
	int M, D, C, L, X, V, I;
	char romanNumeral;
};
void romanType::roman(){
	M = 1000;
	D = 500;
	C = 100;
	L = 50;
	X = 10;
	V = 5;
	I = 1;
}
int romanType::convert(){
	if (romanNumeral = M){
		cout << 1000;
	}else if(romanNumeral = D){
		cout << 500;
	}else if(romanNumeral = C){
		cout << 100;
	}else if(romanNumeral = L){
		cout << 50;
	}else if(romanNumeral = X){
		cout << 10;
	}else if(romanNumeral = V){
		cout << 5;
	}else if(romanNumeral = I){
		cout << 1;
	}
	return romanNumeral;
}
void romanType::print(){
	cout << romanNumeral << endl;
}
void romanType::get(){
}
int main(){
	char romanNumeral;
	cout << "Welcome to the Roman numeral to decimal converter!\nPlease enter a number in Roman numerals to be converted: ";
	cin >> romanNumeral;

	//print();
return 0;
}

<div class="open_grepper_editor" title="Edit & Save To Grepper"></div>

