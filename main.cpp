#include <iostream>
#include "SingleTask.h"
#include "TaskGroup.h"

long projectEnd(WorkItem** tasks, int n){
    long max = tasks[0]->endDate();
    for(int i = 0; i < n; i++){
        if(tasks[i]->endDate() > max){
            max = tasks[i]->endDate();
        }
    }
    return max;
}

int main() {
    while (true) {
        WorkItem *t1 = new SingleTask("t1", std::time(nullptr), 1);
        WorkItem *t2 = new SingleTask("t2", 1528062939, 3000);
        TaskGroup *t3 = new TaskGroup;
        t3->addTask(t1);
        t3->addTask(t2);
        t3->print();
        std::cout << t3->endDate() << std::endl;
        std::cout << projectEnd(t3->tasks, 2) << std::endl;

        delete t1;
        delete t2;
        delete t3;
    }

}
