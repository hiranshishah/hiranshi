#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int SIZE = 50;
int TotalPoints(int *, int);

struct Players
{
       char name[SIZE];        
       int playNum;            
       int Points;          
};


int main()
{
    const int NUM_PLAYERS = 12; 
	// Dynamically allocate the memory needed.
    Players *players = new Players[NUM_PLAYERS];      
    int index;                
    // Get Player data.
    cout << "\nYou will need the following information.\n";
	cout << "Pertaining to your Soccer Players.\n";
    cout << "The Player's Names, Player's Numbers\n";
	cout << "Finally you will need the Points Scored by Players.\n\n\n";
    for (index = 0; index < NUM_PLAYERS; index++)
    {
        cout << "Please enter the Player's Name: ";
		cin.getline( players[index].name, 50 );
        cout << "Please enter the Player's Number: ";
        ( cin >> players[index].playNum ).get();

		
		while (players[index].playNum <=0)
		{
			cout << "Zero or negative numbers not allowed\n";
			cout << "Please enter the Player's Number: ";
			(cin >> players[index].playNum).get();

		}
        cout << "Please enter the Points Scored by the Player: ";
        ( cin >> players[index].Points ).get();

		
		{
			cout << "Zero or negative numbers not allowed\n";
			cout << "Please enter the Points Scored by the Player: ";
			(cin >> players[index].Points).get();
		}
		cout << endl << endl;

    } 

	
	cout << "Here is the players data:\n\n";
	cout << "    Name    Number    Score	\n";
	cout << "--------------------------------\n";

	for (index = 0; index < NUM_PLAYERS; index++)
	{
		cout << setw(8) << players[index].name;
		cout << setw(8) << players[index].playNum;
		cout << setw(8) << players[index].Points << endl;
	}


	
	cout << "The total points scored by the team is: ";
	cout << TotalPoints(Points, NUM_PLAYERS) << endl;

	delete [] players;

    return 0;

}



int TotalPoints(int (players[index].(*Points)), int NUM_PLAYERS)
{
	int Total = 0.0;

	for (int players[index].Points; players[index].Points < NUM_PLAYERS; index++)
	{
		sum += (players[index].(*Points));
		Points++;
	}
	return Total;
}
