#include "bookType.h"
#include <fstream>


int main()
{
	bookType books[5];
	ifstream theFile("books.dat");
	string line;
	string line2;
	double number;
	for (int i = 0; i < 5; i++)
	{

	getline(theFile, line);
	books[i].set_title(line);
	getline(theFile, line);
	books[i].set_ISBN(line);
	getline(theFile, line);
	books[i].set_publisher(line);
	getline(theFile, line);
	books[i].set_year(line);
	theFile >> number;
	theFile.ignore(numeric_limits<streamsize>::max(), '\n');
	books[i].set_price(number);
	theFile >> number;
	theFile.ignore(numeric_limits<streamsize>::max(), '\n');
	books[i].set_numOfcopies(number);
	theFile >> number;
	theFile.ignore(numeric_limits<streamsize>::max(), '\n');
	books[i].set_numOfAuthors(number);
	//theFile >> line;
	//books[i].add_author(line);
	
	}
	
	for (int i = 0; i < 5; i++)
	{
		cout << books[i].get_title();
		cout << endl;
		cout << books[i].get_ISBN();
		cout << endl;
		cout << books[i].get_publisher();
		cout << endl;
		cout << books[i].get_year();
		cout << endl;
		cout << books[i].get_price();
		cout << endl;
		cout << books[i].get_numOfcopies();
		cout << endl;
		cout << books[i].get_numOfAuthors();
		cout << endl;
		//books[i].list_authors();
	}
	
	//a[2].list_authors();
	cout << endl;
	//a[0].get_authors(1);
	std::cin.get();
	return 0;

}
