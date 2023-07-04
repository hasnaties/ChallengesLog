#include <iostream>
using namespace std;
string arrayA [10];

// String in Array
void inArray(string str){
	int strL=str.length();
	
	for(int i=0;i<=strL-1;i++){
			arrayA[i]=str.at(i);
	}
}
// Display  Array
void DA(string array[], int size=10){
	for(int i=0;i<=size;i++){
		cout<<array[i]<<endl;
	}
}

//Main Fuction
int main(){


/*
int i=0;
char b=str2.at(i);
cout<<b; */
//inArray("Hasnat");
//DA(arrayA);

}
