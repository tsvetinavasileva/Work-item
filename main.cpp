//
// Created by tsvetina on 02.06.18.
//

#include <iostream>

#include "int_range.h"

bool mon(Set* sets[], int n){
    for (int i = 1; i < n; i++) {
        int prevLastIndex = sets[i-1]->length()-1;
        std::cout << (*sets[i-1])[prevLastIndex] << std::endl;
        if ((*sets[i])[0] <= (*sets[i-1])[prevLastIndex])
            return false;
    }
    return true;
}

int main(){
        while(true) {
            IntRange *intRange = new IntRange(1, 5);
            ArraySet *arraySet = new ArraySet(3);
            arraySet->insert(6);
            arraySet->insert(7);
            arraySet->insert(9);
            arraySet->insert(9);
            int n = 2;
            Set **sets = new Set *[n];
            sets[0] = intRange;
            sets[1] = arraySet;


            std::cout << mon(sets, n);

            delete[] sets;
            delete intRange;
            delete arraySet;
        }

}
