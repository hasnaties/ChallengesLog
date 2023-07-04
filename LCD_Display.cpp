#include<iostream>
using namespace std;

// extract digits
void extractDigits(int num)
{
    int i,dig;
    while(num>0)
    {
        dig = num%10;
      cout<<"Digit: "<<dig<<"\n";
        num = num/10;
    }
    
}
//  Cloumn size defining
int fSize_C(int n){
	return n+2;
}

// Row size defining
int fSize_R(int n){
	return 2*n+3;
}
// vertical sign
void v_Sign(){
	cout<<"--";
}
// Horizental sign
void h_Sign(){
	cout<<"|";
}

// Vertical Space
void v_Space(){
	cout<<" ";
}

// No.1
void num1(){
	h_Sign();
	h_Sign();
}
// No.2
void num2(){
	v_Sign();
	cout<<endl<<"  ";
	h_Sign();
	cout<<endl;
	v_Sign();
	cout<<endl;
	h_Sign();
	cout<<endl<<" ";
	v_Sign();
	
}
// Main Function

int main(){
	num2();

/*	int num;
	cin>>num;
	extractDigits(num); */
	
}
