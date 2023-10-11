#pragma once

#include "card.hpp"

class Deck { public:

Deck();

int GetNumCards(); void Shuffle(); void PrintCards(); void AddCardToDeck(Card* card); Card* RemoveTopCard();

private:

int numCards; Card* cards[MAXCARDS];

};
