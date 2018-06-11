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

