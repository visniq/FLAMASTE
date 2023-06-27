
#include <iostream>
#include <string>
#include <algorithm>

void countSameLetters(const std::string& str)
{
    int count{ 0 };
    for (size_t i{ 0 }; i < str.length() - 1; i++)
    {
        count = std::count(str.begin(), str.end(), str[i]);
        

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
        countSameLetters(text);
        CountOfTries--;
    }

}
