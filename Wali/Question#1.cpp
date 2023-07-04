#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{
public:
    Player(string name, int average, string team);
    virtual ~Player();
    
    // Inputs
    void InptName();
    void InptAvg();
    void InptTeam();
private:
    string m_Name;
    int m_Average;
    string m_Team;
    
    vector<int> numbers; // The numbers in the vector are averaged to create an actual average
};

Player::Player(string name, int average, string team):
    m_Name(name),
    m_Average(average),
    m_Team(team)
{}

Player::~Player()
{
    /*
        I didn't add any code in the destructor because I didn't find it nessecary.
        You can delete the destructor and use the default one, or add your own code.
    */
}

void Player::InptName()
{
    string newName;
    
    cout << "Enter a new name for your player. ";
    cin >> newName;
    
    m_Name = newName;
    
    cout << "\n\nYour player's new name is: " << m_Name;
}

void Player::InptAvg()
{
    int number;
    
    cout << "Enter a number. ";
    cin >> number;
    
    numbers.push_back(number);
    
    double total;
    
    for (unsigned int i = 0; i < numbers.size(); i++)
    {
        total = (total + numbers[i]);
    }
    
    m_Average = (total / (numbers.size()));
    
    cout << "\n\n" << m_Name << "'s average is: " << m_Average;
}

void Player::InptTeam()
{
    int newTeamName;
    
    cout << "Enter a new name for your player's team. ";
    cin >> newTeamName;
    
    m_Team = newTeamName;
    
    cout << "\n\n" << m_Name << "'s new team name is: " << m_Team;
}

int main()
{
  
}
