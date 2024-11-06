 #include <iostream>
 #include <fstream>
 #include <string>


 using namespace std;

 bool lineDifference(string str1, string str2);
 string characterDifference(string str1, string str2);
  int searchWord(string str, string word);
  int searchChar(string str, char c);
 
  int main() {
 
      string feed;
 
 
      string filename = "filename.txt";
      ifstream inFS;
 
      cout << "Welcome to the CSCI111 File Parser" << endl;
      cout << "PLease select from the following" << endl;
      cout << "A - File difference check" << endl;
      cout << "B - Word Search" << endl;
      cout << "C - Character search" << endl;
 
      cin >> feed;
 
      if (feed == "A" || feed == "a") {
         cout << "Hi" << endl;
      } else if (feed == "B" || feed == "b") {
          cout << "Hey" << endl;
      } else if ( feed == "C" || feed == "c") {
          cout << "Hola" << endl;
      } else {
          cout << "Invalid Entry, Try Again." << endl;
      }
 
 
      return 0;
  }