#ifndef WORD_H
#define WORD_H
#include <cstdlib>
#include <string>

using namespace std;

class word{
 public:
    word();
    void setWord(string w);
    string getWord();
    void setCount(int value);
    int getCount();
    void incCount();
 private:
  string wdata;
  int wcount;
};

#endif
