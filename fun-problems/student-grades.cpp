#include <iostream>
#include <string>
using namespace std;

struct Student {
  string name;
  int noOfSubjects;
  bool isFail = false;
};

int main() {
  int noOfStudent;
  string gradeOptions = " (A, B, C, D, E, or F) ";

  cout << "How many students are there in your class : ";
  cin >> noOfStudent;

  Student students[noOfStudent];

  for (int i = 0; i < noOfStudent; i++) {
    cout << "Enter the name of student " << i + 1 << endl;
    cin >> students[i].name;
  }

  for (int i = 0; i < noOfStudent; i++) {
    cout << "How many subjects are you teaching to " << students[i].name << " ?"
         << endl;
    cin >> students[i].noOfSubjects;

    string subjects[students[i].noOfSubjects];

    for (int j = 0; j < students[i].noOfSubjects; j++) {
      cout << "Enter the " << j + 1 << " subject" << endl;
      cin >> subjects[j];
    }

    cout << "Enter the grade for " << students[i].name << endl;

    int sum = 0;
    string failedSubjects;

    for (int j = 0; j < students[i].noOfSubjects; j++) {
      char grade;
      cout << "Grade for subject " << subjects[j] << gradeOptions << endl;
      ;
      cin >> grade;

      if (grade == 'A') {
        sum += 10;
      } else if (grade == 'B') {
        sum += 9;
      } else if (grade == 'C') {
        sum += 8;
      } else if (grade == 'D') {
        sum += 7;
      } else if (grade == 'E') {
        sum += 6;
      } else if (grade == 'F') {
        students[i].isFail = true;
        failedSubjects += subjects[j] + " ";
      } else {
        cout << "Invalid Grade Option" << endl;
      }
    }

    if (students[i].isFail) {
      cout << "You are failed in " << failedSubjects << endl;
    } else {
      float average = sum / students[i].noOfSubjects;
      cout << "Average score of " << students[i].name << " is " << average
           << endl;
    }
  }

  return 0;
}