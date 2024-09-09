#include <iostream>


int main()
{
        int n, p1, p2, p3, count = 0;           

        std::cin >> n;

        int mat[n][3];

        for (int i = 0; i < n; i++) 
        {
            std::cin >> p1 >> p2 >> p3; 
            if(p1 == 1 && p2 == 1 || p2 == 1 && p3 == 1 || p3 == 1 && p1 == 1)
            {
                count++;
            }
            
        }   
        std::cout << count;
        
        

    return 0;       
}