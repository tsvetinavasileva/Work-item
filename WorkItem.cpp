//
// Created by tsvetina on 03.06.18.
//

#include <cstring>
#include "WorkItem.h"

WorkItem::WorkItem() {

    name = nullptr;
}

WorkItem::WorkItem(const char *name)
        :name(nullptr) {
    setName(name);
};

WorkItem::WorkItem(const WorkItem &other):name(nullptr) {
    setName(other.name);
}

WorkItem &WorkItem::operator=(const WorkItem &other) {
    if (this != &other){
        setName(other.name);
    }
    return *this;
}

WorkItem::~WorkItem() {
    delete [] name;
}

void WorkItem::setName(const char *name) {
    delete [] this->name;
    this->name = nullptr;
    if (name){
        this->name = new char[strlen(name) + 1];
        strcpy(this->name,name);
    }
}


const char *WorkItem::_getName() const {
    return name;
}
