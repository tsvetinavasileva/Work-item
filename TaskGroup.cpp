//
// Created by tsvetina on 03.06.18.
//

#include <iostream>
#include "TaskGroup.h"

TaskGroup::TaskGroup() {
    capacity = 200;
    tasks = new WorkItem*[capacity];
    size = 0;
}

void TaskGroup::addTask(WorkItem *task) {
    if (size == capacity) {
        std::cout << "Full" << std::endl;
    }
    else{
        tasks[size++] = task;
    }
}

void TaskGroup::print() const {
    for(int i = 0; i < size; i++){
        std::cout << tasks[i]->_getName() << std::endl;
    }
}

long TaskGroup::endDate() const {
    long max = tasks[0]->endDate();
    for(int i = 0; i < size; i++){
        if(tasks[i]->endDate() > max){
            max = tasks[i]->endDate();
        }
    }
    return max;

}

const char *TaskGroup::getName() const {
    return _getName();
}

TaskGroup::~TaskGroup() {
    delete [] tasks;
}


