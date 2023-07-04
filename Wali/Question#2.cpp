#include<iostream>
using namespace std;
class bank{
  string name;
  int account;
  string typeaccount;
  float balance;
  public:
    bank()
    {
      name=typeaccount;
      account=0;
      balance=0;
    }
    void data();
    void Deposit(int amount);
    void Withdraw(int amount);
      void display();
};
void bank::data(){
  cout<<"Enter depositor name:";
  getline(cin,name);
  cout<<"Enter account number:";
  cin>>account;
  cout<<"Enter Balance:";
  cin>>balance;
  cin.ignore();
  cout<<"Enter type of account e.g current accout other:";
  getline(cin,typeaccount);
  
}
void bank::Deposit(int amount){
  balance+=amount;
}
void bank::Withdraw(int amount){
  if(balance<amount){
    cout<<"Balance not sufficient plz input correct amount";
  }
  else
  {
    balance-=amount;
   }
}
void bank::display()
{
  cout<<"Name of depositor:"<<name<<"\nCurrent Balance:"<<balance;
}
int main()
{
  int a;
  int c;
  bank b;
  b.data();
  cout<<"Enter deposit amount:";
  cin>>a;
    b.Deposit(a);
    cout<<"Enter amount of Cash to Withdraw:";
    cin>>c;
    b.Withdraw(c);
    b.display();
    return 0;
}
