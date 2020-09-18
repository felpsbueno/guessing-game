#include <iostream>
#include <string>
using namespace std;


int main() {
  
  int numberOfTries = 5;
  int x;
  int rightAnswer = 8;
  
  cout << "╔══════════════════════════════╗" "\n";
  cout << "║      Select the Imposter     ║" "\n";
  cout << "║  Select: a color Red    (1)  ║" "\n";
  cout << "║  Seletc: a color Blue   (2)  ║" "\n";
  cout << "║  Select: a color Pink   (3)  ║" "\n";
  cout << "║  Select: a color Green  (4)  ║" "\n";
  cout << "║  Select: a color Orange (5)  ║" "\n";
  cout << "║  Select: a color Yellow (6)  ║" "\n";
  cout << "║  Select: a color Cyan   (7)  ║" "\n";
  cout << "║  Select: a color Black  (8)  ║" "\n";
  cout << "║  Select: a color White  (9)  ║" "\n";
  cout << "╚══════════════════════════════╝" "\n";
  cout << "You have 5 tries to guess the impostor" "\n";

  for (int i = 1; i <= numberOfTries; i++)
  {
    int triesLeft = numberOfTries-i;
    cout << "Type your answer" "\n";
    cin >> x;

    if (x == rightAnswer) 
    {
      cout << "Right Answer! Congrats" "\n";
    }
    else 
    {
      cout << "Wrong Answer, try again" "\n";
       cout << "You have " + to_string(triesLeft) + " tries left" "\n";
    }
  }
}



