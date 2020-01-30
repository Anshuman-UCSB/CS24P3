#ifndef BAG_H
#define BAG_H
#include <cstdlib>
#include "word.h"

using namespace std;

class bag{
public:
    bag();
    
    void insert(string w);
    
    void print();
private:
    word data[1000];
    int used;
};
#endif
