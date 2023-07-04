#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class bookType
{
private:
	string _title;
	string _authors[4];
	string _publisher;
	string _ISBN;
	double _price;
	int _numOfcopies;
	int _numOfAuthor;
	string _year;
public:
	bookType();
	~bookType();
	void set_title(string title);
	string get_title();
	int compare_titles(string title);
	void list_authors();
	void set_numOfcopies(int num);
	int get_numOfcopies();
	void updateNumOfcopies(int num);
	//void show_numOfcopies();
	void set_publisher(string pub);
	string get_publisher();
//	void show_publisher();
	void set_ISBN(string isbn);
	string get_ISBN();
	//void show_ISBN();
	void set_price(double price);
	double get_price();
	//void show_price();
	void add_author(string author);
	string get_authors(int num);
	//void show_authors();
	void set_year(string year);
	string get_year();
	//void show_year();
	void clear_authors();
	void set_numOfAuthors(int num);
	int get_numOfAuthors();

	

	
};

bookType::bookType(){
	_title = "";
	_authors[0] = "";
	_authors[1] = "";
	_authors[2] = "";
	_authors[3] = "";
	_publisher = "";
	_price = 0;
	_ISBN = "";
	_numOfAuthor = 0;
	_numOfcopies = 0;
	_year = "";
}
bookType::~bookType()
{
	_title = "";
	_authors[0] = "";
	_authors[1] = "";
	_authors[2] = "";
	_authors[3] = "";
	_publisher = "";
	_price = 0;
	_ISBN = "";
	_numOfAuthor = 0;
	_numOfcopies = 0;
	_year = "";
}

void bookType::set_title(string title){
	_title = title;
}
string bookType::get_title(){
	return _title;
}
void bookType::clear_authors(){
	_numOfAuthor = 0;
}
void bookType::set_publisher(string pub){
	_publisher = pub;
}
string bookType::get_publisher(){
	return _publisher;
}

void bookType::add_author(string author)
{
	
		_authors[_numOfAuthor] = author;
		
	
}
void bookType::set_numOfAuthors(int num)
{
	_numOfAuthor = num;
}
int bookType:: get_numOfAuthors()
{
	return _numOfAuthor;
}
void bookType::list_authors()
{
	int i = 0;
	cout << "Authors are" << endl;
	for (int i = 0; i < 4; i++)
		if (_authors[i] != "")
		{
			cout << _authors[i] << endl;
		}
	

}
void bookType::set_numOfcopies(int num)
{
	_numOfcopies = num;
}
void bookType::updateNumOfcopies(int num)
{
	_numOfcopies = _numOfcopies + num;
}
int bookType::get_numOfcopies()
{
	return _numOfcopies;
}

void bookType::set_ISBN(string isbn)
{
	_ISBN = isbn;
}
string bookType::get_ISBN()
{
	return _ISBN;
}
void bookType::set_price(double price)
{
	_price = price;
}
double bookType::get_price()
{
	return _price;
}
void bookType::set_year(string year)
{
	_year = year;
}
string bookType::get_year()
{
	return _year;
}
int bookType::compare_titles(string title)//check this
{
	int i = (title == _title);
	return i;

}
