#include <iostream>
#include <vector>
using namespace std;

int main(){

	vector<int> n;
	n.push_back(-3);
	n.push_back(00);
	n.push_back(77);
	cout<<n[0]<<endl;
	//output
	for (int i=0;i<n.size();i++){
		cout<<i<<": "<<n.at(i)<<endl;
	}
	return 0;
}
