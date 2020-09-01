/********************************/
#include "WordCounter.hpp"
#include "Word.hpp"
using namespace std;
/********************************/

WordCounter::WordCounter( int num_words ) {

	words = new Word[num_words];

}

void WordCounter::addWord( string w ) {
    cout << "Adding word: " << w << endl;
}

void WordCounter::print() {
    cout << "Printing solemnly nothing!" << endl;

}


