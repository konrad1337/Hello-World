// Hello World.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include <ctime>


using namespace std;


/*
int main()
{
	std::cout << "Hello world!" << std::endl;
	return 0;
}


int main()
{
	int x = 4;
	std::cout << "x is equal to: " << x;
	return 0;
}



#include <iostream>

int main()
{
	std::cout << "Hi!" << std::endl;
	std::cout << "My name is Alex." << std::endl;
	return 0;
}


int main()
{
	std::cout << "Enter a number: "; // ask user for a number
	int x = 0;
	std::cin >> x; // read number from console and store it in x
	std::cout << "You entered the Number : " << x << std::endl;
	return 0;
}






int doubleNumber(int x)
{
	return 2 * x;
}


int main()
{

	std::cout << "enter a number : ";
	int x = 0;
    std::cin >> x;

	 std::cout << doubleNumber (x) << std::endl;

}


#include "header1.h"

int main()
{
	using namespace std;
	cout << "The sum of 3 and 4 is: " << add(3, 4) << endl;
	return 0;
}








// MEINE MISSGEBURT !!!!!!!!
{

	int x;
	std::cout << "Enter your Number 1 : ";
	std::cin >> x;

	return x;

}



int readnumbery()
{

	int y;
	std::cout << "Enter your Number 2 : ";
	std::cin >> y;

	return y;

}



int writeanswer(int z)
{

	std::cout << z << std::endl;

	return 0;
}




int main()
{
	std::cout << readnumberx << std::endl;
	std::cout << readnumbery << std::endl;


	int x = 0;
	int y = 0;

	int z = readnumberx() + readnumbery();

	writeanswer(z);


	return 0;
}







int readnumberx ()
{
	int x;
	std::cout << "Enter your Number 1 : ";
	std::cin >> x;

	return x;
}



int readnumbery ()
{
	int y;
	std::cout << "Enter your Number 2 : ";
	std::cin >> y;
	return y;
}



int writeanswer(int z)
{
	std::cout << z << std::endl;
	return 0;
}



#include "Hurensohnheader2.h"



int main()
{

	int z = readnumberx () + readnumbery ();

	writeanswer(z);


	return 0;

}




int main()
{
	using namespace std;
	cout << "bool:\t\t" << sizeof(bool) << " bytes" << endl;
	cout << "char:\t\t" << sizeof(char) << " bytes" << endl;
	cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << endl;
	cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << endl; // C++11, may not be supported by your compiler
	cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << endl; // C++11, may not be supported by your compiler
	cout << "short:\t\t" << sizeof(short) << " bytes" << endl;
	cout << "int:\t\t" << sizeof(int) << " bytes" << endl;
	cout << "long:\t\t" << sizeof(long) << " bytes" << endl;
	cout << "long long:\t" << sizeof(long long) << " bytes" << endl; // C++11, may not be supported by your compiler
	cout << "float:\t\t" << sizeof(float) << " bytes" << endl;
	cout << "double:\t\t" << sizeof(double) << " bytes" << endl;
	cout << "long double:\t" << sizeof(long double) << " bytes" << endl;
	return 0;
}



#include <iostream>
int main()
{
	using namespace std;
	float f;
	f = 9.87654321f;
	cout << f << endl;
	f = 987.654321f;
	cout << f << endl;
	f = 987654.321f;
	cout << f << endl;
	f = 9876543.21f;
	cout << f << endl;
	f = 0.0000987654321f;
	cout << f << endl;
	return 0;
}




void check(int x)
{
	
	bool Hurensohnzahl = false;

	if (x == 2)
		Hurensohnzahl = true;
	if (x == 3)
		Hurensohnzahl = true;
	if (x == 5)
		Hurensohnzahl = true;
	if (x == 7)
		Hurensohnzahl = true;

	if (Hurensohnzahl)
		std::cout << "PRIMZAHL : " << std::endl;
	else 
		std::cout << "KEINE SCHEISBASTRDWIXXZAHLMONGO : " << std::endl;
}


int main()
{

	std::cout << "Gib Zahl : " << std::endl;
	int x;
	std::cin >> x;

	check(x);

	return 0;
}

*/



/*
int special()
{
	char z();
	std::cout << "Enter +, -, *, or / : *" << std::endl;
	std::cin >> z;

	return z;
}






// MEINE SCHEISE !!!!


#include "Hurensohnheader2.h"

int main()
{

	double x = numberone ();
	int    z = special();
	double y = numbertwo ();
	
		if (z == 43)
			std::cout << "DIE ANTWORT -> : " << x + y << std::endl;
		if (z == 42)
			std::cout << "DIE ANTWORT -> : " << x * y << std::endl;
		if (z == 45)
			std::cout << "DIE ANTWORT -> : " << x - y << std::endl;
		if (z == 47)
			std::cout << "DIE ANTWORT -> : " << x / y << std::endl;

	return 0;
}





double getDouble()
{
	std::cout << "Enter a double value: ";
	double x;
	std::cin >> x;
	return x;
}

char getOperator()
{
	std::cout << "Enter one of the following: +, -, *, or / ";
	char op;
	std::cin >> op;
	return op;
}

void printResult(double x, char op, double y)
{
	if (op == '+')
		std::cout << x << " + " << y << " is " << x + y << '\n';
	else if (op == '-')
		std::cout << x << " - " << y << " is " << x - y << '\n';
	else if (op == '*')
		std::cout << x << " * " << y << " is " << x * y << '\n';
	else if (op == '/')
		std::cout << x << " / " << y << " is " << x / y << '\n';
}

int main()
{
	double x = getDouble();
	double y = getDouble();

	char op = getOperator();

	printResult(x, op, y);

	return 0;
}






#include "constants.h"

int main()
{
	double x;
	std::cout << "ENTER THE BUILDING HEIGHT : ";
	std::cin >> x;


	double y = constants::gravity * 0 *0 / 2;
	if (x - y < 0.0)
		std::cout << "0.0 You hit the Ground" << std::endl;
	else
	std::cout << y - x << std::endl;
	

	y = constants::gravity * 1 * 1 / 2;
	if (x - y < 0.0)
		std::cout << "0.0 You hit the Ground" << std::endl;
	else
	std::cout << y - x << std::endl;



	y = constants::gravity * 2 * 2 / 2;
	if (x - y < 0.0)
		std::cout << "0.0 You hit the Ground" << std::endl;
	else
	std::cout << y - x << std::endl;



	y = constants::gravity * 3 * 3 / 2;
	if (x - y < 0.0)
		std::cout << "0.0 You hit the Ground" << std::endl;
	else
	std::cout << y - x << std::endl;



	y = constants::gravity * 4 * 4 / 2;
	if (x - y < 0.0)
		std::cout << "0.0 You hit the Ground" << std::endl;
	else
	std::cout << y - x << std::endl;



	y = constants::gravity * 5 * 5/ 2;
	if (x - y < 0.0)
		std::cout << "0.0 You hit the Ground" << std::endl;
	else
	std::cout << y - x << std::endl;



	y = constants::gravity * 6 * 6 / 2;
	if (x - y < 0.0)
		std::cout << "0.0 You hit the Ground" << std::endl;
	else
	std::cout << y - x << std::endl;



	y = constants::gravity * 7 * 7 / 2;
	if (x - y < 0.0)
		std::cout << "0.0 You hit the Ground" << std::endl;
	else
	std::cout << y - x << std::endl;

	return 0;

}




#include <iostream>
#include "constants.h"

double calculateHeight(double initialHeight, int seconds)
{
	double distanceFallen = constants::gravity * seconds * seconds / 2;
	double heightNow = initialHeight - distanceFallen;

	// Check whether we've gone under the ground
	// If so, set the height to ground-level
	if (heightNow < 0.0)
		return 0.0;
	else
		return heightNow;
}

void calculateAndPrintHeight(double initialHeight, int time)
{
	std::cout << "At " << time << " seconds, the ball is at height: " << calculateHeight(initialHeight, time) << "\n";
}
int main()
{
	std::cout << "Enter the initial height of the tower in meters: ";
	double initialHeight;
	std::cin >> initialHeight;

	calculateAndPrintHeight(initialHeight, 0);
	calculateAndPrintHeight(initialHeight, 1);
	calculateAndPrintHeight(initialHeight, 2);
	calculateAndPrintHeight(initialHeight, 3);
	calculateAndPrintHeight(initialHeight, 4);
	calculateAndPrintHeight(initialHeight, 5);

	return 0;
}




int main()
{
std::cout << 5 % 3 << std::endl;

	return 0;
}



#include <cmath> // needed for pow()
#include <iostream>

int main()
{
	std::cout << "Enter the base: ";
	double base;
	std::cin >> base;

	std::cout << "Enter the exponent: ";
	double exp;
	std::cin >> exp;

	std::cout << base << "^" << exp << " = " << pow(base, exp) << "\n";

	return 0;
}




bool iseven(int x)
{
	if (x % 2 == 0)
		return true;
	else
		return 0;
}


int main()
{
	
	std::cout << "Enter a Value : ";
	int x;
	std::cin >> x;

	bool a = iseven(x);

	if (a == true)
		std::cout << " Is grade ! " << std::endl;
	else
		std::cout << " Is ungrade !! " << std::endl;
	

	return 0;
}



1)
0100 1101 <-
1 4 8 64
= 77

2)
0
93 1
46 0
23 1
11 1
5  1
2  0
1  1
= 0101 1101

3)
1010 0010 + 1
1010 0011

4)
1010 0010 <-
2 32 128
= 162

5)
1010 0010

1010 0001 - 1
0101 1110 <-

2 4 8 16 64
= 94
= -94



bool check1(int x)
{
	if (x >= 128)	
	return true;


}


int main()
{
	std::cout << "Give number from 0 to 256 : ";
	int x;
	std::cin >> x;

	if (check1(x) == true)
		

		std::cout << x;


}


// x is our number to test
// pow is a power of 2 (e.g. 128, 64, 32, etc...)
int printandDecrementBit(int x, int pow)
{
	// Test whether our x is greater than some power of 2 and print the bit
	if (x >= pow)
		std::cout << "1";
	else
		std::cout << "0";

	// If x is greater than our power of 2, subtract the power of 2
	if (x >= pow)
		return x - pow;
	else
		return x;
}

int main()
{
	std::cout << "Enter an integer between 0 and 255: ";
	int x;
	std::cin >> x;

	x = printandDecrementBit(x, 128);
	x = printandDecrementBit(x, 64);
	x = printandDecrementBit(x, 32);
	x = printandDecrementBit(x, 16);

	std::cout << " ";

	x = printandDecrementBit(x, 8);
	x = printandDecrementBit(x, 4);
	x = printandDecrementBit(x, 2);
	x = printandDecrementBit(x, 1);


	return 0;
}



#include <iostream>
int main()
{
	const unsigned int redBits = 0xFF000000;
	const unsigned int greenBits = 0x00FF0000;
	const unsigned int blueBits = 0x0000FF00;
	const unsigned int alphaBits = 0x000000FF;

	using namespace std;
	cout << "Enter a 32-bit RGBA color value in hexadecimal (e.g. FF7F3300): ";
	unsigned int pixel;
	cin >> hex >> pixel; // std::hex allows us to read in a hex value

	// use bitwise AND to isolate red pixels, then right shift the value into the range 0-255
	unsigned char red = (pixel & redBits) >> 24;
	unsigned char green = (pixel & greenBits) >> 16;
	unsigned char blue = (pixel & blueBits) >> 8;
	unsigned char alpha = pixel & alphaBits;

	cout << "Your color contains:\n";
	cout << static_cast<int>(red) << " of 255 red\n";
	cout << static_cast<int>(green) << " of 255 green\n";
	cout << static_cast<int>(blue) << " of 255 blue\n";
	cout << static_cast<int>(alpha) << " of 255 alpha\n";
}


int main()
{
	unsigned char option_viewed = 0x01;
	unsigned char option_edited = 0x02;
	unsigned char option_favorited = 0x04;
	unsigned char option_shared = 0x08;
	unsigned char option_deleted = 0x80;

	
	unsigned char myArticleFlags;

	myArticleFlags |= option_viewed;

	if (myArticleFlags & option_deleted)
		std::cout << "NICHT";
	else
		std::cout << "DELETED";

}



MEINE MISGEBURT !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

int main()
{

	std::cout << "GIB ZAHL : ";
	int x;
	std::cin >> x;

	std::cout << " GIB GRÖSERE ZAHL : ";
	int y;
	std::cin >> y;

	if (y < x)
	{
		std::cout << " SWAPPING DEINE DRECKSZAHLEN \n";
		int a = x;
		int b = y;
		std::cout << "The smaller value is " << b << std::endl;
		std::cout << "The bigger value is " << a << std::endl;

	}

	if (x < y)
	{
		std::cout << "The smaller value is " << x << std::endl;
		std::cout << "The bigger value is " << y << std::endl;
	}

	return 0;
}




int main()
{
	std::cout << "Enter an integer: ";
	int smaller;
	std::cin >> smaller;

	std::cout << "Enter a larger integer: ";
	int larger;
	std::cin >> larger;

	// if user did it wrong
	if (smaller > larger)
	{
		// swap values of smaller and larger
		std::cout << "Swapping the values\n";

		int temp = larger;
		larger = smaller;
		smaller = temp;
	} // temp dies here

	std::cout << "The smaller value is: " << smaller << "\n";
	std::cout << "The larger value is: " << larger << "\n";

	return 0;
} // smaller and larger die here





int main()
{

	std::cout << "ENTER YOUR NAME" << std::endl;
	std::string NAME;
	std::getline(std::cin, NAME);

	std::cout << "ENTER DEIN AGE" << std::endl;
	int b;
	std::cin >> b;

	//std::cout << NAME << " and " << Age << std::endl;


	NAME.length();
	float a = NAME.length();

	std::cout << "YOU LIVED "<< b / a << " for each letter in your name" << std::endl;
	

	system("PAUSE");
	return 0;

}




int main()
{
	std::cout << "                                                                      " << std::endl;
	std::cout << "          00000000                                     00000000       " << std::endl;
	std::cout << "          00000000                                     00000000       " << std::endl;
	std::cout << "  000     000                                  000     000            " << std::endl;
	std::cout << "  000     000                                  000     000            " << std::endl;
	std::cout << "  000     000                                  000     000            " << std::endl;
	std::cout << "  0000000000000000000    KENNY IST EIN NEGER   0000000000000000000    " << std::endl;
	std::cout << "  0000000000000000000                          0000000000000000000    " << std::endl;
	std::cout << "          000     000                                  000     000    " << std::endl;
	std::cout << "          000     000                                  000     000    " << std::endl;
	std::cout << "          000     000                                  000     000    " << std::endl;
	std::cout << "     00000000                                     00000000            " << std::endl;
	std::cout << "     00000000                                     00000000            " << std::endl;
	std::cout << "                                                                      " << std::endl;

	return 0;
}


// 4.5

enum KLASSE
{
	orc,
	goblin,
	troll,
	ogre,
	skelleton,
};

KLASSE DEINEMA = troll;




int main()
{

	int kenny = 10;
	kenny += 2;

	std::cout << kenny << std::endl;

	return 0;


}



// 4.7 

struct Werbung
{
	float Ads;
	float Prozent;
	float Geld;
};

void Drucken(Werbung userinput)
{
	std::cout << "ZAHLEN : " << std::endl;
	std::cout << userinput.Ads << std::endl;
	std::cout << userinput.Prozent << std::endl;
	std::cout << userinput.Geld << std::endl;
}

void Rechnen(Werbung userinput)
{
	std::cout << "EINNAHMEN : " << userinput.Ads * userinput.Prozent/100 * userinput.Geld << std::endl;
}



int main()
{
	std::cout << "ANZAHL DER WERBUNG " << std::endl;
	float x;
	std::cin >> x;

	std::cout << "" << std::endl;

	std::cout << "ANZAHL DER KLICKS VON USERN " << std::endl;
	float y;
	std::cin >> y;

	std::cout << "" << std::endl;

	std::cout << "EINNAHMEN PRO WERBUNG " << std::endl;
	float z;
	std::cin >> z;

	std::cout << "" << std::endl;

	Werbung userinput = { x, y, z, };

	Drucken(userinput);

	std::cout << "" << std::endl;

	Rechnen(userinput);
	
	return 0;
}





struct Bruchzahl
{
	int Zähler;
	int Nenner;
};

void multiply(Bruchzahl gib)
{
	std::cout << "ERGEBNIS : " << gib.Zähler * gib.Nenner << std::endl;
}


int main()
{
	std::cout << "GIB ZAEHLER :" << std::endl;
	int a;
	std::cin >> a;

	std::cout << "GIB NENNER :" << std::endl;
	int b;
	std::cin >> b;

	Bruchzahl gib = { a, b, };

	multiply(gib);

	return 0;
}



// 4.X Comprehensive Quiz

enum class Monster
{
Oger,
Dragon,
Orc,
Spider,
Slime,
};


struct MonsterInfo
{
	Monster Typ;
	int hp;
	std::string name;
};


std::string change(MonsterInfo Info)
{
	if (Monster::Oger == Info.Typ)
	return "Oger";
	if (Monster::Dragon == Info.Typ)
	return "Dragon";
	if (Monster::Orc == Info.Typ)
	return "Orc";
	if (Monster::Spider == Info.Typ)
	return "Spider";
	if (Monster::Slime == Info.Typ)
	return "Slime";
}


void print(MonsterInfo Info)
{
	std::cout << " Klasse : "<< change(Info) << std::endl;
	std::cout << " HP : " << Info.hp << std::endl;
	std::cout << " NAME : " << Info.name << std::endl;
	std::cout << std::endl;
}


std::string userinput()
{
	std::cout << "choose Monster" << std::endl;
	std::string x;
	std::cin >> x;

	return x;
}


int main()
{
	MonsterInfo Oger = { Monster::Oger, 100, "kenny" };
	MonsterInfo Dragon = { Monster::Dragon, 200, "Mike" };
	MonsterInfo Orc = { Monster::Orc, 300, "Adolf" };
	MonsterInfo Spider = { Monster::Spider, 400, "Spidy" };
	MonsterInfo Slime = { Monster::Slime, 500, "SLEIMO" };

	std::string z;
	z = userinput();
	
	system("cls");

	if (z == "Oger")
	print(Oger);
	else if (z == "Dragon")
	print(Dragon);
	else if (z == "Orc")
	print(Orc);
	else if (z == "Spider")
	print(Spider);
	else if (z == "Slime")
		print(Slime);
	else
		std::cout << " Falscher Name ! " << std::endl;

	system("PAUSE");

	return 0;
}




// 5.3

int calculate(int x, int y, char z)
{
	switch (z)
	{
	case '+':
		return x + y;
		break;
	case '-':
		return x - y;
		break;
	case '/':
		return x / y;
		break;
	case '*':
		return x * y;
		break;
	default:
		std::cout << " FAIL ! ";

		return 0;
	}

}


void print(int x, int y, char z)
{
	system("cls");
	std::cout << "Ergebnis : " << calculate(x, y, z) << std::endl;
}


int main()
{
	std::cout << "Gib Zahl : " << std::endl;
	int x;
	std::cin >> x;

	std::cout << "Gib Zahl 2 : " << std::endl;
	int y;
	std::cin >> y;

	std::cout << "Gib Zeichen (+, -, /, or *) : " << std::endl;
	char z;
	std::cin >> z;

	print(x, y, z);

	return 0;
}




enum class Tiere
{
	pig,
	chicken,
	goat,
	cat,
	dog,
	ostrich,
};


std::string getAnimalName(Tiere abc)
{
	switch (abc)
	{
	case Tiere::pig:
		return std::string("SCHWEIN");
		break;

	case Tiere::chicken:
		return std::string("chicken");
		break;

	case Tiere::goat:
		return std::string("ZIEGE");
		break;

	case Tiere::cat:
		return std::string("KATZE");
		break;

	case Tiere::dog:
		return std::string("HUND");
		break;

	case Tiere::ostrich:
		return std::string("STRAUSS");
		break;

	default:
		std::cout << " FAIL ! " << std::endl;

	}
}


std::string printNumberOfLegs(Tiere abc)
{
	switch (abc)
	{
	case Tiere::pig:
		return std::string("4");
		break;

	case Tiere::chicken:
		return std::string("2");
		break;

	case Tiere::goat:
		return std::string("4");
		break;

	case Tiere::cat:
		return std::string("4");
		break;

	case Tiere::dog:
		return std::string("4");
		break;

	case Tiere::ostrich:
		return std::string("2");
		break;

	default:
		std::cout << " FAIL ! " << std::endl;

	}
}

void print(Tiere abc)
{
	std::cout << " TIER : " << getAnimalName(abc) << " BEINE : " << printNumberOfLegs(abc) << std::endl;
}


int main()
{
	std::cout << " Gib Tier : " << std::endl;
	std::string x;
	std::cin >> x;

	
	if (x == "pig")
	{
		Tiere abc(Tiere::dog);
		print(abc);
	}
	else if (x == "chicken")
	{
		Tiere abc(Tiere::chicken);
		print(abc);
	}
	else if (x == "goat")
	{
		Tiere abc(Tiere::goat);
		print(abc);
	}
	else if (x == "cat")
	{
		Tiere abc(Tiere::cat);
		print(abc);
	}
	else if (x == "dog")
	{
		Tiere abc(Tiere::dog);
		print(abc);
	}
	else if (x == "ostrich")
	{
		Tiere abc(Tiere::ostrich);
		print(abc);
	}
		else
			std::cout << " Falscher Name ! " << std::endl;


	return 0;
}



// 5.5

int main()
{

	char count = 'a';

	while (count <= 'z')
	{
		std::cout << count << "  "
		<< static_cast<int>(count) << std::endl;
		++count;
	}

	return 0;
}



int main()
{
	int count = 1;
	while (count <= 5)
	{
		int inner = 5;
		while (inner >= count)
		std::cout << inner-- << " ";

		std::cout << " " << std::endl;
		++count;
	}

	return 0;
}



int main()
{
	int count = 5;
	while (count <= 1)
	{
		int inner = 5;
		while (inner >= count)
			std::cout << inner-- << " ";

		std::cout << " " << std::endl;
		--count;
	}

	return 0;
}



int main()
{
	int outer = 5;
	while (outer >= 1)
	{
		// loop between inner and 1
		int inner = outer;
		while (inner >= 1)
			std::cout << inner-- << " ";

		// print a newline at the end of each row
		std::cout << "\n";
		--outer;
	}

	return 0;
}



// 5.7

int main()
{
	for (int count = 0; count <= 20; count +=2)
		std::cout << count << std::endl;

	return 0;
}



int main()
{

	while (true)
		std::cout << GetAsyncKeyState(65) << std::endl;

	return 0;
}



int sumTo(int value)
{
	int total(0);
	for (int count = 1; count <= value; ++count)
		total += count;

	return total;
}

int main()
{

	std::cout << sumTo(5) << std::endl;

}



int main()
{
	srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock

	for (int count = 0; count < 100; ++count)
	{
		std::cout << rand() << "\t";

		// If we've printed 5 numbers, start a new row
		if ((count + 1) % 5 == 0)
			std::cout << "\n";
	}
}



// 5.X Comprehensive Quiz


#include <iostream>
#include "constants.h"

using namespace std;

double calculateHeight(double initialHeight, int seconds)
{
	double distanceFallen = constants::gravity * seconds * seconds / 2;
	double heightNow = initialHeight - distanceFallen;

	// Check whether we've gone under the ground
	// If so, set the height to ground-level
	if (heightNow < 0.0)
		return 0.0;
	else
		return heightNow;
}

void calculateAndPrintHeight(double initialHeight, int time)
{
	std::cout << "At " << time << " seconds, the ball is at height: " << calculateHeight(initialHeight, time) << "\n";
}

int main()
{
	
	cout << "Enter the initial height of the tower in meters: ";
	double initialHeight;
	cin >> initialHeight;

	calculateAndPrintHeight(initialHeight, 0);
	calculateAndPrintHeight(initialHeight, 1);
	calculateAndPrintHeight(initialHeight, 2);
	calculateAndPrintHeight(initialHeight, 3);
	calculateAndPrintHeight(initialHeight, 4);
	calculateAndPrintHeight(initialHeight, 5);

	return 0;
}




#include <iostream>
#include "constants.h"

using namespace std;


int main()
{
	cout << " Start : " << endl;
	double startHeight;
	cin >> startHeight;

	int seconds = 1;
	while (seconds > 0)
	{	
	double distanceFallen = constants::gravity * seconds * seconds / 2;
	double heightNow = startHeight - distanceFallen;


		if (heightNow >= 0)
		{
		cout << "Bei " << seconds << " ist der ball auf " << heightNow << endl;
		seconds++;
		}

		if (heightNow <= 0)
		{
		cout << "Bei " << seconds << " ist der ball auf dem Boden" << endl;
		break;
		}

	}


return 0;

}




#define DEBUG_MODE 0;
#include <random>

using namespace std;


struct Optionen
{
	int option1; //Versuche
	int option2; // min
	int option3; // max
};


void loop(Optionen kenny);


Optionen Optiones()
{
	system("CLS");
	cout << " -= OPTIONEN =- " << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "1. Versuche : " << endl;
	int aaa;
	cin >> aaa;
	cout << "" << endl;

	cout << "2. Minimum : " << endl;
	int bbb;
	cin >> bbb;
	cout << "" << endl;

	cout << "3. Maximum : " << endl;
	int ccc;
	cin >> ccc;
	cout << "" << endl;



	system("CLS");

	Optionen eins = { aaa, bbb, ccc };

	return eins;
}

Optionen standartOptiones()
{
	int aaa = 10;
	int bbb = 1;
	int ccc = 100;
	Optionen eins = { aaa, bbb, ccc };
	return eins;
}


void start()
{
	cout << "------------------------------------------------" << endl;
	cout << "|              ... INTRODUCINNG ...            |" << endl;
	cout << "|                                              |" << endl;
	cout << "|                     .SEI.                    |" << endl;
	cout << "|                     .DIE.                    |" << endl;
	cout << "|                     .ZAHL.                   |" << endl;
	cout << "|                                              |" << endl;
	cout << "------------------------------------------------" << endl;
	cout << " " << endl;
	cout << "------------------------------------------------" << endl;
	cout << "|               Enter 1 for Start              |" << endl;
	cout << "------------------------------------------------" << endl;
	cout << " " << endl;
	cout << "------------------------------------------------" << endl;
	cout << "|              Enter 2 for Options             |" << endl;
	cout << "------------------------------------------------" << endl;
	cout << " " << endl;
	
	int a = 0;
	cin >> a;
	Optionen opt;

	if (a == 2)	
		opt = Optiones();
	else
		opt = standartOptiones();

	loop(opt);
}



void again()
{
	cout << " NOCHMAL ???  (y/n) " << endl;
	char a;
	cin >> a;
	
	
	if (a == 'y')
	{
		system("CLS");
		start();
	}

	else if (a == 'n')
	{
		system("CLS");

		int count = 0;
		while (count < 200)
		{
			if (count == 200)
				break;
			else
			{
				cout << " DU BIST EIN VERLIERER !!! ";
				++count;
			}
		}
	}

	else
	{
		system("CLS");
		cout << "Falscher Input " << endl;
		system("PAUSE");
		system("CLS");
		again();
	}


}


int input()
{
	cout << " " << endl;
	cout << "Sei die Zahl : " << endl;
	int y;
	std::cin >> y;
	return y;
}


void loop(Optionen kenny)
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(kenny.option2, kenny.option3);

	int x = dist(gen);

#if DEBUG_MODE
	cout << "DEBUG " << x << endl;
#endif
	cout << " " << endl;
	cout << "Du hast " << kenny.option1 << " Versuche um die Zahl zwischen " << kenny.option2 << " und " << kenny.option3 << " zu finden !" << endl;
	cout << " " << endl;
	cout << " " << endl;

	for (int count = 1; count <= kenny.option1; count++)
	{
		
		int z = input();

		if (count > kenny.option1)
		{
			system("CLS");
			cout << " " << endl;
			cout << count << " Keine Versuche mehr :( " << endl;
			cout << " " << endl;
			cout << " Die Zahl war : " << x << endl;
			cout << " " << endl;
			system("PAUSE");
			system("CLS");
			again();
			break;
		}

		else if (z == x)
		{
			cout << " " << endl;
			cout << "HERZLICHEN GLUECKWUNSCH ZU IHREM NEUEN IPHONE ! " << endl;
			cout << " " << endl;
			cout << "DU HAST " << count << " VERSUCHE GEBRAUCHT DU KAKB00N" <<endl;
			cout << " " << endl;
			again();
			break;		
		}

		else if (z > x)
		{
			cout << " " << endl;
			cout << count << " Versuch" << endl;
			cout << " ZU HOCH " << endl;
			cout << " " << endl;
		}

		else if (z < x)
		{
			cout << " " << endl;
			cout << count << " Versuch " << endl;
			cout << " ZU TIEF " << endl;
			cout << " " << endl;
		}

		
		else 
		{
			cout << "Falscher Input " << endl;
			cout << " " << endl;
		}



	}

}


int main()
{
system("color 9F");
start();
return 0;
}




// 6.1


int main()
{

	int kenny[100];

	kenny[50] = 5;


	cout << kenny[50] << " " << kenny[0] << endl;

	return 0;
}


// 6.2

int main()
{

	int kenny[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	cout << kenny[0] << " " << kenny[5] << " " << kenny[50] << endl;

	return 0;
}


// 6.2 QIUZ

int main()
{

	int kenny[365] = { };

	cout << kenny[0] << " " << kenny[5] << " " << kenny[50] << endl;

	return 0;
}

*/


namespace aenus
{
	enum kenny
	{
		chicken,
		dog,
		cat,
		elephant,
		duck,
		snake,
		animalz
	};
}


int main()
{
	int arry[aenus::animalz];
	arry[aenus::chicken] = 2;
	arry[aenus::dog] = 4;
	arry[aenus::cat] = 4;
	arry[aenus::elephant] = 4;
	arry[aenus::duck] = 2;
	arry[aenus::snake] = 0;


	cout << aenus::chicken << endl;

	return 0;
}