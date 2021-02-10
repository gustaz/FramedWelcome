#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#ifdef _WIN32
#define WINPAUSE system("pause")
#endif



using namespace std;

string InputName();
void ModifyString(int amount, string &modifiedString, char addedSymbol);
void drawFrame();

int main()
{

    // Sveikas, vardas!
    // lengthOfIntro + name.length() + 1

    drawFrame();


    WINPAUSE;
}

void ModifyString(int amount, string &modifiedString, char addedSymbol) {

    for (int i = 0; i < amount; i++)
        modifiedString += addedSymbol;

}

void drawFrame() {

	string name;
	int lines;
	
    cout << "Iveskite varda: ";
	cin >> name;
    cout << "Iveskite norima eiluciu skaiciu: ";
	cin >> lines;
    string greeting;
    string cardLine[11];

    string edgeCharacter = "*";

    if (name[name.length() - 1] == 's')
        greeting = " Sveikas, " + name + "! ";
    else
        greeting = " Sveika, " + name + "! ";

    cardLine[0] = edgeCharacter;
    ModifyString(greeting.length(), cardLine[0], '*');
    cardLine[0] += edgeCharacter;

    for (int i = 1; i <= lines / 2; i++) {

        cardLine[i] = "*";
        ModifyString(greeting.length(), cardLine[i], ' ');
        cardLine[i] += "*";
    }

    cardLine[lines / 2] = edgeCharacter;
    cardLine[lines / 2] += greeting;
    cardLine[lines / 2] += edgeCharacter;

    for (int i = lines / 2 + 1; i <= lines - 1; i++) {

        cardLine[i] = "*";
        ModifyString(greeting.length(), cardLine[i], ' ');
        cardLine[i] += "*";
    }

    cardLine[lines-1] = edgeCharacter;
    ModifyString(greeting.length(), cardLine[lines-1], '*');
    cardLine[lines-1] += edgeCharacter;

    for (int i = 0; i < lines; i++)
        cout << cardLine[i] << endl;
}
