//
// Created by tsvetina on 02.06.18.
//

#ifndef OOPSET_INTRANGE_H
#define OOPSET_INTRANGE_H


#include "array_set.h"

class IntRange : public Set {
private:
    int first;
    int last;
public:
    IntRange(int first = 0, int last = 0);

    bool member(int i) const override;

    int length() const override;

    bool operator<(const Set &other) const override;

    bool operator*(const Set &other) const override;

    Set &operator+=(const Set& other) override;

    int operator[](int i) const override;
};


#endif //OOPSET_INTRANGE_H
