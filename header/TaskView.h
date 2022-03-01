#ifndef TASK_VIEW_H
#define TASK_VIEW_H

#include "View.h"

class TaskView : public View {
    private:
        Task* task;
    public:
        virtual void draw();
        virtual void refresh();
}

#endif // TASK_VIEW_H
