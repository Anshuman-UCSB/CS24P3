#include "word.h"
word::word(){
    wcount = 0;
}

void word::setWord(string w){
    wdata = w;
}

string word::getWord() {
    return wdata;
}

void word::setCount(int value) {
    wcount = value;
}

void word::incCount() {
    wcount = wcount + 1;
}

int word::getCount() {
    return wcount;
}
