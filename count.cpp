// my first program in C++
#include <iostream>
#include <string>

using namespace std;

void printStringExciting(string s, int excitementLevel) 
{
  string suffix = "";
  for (int i = 0; i < excitementLevel; i++) {
    suffix += "!";
  }
  cout << s << suffix << endl;
}

int main()
{
  int number = 7;
  for (int i = 0; i < 10; i++) {
    int total = number + i;
    string totalAsString = to_string(total);
    printStringExciting(totalAsString, i);


  }

}


