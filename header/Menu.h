#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <vector>
#include <string>
#include <ostream>
#include "../header/TaskList.h"
#include "../header/Task.h"

using namespace std;

void menu(int input,TaskList &unsorted, vector<TaskList> &allLists);
TaskList* findTaskList(string inputName, vector<TaskList>& listToSearch);
int findTaskListIndex(string inputName, vector<TaskList> tempList);
void deleteTask(TaskList &unsorted, int tempInt, std::ostream &out);
#endif
