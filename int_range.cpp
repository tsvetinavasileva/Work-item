//
// Created by tsvetina on 02.06.18.
//

#include "int_range.h"
#include <iostream>
#include <algorithm>


bool IntRange::member(int i) const {
    return i >= first && i <= last;
}

int IntRange::length() const {
    return last - first + 1;
}

bool IntRange::operator<(const Set &s) const {
    return s.member(first) && s.member(last);
}

bool IntRange::operator*(const Set &s) const {
    return s.member(last) || this->member(s[s.length()-1]);
}

Set &IntRange::operator+=(const Set& other) {
    int minFirst = std::min(first,other[0]);
    int maxLast = std::max(last,other[other.length()-1]);
    this->first = minFirst;
    this->last = maxLast;
    return *this;

}

IntRange::IntRange(int first, int last):first(first),last(last) {}

int IntRange::operator[](int i) const {
    return first + i;
};

