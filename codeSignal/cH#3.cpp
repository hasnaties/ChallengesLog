#include <iostream>
#include <vector>
using namespace std;
// challenge's code
int adjacentElementsProduct(vector<int> inputArray) {
	// variables to return
		int product=inputArray.at(0)*inputArray[1];
	for (int i=1;i<inputArray.size()-1;i++){
		int productTemp=inputArray.at(i)*inputArray[i+1];
		if(product<productTemp){
			product=productTemp;
		}

	}

	return product;

}

int main()
{
	vector<int> arr;
	
	arr.push_back(3);
	arr.push_back(6);
	arr.push_back(-2);
	
	arr.push_back(-5);
	arr.push_back(7);
	arr.push_back(7);
	
	cout<<adjacentElementsProduct(arr);

}
