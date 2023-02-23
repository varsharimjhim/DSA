import random

x = 'y'
while  x.lower() == 'y':
    user = input("Your Turn : Enter your Choice (rock, paper, scissor):")
    moves = ["rock","paper","scissor"]
    computer = random.choices(moves)
    print( "Computer turn: ", computer[0])
    if user == computer[0] :
        print("Its a Tie")

    elif (user == "rock" and computer == "scissor") or (user == "rock" and computer == "paper") or (user == "paper" and computer == "rock") or (user == "scissor" and computer == "paper"):
        print("Hurray :) ----->> VICTORY ")

    else:
        print("Better Luck Next Time :(")

    x = input("Do you want to continue (y/n)")



