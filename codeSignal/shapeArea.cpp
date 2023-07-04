#include<iostream>
using namespace std;
//function
int shapeArea(int n) {
    int result=1;
    if(n==1){
        return 1;
    }
    else if (n>1) {
        int mult=1;
    	int temp;
        while (n>1) {
        int temp=mult*4;
        result=result+temp;
        --n;
        mult++;
        }
        return result;
    }
    
}

int main(){
	cout<<shapeArea(4);
}
