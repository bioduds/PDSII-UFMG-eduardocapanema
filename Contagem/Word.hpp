/********************************/
#ifndef WORD
#define WORD
#include <string>
using namespace std;
/********************************/

class Word {

  public:

    // Atributos
	string word;
	int count;

    // Métodos
	Word(); // Construtor

	void incrementFrequency();

};

#endif
