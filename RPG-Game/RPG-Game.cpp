#include <iostream>
#include <string>

#include "characterRace.h"

/*
* name
* race
* age
* height
* gender
* class
*/

std::string characterName;

bool nameCorrect = false;

characterRace race;

int main()
{
    std::cout << "---------------RPG Game---------------\n\n\n";

    // --------------------NAME--------------------

    while (nameCorrect == false || characterName.empty())
    {
        char response;
        int tries = -1;
        tries++;

        std::cout << "Enter name?\n";
        std::cin >> characterName;
        std::cout << "Your name is " << characterName << " is that correct? (y/n)\n";
        std::cin >> response;
        
        switch (response)
        {
        case 'y':
            nameCorrect = true;
            break;
        case 'Y':
            nameCorrect = true;
            break;
        default:
            break;
        }
    }

    // race
    std::cout << "\nBefore we assign you to any age or height, we first have to know your race, what would you like that to be?\n";
    std::cin >> race.raceName;
    std::cout << "\nGreat you have choosen " << race.raceName << " is that correct? (y/n)\n";
}