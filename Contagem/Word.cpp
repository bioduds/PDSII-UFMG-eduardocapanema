#include "Word.hpp"

Word::Word () {
	this->word = "";
	this->count = 0;
}

void Word::incrementFrequency() {
	count += 1;
}