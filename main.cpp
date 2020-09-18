#include <iostream>
#include <string>
using namespace std;


int main() {
  
  int numberOfTries = 5;
  string x;
  string rightAnswer = "black";
  
  cout << "╔══════════════════════════════╗" "\n";
  cout << "║      Select the Imposter     ║" "\n";
  cout << "║  Select: a color Red         ║" "\n";
  cout << "║  Seletc: a color Blue        ║" "\n";
  cout << "║  Select: a color Pink        ║" "\n";
  cout << "║  Select: a color Green       ║" "\n";
  cout << "║  Select: a color Orange      ║" "\n";
  cout << "║  Select: a color Yellow      ║" "\n";
  cout << "║  Select: a color Cyan        ║" "\n";
  cout << "║  Select: a color Black       ║" "\n";
  cout << "║  Select: a color White       ║" "\n";
  cout << "╚══════════════════════════════╝" "\n";
  cout << "You have 5 tries to guess the impostor" "\n";

  for (int i = 1; i <= numberOfTries; i++)
  {
    int triesLeft = numberOfTries-i;
    cout << "Type your answer" "\n";
    cin >> x;

    if (!x.compare(rightAnswer))
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



