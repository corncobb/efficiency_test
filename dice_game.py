#Cameron Cobb
#4/11/2019
#Simple script that is used to test the efficiency and speed of C++ as compared to Python

import random
import time

diceNumber = -1

while diceNumber != 0:
    valid = False
    while not valid:
        try:
            diceNumber = int(input("How many die would you like to roll? (Enter an integer, 0 to stop): "))
            valid = True
        except ValueError:
            print("Not an integer!")
            valid = False
        
    if diceNumber != 0:
        start = time.time()
        for x in range(0, diceNumber):
            print("Dice #{} rolled a {}".format(x+1, random.randint(1, 6)))
        print("Time to complete: {}".format(time.time()-start))
    elif diceNumber == 0:
        pass
    else:
        print("Not a valid input!")

print("Goodbye")
