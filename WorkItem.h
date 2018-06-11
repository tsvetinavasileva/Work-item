//
// Created by tsvetina on 03.06.18.
//

#ifndef OOPWORKITEM_WORKITEM_H
#define OOPWORKITEM_WORKITEM_H
#include <ctime>


class WorkItem {
private:
    char* name;
public:
    WorkItem();
    WorkItem(const char* name);
    WorkItem(const WorkItem& other );
    WorkItem& operator= (const WorkItem& other);
    ~WorkItem();
    void setName(const char* name);
    virtual long endDate() const = 0;
    virtual const char* getName() const = 0;
    const char* _getName() const;
};


#endif //OOPWORKITEM_WORKITEM_H
