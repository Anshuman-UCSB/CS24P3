#include "bag.h"
#include <iostream>

bag::bag(){
    used =0;
}


// This is the main function to insert the words in
// the alphabetical order.
void bag::insert(string w){
    // Scan the bag in the lexicographical order until
    // you find the word or there are no more words.
    int i = 0;
    while ((i < used) && (data[i].getWord() < w)){
        i++;
    }
    // check if w is found; if yes then just
    // increment the count.
    if ((i < used) && (data[i].getWord() == w)){
        // word is already in the list
        data[i].incCount();
        return;
    }
    // The next case is: w not found.
    // If the not found is reached with "i < used"
    // that means we have to insert w in the middle
    // by shifting all the larger words to the right
    // by one slot. Otherwsie, w is added to the last
    // slot.
    if (i < used){
        for (int j = used + 1; j > i; j--){
            data[j] = data[j-1];
        }
    }
    // increment used to account for newly inserted
    // word
    used = used + 1;
    // Index i is pointing to the slot where w has to
    // be inserted.
    data[i].setWord(w);
    data[i].setCount(1);
    return;
}

void bag::print(){
    for (int i =0; i < used; i++){
        cout << data[i].getWord() << "::" << data[i].getCount() << endl;
    }
}
