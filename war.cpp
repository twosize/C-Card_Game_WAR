#include "war.hpp"

War::War(){} void War::assignCards(Deck& p) {

for (int i = 0; i < 26; i++)

{

toPlay.AddCardToDeck(p.RemoveTopCard());

} } void War::addCardToToPlay(Card * c) {

toPlay.AddCardToDeck(c); } void War::addCardToPlayed(Card * c) {

played.AddCardToDeck(c); } void War::addCardToInPlay(Card * c) {

inPlay.AddCardToDeck(c); } Card* War::getCardFromToPlay() {

return toPlay.RemoveTopCard(); } Card* War::getCardFromPlayed() {

return played.RemoveTopCard(); } Card* War::getCardFromInPlay() {

return inPlay.RemoveTopCard(); } Deck War::getToPlay() {

return toPlay; } Deck War::getPlayed() {

return played; } Deck War::getInPlay() {

return inPlay; }
