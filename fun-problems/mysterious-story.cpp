#include <iostream>
#include <string>
using namespace std;

struct User {
  string name;
  int age;
};

int main() {
  User user;

  cout << "Welcome to the mysterious story of a college boy!!!" << endl;
  cout << "You can type the name of boy. " << endl;
  cin >> user.name;

  cout << "What age do you want him to be? " << endl;
  cout << "(note: college students are between 18 to 25 " << endl;
  cin >> user.age;

  string sa = "SA", sb = "SB", sc = "SC", saa = "SAA", sab = "SAB", sac = "SAC",
         sba = "SBA", sbb = "SBB", sbc = "SBC", sca = "SCA", scb = "SCB",
         scc = "SCC";
  string saaa = "SAAA", saab = "SAAB", saac = "SAAC", saba = "SABA",
         sabb = "SABB", sabc = "SABC", saca = "SACA", sacb = "SACB",
         sacc = "SACC", sbaa = "SBAA", sbab = "SBAB", sbac = "SBAC",
         sbba = "SBBA", sbbb = "SBBB", sbbc = "SBBC", sbca = "SBCA",
         sbcb = "SBCB", sbcc = "SBCC", scaa = "SCAA", scab = "SCAB",
         scac = "SCAC", scba = "SCBA", scbb = "SCBB", scbc = "SCBC",
         scca = "SCCA", sccb = "SCCB", sccc = "SCCC";
  string options = "Select any 3 of mysterious choices \nA, B, or C\n";
  string endStatement = "I hope you enjoy the story of boy";
  char firstSelection, secondSelection, thirdSelection;

  cout << options;
  cin >> firstSelection;

  if (firstSelection == 'A' || firstSelection == 'a') {
    cout << sa << endl;
    cout << options;
    cin >> secondSelection;

    if (secondSelection == 'A' || secondSelection == 'a') {
      cout << saa << endl;

      cout << options;
      cin >> thirdSelection;

      if (thirdSelection == 'A' || thirdSelection == 'a') {
        cout << saaa << endl;
        cout << endStatement;
      }

      if (thirdSelection == 'B' || thirdSelection == 'b') {
        cout << saab << endl;
        cout << endStatement;
      }

      if (thirdSelection == 'C' || thirdSelection == 'c') {
        cout << saac << endl;
        cout << endStatement;
      }
    }

    if (secondSelection == 'B' || secondSelection == 'b') {
      cout << sab << endl;

      cout << options;
      cin >> thirdSelection;

      if (thirdSelection == 'A' || thirdSelection == 'a') {
        cout << saba << endl;
        cout << endStatement;
      }

      if (thirdSelection == 'B' || thirdSelection == 'b') {
        cout << sabb << endl;
        cout << endStatement;
      }

      if (thirdSelection == 'C' || thirdSelection == 'c') {
        cout << sabc << endl;
        cout << endStatement;
      }
    }

    if (secondSelection == 'C' || secondSelection == 'c') {
      cout << sac << endl;

      cout << options;
      cin >> thirdSelection;

      if (thirdSelection == 'A' || thirdSelection == 'a') {
        cout << saca << endl;
        cout << endStatement;
      }

      if (thirdSelection == 'B' || thirdSelection == 'b') {
        cout << sacb << endl;
        cout << endStatement;
      }

      if (thirdSelection == 'C' || thirdSelection == 'c') {
        cout << sacc << endl;
        cout << endStatement;
      }
    }
  }

  if (firstSelection == 'B' || firstSelection == 'b') {
    cout << sb << endl;
    cout << options;
    cin >> secondSelection;

    if (secondSelection == 'A' || secondSelection == 'a') {
      cout << sba << endl;

      cout << options;
      cin >> thirdSelection;

      if (thirdSelection == 'A' || thirdSelection == 'a') {
        cout << sbaa << endl;
        cout << endStatement;
      }

      if (thirdSelection == 'B' || thirdSelection == 'b') {
        cout << sbab << endl;
        cout << endStatement;
      }

      if (thirdSelection == 'C' || thirdSelection == 'c') {
        cout << sbac << endl;
        cout << endStatement;
      }
    }

    if (secondSelection == 'B' || secondSelection == 'b') {
      cout << sbb << endl;

      cout << options;
      cin >> thirdSelection;

      if (thirdSelection == 'A' || thirdSelection == 'a') {
        cout << sbba << endl;
        cout << endStatement;
      }

      if (thirdSelection == 'B' || thirdSelection == 'b') {
        cout << sbbb << endl;
        cout << endStatement;
      }

      if (thirdSelection == 'C' || thirdSelection == 'c') {
        cout << sbbc << endl;
        cout << endStatement;
      }
    }

    if (secondSelection == 'C' || secondSelection == 'c') {
      cout << sbc << endl;

      cout << options;
      cin >> thirdSelection;

      if (thirdSelection == 'A' || thirdSelection == 'a') {
        cout << sbca << endl;
        cout << endStatement;
      }

      if (thirdSelection == 'B' || thirdSelection == 'b') {
        cout << sbcb << endl;
        cout << endStatement;
      }

      if (thirdSelection == 'C' || thirdSelection == 'c') {
        cout << sbcc << endl;
        cout << endStatement;
      }
    }
  }

  if (firstSelection == 'C' || firstSelection == 'c') {
    cout << sc << endl;
    cout << options;
    cin >> secondSelection;

    if (secondSelection == 'A' || secondSelection == 'a') {
      cout << sca << endl;

      cout << options;
      cin >> thirdSelection;

      if (thirdSelection == 'A' || thirdSelection == 'a') {
        cout << scaa << endl;
        cout << endStatement;
      }

      if (thirdSelection == 'B' || thirdSelection == 'b') {
        cout << scab << endl;
        cout << endStatement;
      }

      if (thirdSelection == 'C' || thirdSelection == 'c') {
        cout << scac << endl;
        cout << endStatement;
      }
    }

    if (secondSelection == 'B' || secondSelection == 'b') {
      cout << scb << endl;

      cout << options;
      cin >> thirdSelection;

      if (thirdSelection == 'A' || thirdSelection == 'a') {
        cout << scba << endl;
        cout << endStatement;
      }

      if (thirdSelection == 'B' || thirdSelection == 'b') {
        cout << scbb << endl;
        cout << endStatement;
      }

      if (thirdSelection == 'C' || thirdSelection == 'c') {
        cout << scbc << endl;
        cout << endStatement;
      }
    }

    if (secondSelection == 'C' || secondSelection == 'c') {
      cout << scc << endl;

      cout << options;
      cin >> thirdSelection;

      if (thirdSelection == 'A' || thirdSelection == 'a') {
        cout << scca << endl;
        cout << endStatement;
      }

      if (thirdSelection == 'B' || thirdSelection == 'b') {
        cout << sccb << endl;
        cout << endStatement;
      }

      if (thirdSelection == 'C' || thirdSelection == 'c') {
        cout << sccc << endl;
        cout << endStatement;
      }
    }
  }

  return 0;
}