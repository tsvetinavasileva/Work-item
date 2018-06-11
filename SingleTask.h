//
// Created by tsvetina on 03.06.18.
//

#ifndef OOPWORKITEM_SINGLETASK_H
#define OOPWORKITEM_SINGLETASK_H


#include "WorkItem.h"
#include <ctime>

class SingleTask : public WorkItem {
private:
    std::time_t startDate;
    long duration;
public:
    SingleTask();
    SingleTask(const char* name,std::time_t startDate, long duration);
    long endDate() const override;
    const char *getName() const override ;

};


#endif //OOPWORKITEM_SINGLETASK_H
