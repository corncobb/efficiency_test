//Cameron Cobb
//4/11/2019
//Simple script that is used to test the efficiency and speed of C++ as compared to Python

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>

int main(){
    srand(time(0));

    int diceNumber = -1;

    do{
        std::cout << "How many die would you like to roll? (Enter an integer, 0 to stop): ";
        std::cin >> diceNumber;

        while(!(std::cin))
        {
            std::cout << "Not a valid input!\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "How many die would you like to roll? (Enter an integer, 0 to stop): ";
            std::cin >> diceNumber;
        }

        if(diceNumber > 0)
        {
            auto start = std::chrono::high_resolution_clock::now();
            for(int i = 0; i < diceNumber; i++)
            {
                std::cout << "Dice #" << i+1 << " rolled a " << 1 + (rand() % 6) << std::endl;
            }
            auto stop = std::chrono::high_resolution_clock::now();
            auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
            std::cout << "Microseconds: " <<  duration.count() << std::endl;

        }
        
    }while(diceNumber != 0);

    std::cout << "Goodbye!" << std::endl;
    
    return 0;
}