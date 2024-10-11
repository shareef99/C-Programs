#include <iostream>
#include <string>
using namespace std;

struct Student {
  string name;
  int noOfSubjects;
  bool isFail = false;
  int sumOfGrades = 0;
};

int takeGrades(string subject) {
  char grade;

  cout << "Grade for subject " << subject << " (A, B, C, D, E, or F) " << endl;
  cin >> grade;

  if (grade == 'A') {
    return 10;
  } else if (grade == 'B') {
    return 9;
  } else if (grade == 'C') {
    return 8;
  } else if (grade == 'D') {
    return 7;
  } else if (grade == 'E') {
    return 6;
  } else if (grade == 'F') {
    return 0;
  } else {
    return takeGrades(subject);
  }
}

int main() {
  int noOfStudent;

  cout << "How many students are there in your class : ";
  cin >> noOfStudent;

  Student students[noOfStudent];

  for (int i = 0; i < noOfStudent; i++) {
    cout << "Enter the name of student " << i + 1 << endl;
    cin >> students[i].name;
  }

  for (int i = 0; i < noOfStudent; i++) {
    Student currentStudent = students[i];

    cout << "How many subjects are you teaching to " << currentStudent.name
         << " ?" << endl;
    cin >> currentStudent.noOfSubjects;

    string subjects[currentStudent.noOfSubjects];

    for (int j = 0; j < currentStudent.noOfSubjects; j++) {
      cout << "Enter the " << j + 1 << " subject" << endl;
      cin >> subjects[j];
    }

    cout << "Enter the grade for " << currentStudent.name << endl;

    int marks;
    string failedSubjects;

    for (int j = 0; j < currentStudent.noOfSubjects; j++) {
      marks = takeGrades(subjects[j]);

      if (marks == 0) {
        currentStudent.isFail = true;
        failedSubjects += subjects[j] + " ";
      } else {
        currentStudent.sumOfGrades += marks;
      }
    }

    if (currentStudent.isFail) {
      cout << "You are failed in " << failedSubjects << endl;
    } else {
      float average = currentStudent.sumOfGrades / currentStudent.noOfSubjects;
      cout << "Average score of " << students[i].name << " is " << average
           << endl;
    }
  }

  return 0;
}