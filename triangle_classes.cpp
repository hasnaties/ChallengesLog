#include <iostream>
using namespace std;
// class single*
class fDot{
	public:
	string f;
	fDot(){
		f="*";
	}
};
class otherDots: private fDot{
public:
	void triangle(){
		cout<<this->f<<endl;
		for (int i=1;i<=4;i++){
			for(int j=0;j<=i;j++){
				cout<<"*";
			}
			cout<<endl;
		}
	}
};

int main(){
	otherDots oD;
	oD.triangle();
}
