#include <iostream>
using namespace std;
bool checkPalindrome(std::string inputString) {
int i;
      int length = inputString.length();

      for (i = 0; i < length; ++i)
            if ( inputString.at(i) != inputString.at(length - i - 1)) return false;

      return true;


}
int main(){
string a;
cout<<"Enter the String to check:";
cin>>a;
cout<<endl;
if (checkPalindrome(a)){
cout<<"True";
}
else
cout<<"False";
}

