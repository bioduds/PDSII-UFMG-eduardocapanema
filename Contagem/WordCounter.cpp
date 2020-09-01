/********************************/
#include "WordCounter.hpp"
#include "Word.hpp"
using namespace std;
/********************************/

WordCounter::WordCounter( int num_words ) {

	words = new Word[num_words];

}

void WordCounter::addWord( string w ) {
    
    pair<map<string, int>::iterator, bool> returnValue;
    returnValue = wordsMap.insert( pair<string, int>( w, size ) );
    
    //Check if map contains value
    if( returnValue.second == false ) {
        //Element already exists
        ++returnValue.first->second;
    }   

}

void WordCounter::print() {
    
    //Iterate elements and print words 
    map<string, int>::iterator itr;

    for( itr = wordsMap.begin(); itr != wordsMap.end(); ++itr ) {
        cout << itr->first << " ";
        cout << itr->second << '\n';
    }    

}


