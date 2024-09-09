#include <iostream>
#include <set>

int main()
{
    int num, s1, s2, s3, s4;

    std::cin >> s1 >> s2 >> s3 >> s4;

    int count = 0; 
    
    if (s1 == s2 || s1 == s3 || s1 == s4) count++;
    if (s2 == s3 || s2 == s4) count++;
    if (s3 == s4) count++;  

    std::cout << count << std::endl;                    

    return 0;
}
