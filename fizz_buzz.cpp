#include <iostream>
using namespace std;

// universal_function
void fizz_buzz(int f, int l){
for (int i=f-1;i<=l;i++){
		if(i%2==0 and i%5==0){
			cout<<"FizzBuzz for "<<i<<endl;
		}
		else if (i%2==0){
		cout<<"Fizz for "<<i<<endl;
		}
		else if (i%5==0){
		cout<<"Buzz for "<<i<<endl;
		}
		else
		cout<<i<<endl;
	}
}

int main(){
	fizz_buzz(1,100);
}
