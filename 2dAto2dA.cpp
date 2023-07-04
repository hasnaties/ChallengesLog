#include <iostream>
using namespace std;

/* Class to handle
 temp. variables */
 
 class temps{
 // variables
 
	int tempArr[3][3];
 public:
void storeArr(int arr[][3]){
 	for (int i=0;i<3;i++){
 		for(int j=0;j<3;j++){
 			tempArr[i][j]=arr[i][j];
		 }
	 }
 }
 
// display func.
	void displayArr(){
		for (int i=0;i<3;i++){
 		for(int j=0;j<3;j++){
 			cout<<"Array["<<i<<"]["<<j<<"]"<<": "<<tempArr[i][j]<<endl;
		 }
	 }
	}
 };

int main(){
	int array[3][3]={
	{1,2,3},{4,5,6},{7,8,9}
	};
	
	//object
	temps temp;
	temp.storeArr(array);
	temp.displayArr();
return 0;
}
