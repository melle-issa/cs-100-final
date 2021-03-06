#ifndef TASK_H
#define TASK_H

#include <iostream>
#include <vector>
#include <string>
#include <ostream>
#include "../header/TaskList.h"
#include "../header/Goal.h"

using namespace std;

class Task: public Goal{
    private:
        std::string name;
        std::string description;
        int priority; // assuming 1 is the highest priority
        std::string classification;
        int duration; // number of days
        std::string dueDate;
        bool completed;
        int inProgress; // on a scale of 1-10, 5 is half progress made?
        bool deleted; // lets main know that task has been deleted 
    public:
        Task();
        Task(std::string n, std::string d, int val, int dur, std::string date, std::string label, bool check, int progress);

        void setName(std::string n);
        void setDescription(std::string d);
        void setPriority(int val);
        void setDuration(int dur);
        void setDueDate(std::string date);
        void setClassification(std::string label);
        void setCompletion(bool check);
        void setProgress(int progress);
        void setDeleted(bool input);


        std::string getName();
        std::string getDescription();
        int getPriority();
        int getDuration();
        std::string getDueDate(); 
        std::string getClassification();
        bool getCompletion();
        int getProgress();   
        bool getDeleted();


        virtual void print(std::ostream &out);
        virtual void edit(std::ostream &out,int choice,std::string update);
        void deleteObj(std::ostream &out);
};

Goal* taskFromInput();

#endif
