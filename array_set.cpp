//
// Created by tsvetina on 02.06.18.
//

#include "array_set.h"


bool ArraySet::member(int i) const {
    for(int j = 0; j < n; j++){
        if (elements[j] == i)
            return true;
    }
    return false;
}

int ArraySet::operator[](int i) const {
    return elements[i];
}

int ArraySet::length() const {
    return size;
}

bool ArraySet::operator<(const Set &other) const {
    return other.member(elements[0]) && other.member(elements[n-1]);
}

bool ArraySet::operator*(const Set &other) const {
    return other.member(elements[n-1]) || this->member(other[other.length()-1]);
}

Set &ArraySet::operator+=(const Set &other) {
    for(int i = 0; i < other.length(); i++){
        insert(other[i]);
    }
}

ArraySet::ArraySet(int n):n(n) {
    size = 0;
    elements = new int[n];
}

ArraySet::~ArraySet() {
 delete [] elements;
}

bool ArraySet::insert(int x) {
    if (size == n || member(x))
        return false;
    elements[size++] = x;

}
