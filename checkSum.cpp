#include <iostream>
#include <vector>
//global array

 std::vector <int> array;

bool checkSum(int num);

int main(){
	array.push_back(1);
	array.push_back(2);
	array.push_back(3);
	
	std::cout<<array.size()<<std::endl;
	if(checkSum(6)==true){
		std::cout<<"exits";
	}
	else{
		std::cout<<"not exits";
	}
	
}

bool checkSum(int num){
	int num1;
	for(int i=0;i<array.size();i++){
	num1=array[i];
	int j=0;
		while(j<array.size()){
			if(num1+array[j]==num && i!=j){
				return true;
				break;
			}
			else 
				j++;
			
		}
	}
}
