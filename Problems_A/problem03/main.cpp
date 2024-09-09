#include <iostream>
#include <set>
int main()
{   
    std::string name;
    std::cin >> name;           

    std::set<char> unique_chars;

    for ( char c : name)
    {
        unique_chars.insert(c);
    }   

    if(unique_chars.size() % 2 == 0)
    {
        std::cout << "CHAT WITH HER!" << std::endl;
    }
    else
    {
        std::cout << "IGNORE HIM!" << std::endl;
    }   
    

    return 0;
}