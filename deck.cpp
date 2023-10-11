#include "deck.hpp"
Deck::Deck() {

numCards = 0; } void Deck::AddCardToDeck(Card* card) {

cards[numCards] = card;

numCards++; } Card* Deck::RemoveTopCard() {

Card* cardToReturn = cards[numCards - 1];

numCards--;

return cardToReturn; } int Deck::GetNumCards() {

return numCards; } void Deck::Shuffle() {

srand(time(NULL));

for (int i = 0; i < numCards; i++)

{

int r = rand() % numCards;

Card* temp = cards[i];

cards[i] = cards[r];

cards[r] = temp;

}

} void Deck::PrintCards() {

for (int i = 0; i < numCards; i++)

{

cards[i]->printCard();

} }
