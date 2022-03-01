#ifndef MAIN_VIEW_H
#define MAIN_VIEW_H

#include "View.h"

class MainView : public View {
    private:
        Task* task;
    public:
        // The constructor initializes ncurses
        MainView();
        // The destructor de-initalizes ncurses
        ~MainView();
        virtual void draw();
        virtual void refresh();
}

#endif // MAIN_VIEW_H
