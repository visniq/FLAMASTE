
#include <iostream>
#include <string>

void CheckingIfThereIsMoreThanTwoSameCharsNextToEachOthers(std::string x)
{
    for (int i = 0; i < x.length()-1; i++)
    {
        int j = 1;
        j++;
        if (x[i] == x[j])
        {
            int numOfSameLetters =+ 1;
        }
        else
            return false;
    }
}


int main()
{
    int CountOfTries;
    std::string text;
    std::cin >> CountOfTries;
    
    while (CountOfTries)
    {
        std::cin >> text;
        CheckingIfThereIsMoreThanTwoSameCharsNextToEachOthers(text);
        CountOfTries--;
    }

}

