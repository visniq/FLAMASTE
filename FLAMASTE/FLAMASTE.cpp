
#include <iostream>
#include <string>
#include <map>
#include <cctype>

void countSameLetters(std::string& str)
{
    std::map<char, int> letterCount; // container that store single char and the number of it's occurance
    for (char c : str)
    {
        if (std::isalpha(c))
        {
        letterCount[c]++;
        }
    }

    for (const auto& pair : letterCount)
    {
        if(pair.second > 2)
            std::cout << pair.first << pair.second;
        else
        {
            for (int i = 0; i < pair.second; i++)
            {
                std::cout << pair.first;
            }

        }
    }
    std::cout << std::endl;
}



int main()
{
    int CountOfTries;
    std::string text;
    std::cin >> CountOfTries;

    while (CountOfTries)
    {
        std::cin >> text;
        countSameLetters(text);
        CountOfTries--;
    }

}
