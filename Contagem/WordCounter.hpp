/********************************/
#ifndef WORDCOUNT
#define WORDCOUNT
#include <map>
#include <vector>
#include <iostream>
#include <string>
#include "Word.hpp"
using namespace std;
/********************************/

class WordCounter {

  public:

    // Atributos
	Word *words;
	int size = 1;
    map<string, int> wordsMap;

    // Métodos
	WordCounter( int num_words ); // Construtor

	void addWord( string w );
	void print();

	~WordCounter(); // Destrutor


};

#endif