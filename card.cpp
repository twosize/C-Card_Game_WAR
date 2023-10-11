#include "card.hpp"

Card::Card() {

setCardValue(five);

setCardSuit(Diamonds); }

Card::Card(Value v, Suit s) {

setCardValue(v);

setCardSuit(s); }

Card::Value Card::getCardValue() { return cardValue; }

Card::Suit Card::getCardSuit() { return cardSuit; }

void Card::setCardValue(Value v) { cardValue = v; }

void Card::setCardSuit(Suit s) { cardSuit = s; }

void Card::printCard() {

switch (getCardValue()) { case 0:

cout << "two";

break;

case 1:

cout << "three"; break;

case 2:

cout << "four"; break;

case 3:

cout << "five"; break;

case 4:

cout << "six"; break;

case 5: cout << "seven"; break;

case 6:

cout << "eight"; break;

case 7:

cout << "nine"; break;

case 8:

cout << "ten"; break;

case 9:

cout << "Jack"; break;

case 10:

cout << "Queen"; break;

case 11:

cout << "King"; break;

case 12:

cout << "Ace"; break; } cout << " of ";

switch (getCardSuit()) { case 0:

cout << "Hearts" << endl; break;

case 1:

cout << "Clubs" << endl; break;

case 2:

cout << "Diamonds" << endl; break;

case 3:

cout << "Spades" << endl; break; }

}
