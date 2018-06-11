//
// Created by tsvetina on 02.06.18.
//

#ifndef OOPSET_ARRAY_SET_H
#define OOPSET_ARRAY_SET_H



#include "set.h"

class ArraySet : public Set{
private:
    int n;
    int size;
    int *elements;
public:
    ArraySet(int n);
    ~ArraySet();
    bool member(int i) const override;

    int operator[](int i) const override;

    int length() const override;

    bool operator<(const Set &other) const override;

    bool operator*(const Set &other) const override;

    Set &operator+=(const Set &other) override;

    bool insert(int x);


};


#endif //OOPSET_ARRAY_SET_H
