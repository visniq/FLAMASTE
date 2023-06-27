
#include <iostream>
#include <string>


//need more changes

void CheckingIfThereIsMoreThanTwoSameCharsNextToEachOther(std::string str)
{
    int counter{ 1 };
    for (size_t i {1}; i <= str.length(); i++)
    {
        if (str[i] != str[i - 1])
        {
            if (counter > 2)
            {
                std::cout << str[i-1] << counter;
            }
            else if (counter == 2)
            {
                std::cout << str[i-1] << str[i-1];
            }
            else
                std::cout << str[i-1];
            counter = 1;
        }
        else
            counter++;
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
        CheckingIfThereIsMoreThanTwoSameCharsNextToEachOther(text);
        std::cout << "\n";
        CountOfTries--;
    }

}

