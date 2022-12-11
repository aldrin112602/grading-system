#include <iostream>
using namespace std;
int main() {
  string fname, lname;
  int level;
  double ave;
  cout << "Last Name: ";
  cin >> lname;
  cout << "First Name: ";
  cin >> fname;
  while(true) {
      cout << "Year Level: ";
      cin >> level;
      if(level > 0 && level < 5) {
          break;
      } else {
          cout << "INVALID INPUT" << endl;
      }
  }
  cout << "Input Grades:" << endl;
  int grades[5];
  string subjects[5] = {"Mathematics", "Science", "English", "Filipino", "Computer"};
  for(int i = 0; i < 5; i++) {
      while(true) {
          cout << "\t" << subjects[i] << ": ";
          cin >> grades[i];
          if(grades[i] >= 65 && grades[i] <= 100) {
              break;
          } else {
              cout << "\t        INVALID INPUT" << endl;
          }
      }
      
  }
  for(int i = 0; i < 5; i++) ave += grades[i];
  ave /= 5;
  cout << "\n\tAverage: " << ave << endl;
  //Remark 
  string remark;
   if(ave == 100) remark = "Excelent";
   if(ave <= 99 && ave >= 90) remark = "Very Good";
   if(ave <= 89 && ave >= 80) remark = "Good";
   if(ave <= 79 && ave >= 75) remark = "For";
   if(ave <= 74 && ave >= 65) remark = "Poor";
   cout << "\tRemarks: " << remark << endl;
  return 0;  
}
