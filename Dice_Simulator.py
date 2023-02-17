import random

x = "y"

while(x == "y"):
    turn = random.randint(1,6)
    if turn == 1:
        print("-------")
        print("|      |")
        print("|  0   |")
        print("|      |")
        print("-------")

    if turn == 2:
        print("---------")
        print("|   0    |")
        print("|        |")
        print("|   0    |")
        print("---------")

    if turn == 3:
        print("---------")
        print("|   0    |")
        print("|   0    |")
        print("|   0    |")
        print("---------")

    if turn == 4:
        print("----------")
        print("| 0     0 |")
        print("|         |")
        print("| 0     0 |")
        print("----------")

    if turn == 5:
        print("-----------")
        print("| 0     0 |")
        print("|    0    |")
        print("| 0     0 |")
        print("-----------")

    if turn == 6:
        print("----------")
        print("| 0     0 |")
        print("| 0     0 |")
        print("| 0     0 |")
        print("-----------")

    x=input("press y to roll again and n to exit:")
    print("\n")



    

