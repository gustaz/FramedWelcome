#include <iostream>
#include <string>
#include <stdlib.h>

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

string InputName() {

    string name;

    cout << "Iveskite savo varda: ";
    cin >> name;

    return name;
}

void ModifyString(int amount, string &modifiedString, char addedSymbol) {

    for (int i = 0; i < amount; i++)
        modifiedString += addedSymbol;

}

void drawFrame() {

    string name = InputName();
    
    string cardLine1;
    string cardLine2;
    string cardLine3;
    string cardLine4;
    string cardLine5;

    int lengthOfIntro = 9;

    string greeting;

    //if (name[name.length() - 1] == 's')
        greeting = "Sveikas, ";
    //else { greeting = "Sveika, "; lengthOfIntro--; }

//***************
//lengthOfIntro + name.length() + 3 spaces + ! == lengthOfIntro + name.length() + 4
    cardLine1 = "*";
    ModifyString(lengthOfIntro + name.length() + 4, cardLine1, '*');

    cout << cardLine1 << endl;

//*             *
//lenghtOfIntro + name.length() + 2 spaces + ! == lengthOfIntro + name.length() + 3
    cardLine2 = "*";
    ModifyString(lengthOfIntro + name.length() + 3, cardLine2, ' ');
    cardLine2 += "*";

    cout << cardLine2 << endl;

//* Sveikas, vardas! *
    cardLine3 = "* ";
    cardLine3 += greeting + name + "! *";

    cout << cardLine3 << endl;

//*             *
    cardLine4 = "*";
    ModifyString(lengthOfIntro + name.length() + 3, cardLine4, ' ');
    cardLine4 += "*";

    cout << cardLine4 << endl;

//***************
    cardLine5 = "*";
    ModifyString(lengthOfIntro + name.length() + 4, cardLine5, '*');

    cout << cardLine5 << endl;


}
