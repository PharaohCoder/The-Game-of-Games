// MindGame.cpp : Defines the entry point for the console application.
//
#include<iostream>
#include<iomanip>
#include<string>
#include<ctime>


using namespace std;

void mathgame();												 //prototypes for games' functions
void PsychicGame();
void GuessingGame();
void TreasureGame();
void TicTacToe();

string academic(int);
string emotional(int);
string financial(int);

int main()
{
	string Name;
	int num;
	char game;

	cout << "Please enter your own borders of the menu:" << endl;				 //prompt user for border character
	cin >> game;
	cout << "Enter your name please:\n";											//ask foruser's name
	cin >> Name;

	while (1) //infinte loop to enable player to choose between games and exit only when chooses to
	{
		cout << "\n\n" << setw(58) << left << setfill(game) << game << endl;
		cout << game << "\t\tWelcome, " << Name << "!\t\t\t\t " << left << game << endl;
		cout << game << " Please choose a number from the following options  :\t " << game << endl;
		cout << game << "\t1. Play the Math game     " << "\t\t\t " << game << endl
			<< game << "\t2. play the psychic game   " << "\t\t\t " << game << endl
			<< game << "\t3. play the guessing game  " << "\t\t\t " << game << endl
			<< game << "\t4. play treasure game  " << "\t\t\t\t " << game << endl
			<< game << "\t5. play tic-tac-toe  " << "\t\t\t\t " << game << endl
			<< game << "\t6. Exit " << "\t\t\t\t\t " << game << endl
			<< game << setw(57) << left << setfill(game) << game << endl;

		cout << "\n\nWhich game will you play??\n\n ";						 //asking forgame's n
		cin >> num;
		if (num == 1)														 //first game
		{
			mathgame();
		}
		else if (num == 2)													 //second game

		{
			PsychicGame();
		}
		else if (num == 3)													 //third game 
		{
			GuessingGame();
		}
		else if (num == 4)													//fourth game
		{
			TreasureGame();
		}
		else if (num == 5)													//fifth game
		{
			cout << "Sorry the game is not ready yet" << endl;
		}
		else if (num == 6)													 //exit
		{
			break;
		}
	}
	return 0;
}
string academic(int a)														//function for academic predictions
{
	string b;
	switch (a)
	{
	case 1: b = "Straight A's this semester.";
		break;
	case 2: b = "Work Hard, good grades on finals expected.";
		break;
	case 3: b = "The smart kid next to you will not help you.";
		break;
	case 4: b = "You will fail one of your classes.";
		break;
	case 5: b = "All of your hard work will pay off.";
		break;
	}
	return b;
}
string emotional(int l)														//function for emotional predictions
{
	string z;
	switch (l)
	{
	case 1: z = "You will meet the love of your life in the near future.";
		break;
	case 2: z = "Someone you are close with you will drift apart from.";
		break;
	case 3: z = "You will lose a loved one within the next two years.";
		break;
	case 4: z = "The person you will marry is someone you already know.";
		break;
	case 5: z = "You have a secret lover..just look around";
		break;
	}
	return z;
}
string financial(int f)														 //function forfinancial predictions
{
	string w;
	switch (f)
	{
	case 1: w = "Money will not be a problem to you in the future";
		break;
	case 2: w = "You will struggle financially for quite some time, but everything will work out.";
		break;
	case 3: w = "You will have a problem finding your first job, but once you get it you will do fine.";
		break;
	case 4: w = "You will win lotto and live a comfortable life.";
		break;
	case 5: w = "Watch your spending";
		break;
	}
	return w;
}
void mathgame()
{
	int num, Num1, Num2, Num3, X1, X2, Sum;
	string Name;
	cout << endl << endl << "\tWelcome to mind reading game," <<
		Name
		<< '!' << "\n\n" << endl; //Step 1 Print message describing the game
	cout << "I am a mind reader, I can predict \n the sum of random numbers that you choose" << "\n"
		<< " Here is the game , We are going to choose 5 numbers \n each of them is five digits"
		<< " and as soon as you give me the first number\n I will be able to tell you the sum of all 5 numbers\n\n\n"
		<< "You don't belive me , Do you ??\n\n "
		<< " Ok, Lets start....\n\n"
		<< "What is your first five digit number ??"; // Step 2 Ask user for first number
	cin >> Num1;
	Sum = Num1 + 200000 - 2; // Step 3 Compute and print final sum
	cout << "\n\nThe sum of all five numbers is: ~~~~~" << Sum
		<< "~~~~~" << endl;
	cout << "\n\n\nWhat is your second five digit number ??";
	// Step 4 Ask for second number
	cin >> Num2;
	X1 = 99999 - Num2;													// Step 5 Compute and print next number
	cout << "\n\nI will choose: " << X1 << endl;
	cout << "\nWhat is your third five digit number ??";				// Step 6 Ask for third number
	cin >> Num3;

	X2 = 99999 - Num3;													// Step 7 Compute and print next number
	cout << "\n\nI will choose: " << X2 << endl;
	cout << "\n\nNow check the sum that i gave ... Am i correct? !!"	// Step 8 Print final message
		<< "\n I know !!!! I told you i am a mind reader....." << endl;
}
void PsychicGame()
{
	cout
		<< "@#%$#^%(*#(&%($#*(%^&$#(*@(&$*^&$@#(*(@%$%$^&)%*(&&&&&&&&&&&&$$#^%$^*(@#$)@#%&#" << endl
		<< "#@(%&$#)^*_$+@#($_^+%&*()%^(_+%&(^)%*^_+#$(%^@$+_*$@+_$^(+_!#+$)#@%*#(+#$^*%_%$" << endl
		<< "#(_@%(^_$*#)@!)_$&#@#)%*!+%&*)^*_$!#(%$!(#@$)*!#______^*%(*_$@#()#)*@(!()%&$#(" << endl
		<< "\n\nAn error occured while Fady was writing this program and I control this program now.\nI'm The Great Genie"
		<< " I am a good Genie and I will help tell you about your future.\n\n";

	while (true)
	{
		cout << " \nbut first tell me your lucky number ? ? \n";
		int Luckyno;
		cin >> Luckyno;
		cout << "\n\n\nEnter A for information about your academic future." << endl
			//will give academic future predictions
			<< "Enter L for information about your emotinal future." << endl
			//will give emotional future predictions
			<< "Enter F for information about your financial future." << endl;
		//will give financial future predictions
		int RndNum;															 //declaring needed variables
		char fundecide, decision;
		//prompting the user for lucky number to seed the random number generator

		srand(Luckyno);									//entering number so genie can give predictions
		
		//seeing if user wants more predictions
		cin >> fundecide;
		RndNum = rand() % 5 + 1;
		//random number generator
		if (fundecide == 'A' || fundecide == 'a')
		{
			cout << endl << endl << academic(RndNum);
			cout << endl << endl << "Press n to exit or any key to make another prediction" << endl;
			cin >> decision;

			if (decision == 'n' || decision == 'N')
				break;
		}
		else if (fundecide == 'L' || fundecide == 'l')
		{
			cout << endl << endl << emotional(RndNum);
			cout << endl << endl << "Press n to exit or any key to make another prediction" << endl;
			cin >> decision;						//seeing if user wants more predictions
			if (decision == 'n' || decision == 'N')
				break;
		}
		else if (fundecide == 'F' || fundecide == 'f')
		{
			cout << endl << endl << financial(RndNum);
			cout << endl << endl << "Press n to exit or any key to make another prediction" << endl;
			cin >> decision;							//seeing if user wants more predictions
			if (decision == 'n' || decision == 'N')
				break;
		}
		else {
			cout << "I didn't get that, say it again";
			cin >> decision;
			if (decision == 'n' || decision == 'N')
				break;
		}
	}
}
void GuessingGame()
{
	cout << "This is a guessing game! - you can tell from the name DUAH!!-\n"
		<< "Your mission is to guess a random numberbetween 1 and 3 in just 3 guesses,\n Good Luck!!";
	int guessNum;															//number that user guesses
	int i, number;															//loop variable
	bool guessRight = false;
	i = 0;
	srand(time(0));
	number = rand() % 3 + 1;
	guessRight = false;

	for (i = 0; i < 3 && guessRight == false; i++)
	{
		cout << "Enter guess #" << i + 1 << ':';
		cin >> guessNum;
		if (guessNum == number)
			guessRight = true;
	}
	if (guessRight)
	{
		cout << "Great! " << "you got it in "
			<< i << " guesse(s).";
		cout << "The number is: " << number << endl;
	}
	if (!guessRight) cout << "You used up your 3 chances!" << endl;
}

void TreasureGame()
{
	int x = 30, y = 30;								// Explorer’s coordinates
	int i = 0, xt, yt;								// Treasure’s coordinates
	char dir;
	double distance;
	srand(time(0));							  		// secretly seed the rand function !
	xt = rand() % 30 + 1;							 // x1 is randomly set to a number between 1 and 30
	yt = rand() % 30 + 1;							// y1 is randomly set to a number between 1 and 30
	distance = sqrt(static_cast<double>((x-xt)*(x-xt)+(y-yt)*(y-yt)));
	cout << "There is a treasure hidden on a cartesian map!\n Hint: The Treasure is between (0,0) and (20,20).\n"
		<< " at every guess I will give you a hint where to go next.\n\tTry to excavate for it !!\n\t Good Luck!!\n";
	while (distance != 0)							//write loop to find the treasure
	{

		cout << x << " " << y<<endl;						 //used to check while programming
		cout << "Where to go to find the treasure ??" << endl
			<< "\tNorth,South,East or West ??";
		cin >> dir;									//assign user entry to variable
		
			switch (dir)								//switch statement for different entries
			{

			case 'n':
			case 'N':
				y += 1;
					break;

			case 'S':
			case 's':
				y -= 1;
					break;

			case 'e':
			case 'E':
				x += 1;
					break;

			case 'w':
			case 'W':
				x -= 1;
					break;
			}
			distance =sqrt(static_cast<double>((x - xt)*(x - xt) + (y - yt)*(y - yt)));
		//compute distance between guess and treasure
		i++;
		//incrementing variable to count how many moves the user makes
		cout << distance << endl;
		//printing a hint the distance between the guess and the treasure
	if (distance>8)
			//the comment on the distance
			cout << "You are too far from the treasure" << endl;
		else if (distance>4 && distance <= 8)
			cout << "You are far from the treasure" << endl;

		else if (distance <= 4 && distance >0)
			cout << "You are getting closer to the treasure" << endl;
		else if (distance == 0)
		{
			cout << "Congratulations!! You found the treasure" << endl;
			break;
		}
		cout << "Your current location is:(" << x << ','<< y << ")." << endl;	//printing the current location
	}
	cout << "It took you " << i;								//number of trials till finding treasure
	if (i == 1)
		cout << " move to find the treasure ! you did a great Job." << endl;
	else
		cout << " moves to find the treasure ! good job" << endl;
	cout << "The treasure was at (" << xt << "," << yt << ") Job WELL DONE!";
	
}
void TicTacToe()
{
	cout << "Sorry the game is not ready yet" << endl;
}