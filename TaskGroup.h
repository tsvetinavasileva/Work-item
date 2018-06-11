//
// Created by tsvetina on 03.06.18.
//

#ifndef OOPWORKITEM_TASKGROUP_H
#define OOPWORKITEM_TASKGROUP_H


#include "WorkItem.h"

class TaskGroup : public WorkItem{
private:
    int capacity;
    int size;
public:
    WorkItem** tasks;
public:
    TaskGroup();
    ~TaskGroup();
    void addTask(WorkItem* task);

    void print() const;

    long endDate() const override;

    const char *getName() const override;

};


#endif //OOPWORKITEM_TASKGROUP_H
