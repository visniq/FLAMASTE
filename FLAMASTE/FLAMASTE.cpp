
#include <iostream>
#include <string>


//need more changes

void CheckingIfThereIsMoreThanTwoSameCharsNextToEachOther(std::string x)
{
    int i;
    int numOfSameLetters{ 1 };
    int j{ 0 };
    char firstLetter;
    for (i = 0; i < x.length() - 1; i++)
    {
        j++;
        if (x[i] == x[j])
        {
            firstLetter = x[i];
            numOfSameLetters += 1;
        }
    }

    if (numOfSameLetters > 2)
    {
        std::cout << firstLetter << numOfSameLetters;
    }
    else
        std::cout << x[i];
}


int main()
{
    int CountOfTries;
    std::string text;
    std::cin >> CountOfTries;

    while (CountOfTries)
    {
        std::cin >> text;
        CheckingIfThereIsMoreThanTwoSameCharsNextToEachOther(text);
        CountOfTries--;
    }

}
