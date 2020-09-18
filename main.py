from art import *
tprint("@felpsbu")


print ("╔══════════════════════════════╗")
print ("║      Select the Imposter     ║")
print ("║  Select: a color Red         ║")
print ("║  Seletc: a color Blue        ║")
print ("║  Select: a color Pink        ║")
print ("║  Select: a color Green       ║")
print ("║  Select: a color Orange      ║")
print ("║  Select: a color Yellow      ║")
print ("║  Select: a color Cyan        ║")
print ("║  Select: a color Black       ║")
print ("║  Select: a color White       ║")
print ("╚══════════════════════════════╝")
print ("You have 5 tries to guess the impostor")

numberOfTries = 5
triesLeft = numberOfTries
rightAnswer = "black"

for x in range(numberOfTries):
    triesLeft -= 1
    color = input("Enter your answer:")

    if (color.lower() == rightAnswer.lower()):
        print ("Right Answer! Congrats")
    else: 
        print ("Wrong Answer, try again")
        print ("You have " + str(triesLeft) + " tries left")