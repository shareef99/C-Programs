#include <iostream>
using namespace std;

struct Card {
  int cardNumber;
  char cardHolderNameInitial;
  int cardHolderAge;
  int cardMoney;
};

int main() {
  Card card;
  Card *cardPtr = &card;

  cout << "Enter your card number: " << endl;
  cin >> card.cardNumber;

  cout << "Enter your card holder name initial: " << endl;
  cin >> card.cardHolderNameInitial;

  cout << "Enter your card holder age: " << endl;
  cin >> card.cardHolderAge;

  cout << "Enter your card money: " << endl;
  cin >> card.cardMoney;

  cout << endl;

  cout << "Card Holder information is : " << endl;
  cout << "Card Number: " << card.cardNumber << endl;
  cout << "Card Holder Name Initial: " << card.cardHolderNameInitial << endl;
  cout << "Card Holder Age: " << card.cardHolderAge << endl;
  cout << "Card Money: " << card.cardMoney << endl;

  cout << endl;

  cout << "Card Holder information is : " << endl;
  cout << "Card Number: " << cardPtr->cardNumber << endl;
  cout << "Card Holder Name Initial: " << cardPtr->cardHolderNameInitial
       << endl;
  cout << "Card Holder Age: " << cardPtr->cardHolderAge << endl;
  cout << "Card Money: " << cardPtr->cardMoney << endl;

  return 0;
}