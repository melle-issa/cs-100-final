#ifndef TASK_LIST_VIEW_H
#define TASK_LIST_VIEW_H

#include "View.h"

class TaskListView : public View {
    private:
        TaskList* task;
    public:
        virtual void draw();
        virtual void refresh();
}

#endif // TASK_LIST_VIEW_H
