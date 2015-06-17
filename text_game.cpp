#include <iostream>
#include <string>
using namespace std;

void endGame (void)
{
  cout << "GAME OVER\n";
}

int main() 
{
string userName;
//int choice1;
//int choice2;
//int choice3;
int event1;
int event2;
int event3;
int event4;
int event5;

cout << "What is your name, traveler?" << endl;
cin >> userName;

cout << "\nWelcome, " << userName << "." << endl;
cout << "I'm going to ask you a series of questions." << endl;
cout << "To cotinue your adventure, answer them by typing" << endl;
cout << "either 1, 2, or 3." << endl;

cout << "\nYou're walking down a long dirt road. You hear footsteps behind you," << endl;
cout << "but you're too afraid to look right now. A fork in the road lies infront of you." << endl;

cout << "\nWhat do you do?" << endl;
cout << "1 - Turn left, and run down the hill." << endl;
cout << "2 - Turn right, and run towards the abandoned house in the distance." << endl;
cout << "3 - Gain the courage to turn around and face whatever is behind you." << endl;
cin >> event1;
if(event1 == 1)
	{
	cout << "Unfortunatley, you trip over a branch, and fall to your death.\n" << endl;
	endGame();
	}
else if(event1 == 2)
	{
	cout << "You run towards the house, and escape the creature following you." << endl;
	}
else if(event1 == 3)
	{
	cout << "You turn around, but before you can make out the features of the creature behind you, it kills you.\n" << endl;
	endGame();
	}	

cout << "As you get closer to the house, you notice a light is on upstairs." << endl;
cout << "A small path leads to the back of the house.\n" << endl;
cout << "What do you do?" << endl;
cout << "1 - Knock on the door, and hope whoever is inside won't kill you." << endl;
cout << "2 - Enter the hoouse unanounced, and sneak upstairs." << endl;
cout << "3 - Follow the path to the back of the house." << endl;
cin >> event2;
if(event2 == 1)
	{
	cout << "A drunk, confused man answers the door, shotgun in hand." << endl;
	cout << "You raise your hands in defense, but before you can explain yourself, he shoots." << endl;
	endGame();
	}
else if(event2 == 2)
	{
	cout << "You slowly open the door, and quietly sneak upstairs." << endl;
	}
else if(event2 == 3)
	{
	cout << "You sneak around the house, and become face to face with a vicious gaurd dog." << endl;
	cout << "Before you can give it a Scooby-Snac, it bits your throat, and kills you." << endl;
	endGame();
	}
cout << "You see three doorways, one leads to a dimly lit room, the second to a brightly lit room, and the third to a pitch black room." << endl;
cout << "\nWhat do you do?" << endl;



















	return 0;
}

