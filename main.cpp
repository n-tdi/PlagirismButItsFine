#include <iostream>
#include <string>
using namespace std;

int main() {
  //inputs, in chronological order.
  string one;
  string two;
  string three;
  string FOUR;
  string five;
  string six;
  string seven;
  string eight;
  string nine;
  string ten;
  string eleven;
  string twelve;
  string thirteen;
  string fourteen;
  string fifteen;
  string sixteen;
  string seventeen;


  //notification
  cout << "\n Any questions on parts of speech will be answered at https://www.lexico.com/grammar/word-classes-or-parts-of-speech for clafirication";


  //question time
  cout << "\nAny time, from 12 AM to 11:59 PM: ";
  cin >> one;

  cout << "\nAny time (i.e. morning, noon, evening, night): ";
  cin >> two;

  cout << "\nA noun: ";
  cin >> three;

  cout << "\nAn adjective: ";
  cin >> FOUR;

  cout << "\nA noun: ";
  cin >> five;

  cout << "\nA verb: ";
  cin >> six;

  cout << "\nA conjunction: ";
  cin >> seven;

  cout << "\nAnother conjunction, or the same: ";
  cin >> eight;

  cout << "\nA pronoun (in the English language, not that attack helicopter nonsense): ";
  cin >> nine;

  cout << "\nAn adverb: ";
  cin >> ten;

  cout << "\nAn adjective: ";
  cin >> eleven;

  cout << "\nA preposition: ";
  cin >> twelve;

  cout << "\nAn exclamation: ";
  cin >> thirteen;

  cout << "\nThe name of any person you know/know of, they can even be fictional, just give me a name dangit: ";
  cin >> fourteen;

  cout << "\nAny place on Earth or in the solar system: ";
  cin >> fifteen;

  cout << "\nA noun: ";
  cin >> sixteen;

  cout << "\nAnd last but not least, an adjective: ";
  cin >> seventeen;


  //The finished madlib!
  cout << "\nYou wake up at " << one << " in the " << two << ". You begin to " << three << " right after you " << FOUR << ". Upon finishing " << five << "ing, you head to the " << six << " to start " << seven << "ing. Once you are all done " << eight << "ing, you " << nine << " out the " << ten << ". Later, at " << eleven << ", you " << twelve << " your " << thirteen << "! Later, back at " << fourteen << ", you " << fifteen << " your things and head to " << sixteen << ", " << seventeen << ". \n I hope you enjoyed this Mad-Lib. In the case you didn't, I'm glad that was the outcome as well.";
  cout << R"(
                   .-.
                  / /
                 / |
   |\     ._ ,-""  `.
   | |,,_/  7        ;
 `;=     ,=(     ,  /
  |`q  q  ` |    \_,|
 .=; <> _ ; /  ,/'/ |
';|\,j_ \;=\ ,/   `-'
    `--'_|\  )
   ,' | /  ;'
  (,,/ (,,/       
)" << '\n';   
}