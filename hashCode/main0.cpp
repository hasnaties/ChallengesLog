//header-files
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <ctype.h>
#include <sstream>

bool is_number(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

//std::
using namespace std;


/* We'll be creating a
   linked list to store
   ingrediants and it's
   respective details
*/

struct Node{
	// data
	int usage;
	string ingrediant;
	Node *next;
	
};

//Head-node
Node* head=NULL;

//to insert-nodes
void insertNode(string new_data) {
   Node* new_node=new Node ;
   new_node->ingrediant = new_data;
   new_node->usage=0;
   new_node->next = head;
   head = new_node;
}

//to_Display Linked-list
void displayList() {
   Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->ingrediant <<" ";
      ptr = ptr->next;
   }
}

/*	Main-Function starts
  from here */
int main(){

	//Arrays to get-Data
	double a,teams[100];
	char c, ing[100];
	string ingr[100];
	
	// To read Input-File
	ifstream infile;
	infile.open("C:\\Users\\Jutt\\Desktop\\a_example");
	
	// reading first-line
	int count=0,temp=0;
	while(infile.eof()==0){
		
			infile >> ingr[temp];
			if(is_number(ingr[temp])){
			
				stringstream obj(ingr[temp]);
				int x;
				obj >> x;
				teams[count]=x;
				count++;
				ingr[temp]="";		
			}
			temp++;
		}
	
	
	// closing File
	infile.close();
	//check arrays
	cout<<"teams:"<<count<<endl;
	for(int i=0;i<=count-1;i++){
	if(i==4){
		cout<<endl;
	}
	cout<<teams[i]<<" ";
	}
	cout<<endl;
	cout<<"ingr:"<<temp<<endl;
	
	//adding Ingrediants to Linked-list
	for(int i=0;i<=temp;i++){
		if(ingr[i]==""){
			continue;
		}
			insertNode(ingr[i]);
	}

	displayList();
	/* Main-Function
	   ends here */
}
