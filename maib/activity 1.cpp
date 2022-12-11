#include <iostream>
using namespace std;
int main() {
 int n;
 cout << "How many students do you want to input? ";
 cin >> n; 
 float arr[n][6];
 
 string a[4] = {"First Grading Period", "Second Grading Period", "Third Grading Period", "Fourth Grading Period"};
 int k = 1;
 for(int i = 0; i < n; i++) {
     float ave = 0;
     cout << "\n\nInput Average Grade of Student #" << k << ":" << endl;
     for(int j = 0; j < 4; j++) {
         cout << "\t" << a[j] << ": ";
         cin >> arr[i][j];
         while(true) {
             if(arr[i][j] <= 100 && arr[i][j] >= 65) {
                 break;
             } else {
                 cout << "\t\tINVALID INPUT. Input again: ";
                 cin >> arr[i][j];
             }
         }
     }
     cout << "\t===========================" << endl;
     for(int a = 0; a < 4; a++) {
         ave += arr[i][a];
     }
     ave /= 4;
     arr[i][4] = ave;
     arr[i][5] = k;
     cout << "\tAverage of Student #" << k << ": " << arr[i][4] << endl;
     k++;
 }
  return 0;  
}
