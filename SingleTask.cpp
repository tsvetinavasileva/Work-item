//
// Created by tsvetina on 03.06.18.
//

#include "SingleTask.h"

SingleTask::SingleTask() {
    startDate = std::time(nullptr);
    duration = 0;

}

SingleTask::SingleTask(const char *name, std::time_t startDate, long duration)
        : WorkItem(name),startDate(startDate),duration(duration) {

}

long SingleTask::endDate() const {
    return startDate + duration;
}

const char *SingleTask::getName() const {
    return _getName();
}
