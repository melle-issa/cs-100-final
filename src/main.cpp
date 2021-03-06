#include "../header/TaskList.h"
#include "../header/Task.h"
#include "../header/Goal.h"
#include "../header/Menu.h"
#include "../header/ColorManager.h"
#include "../header/InputHelper.h"
#include "../header/View.h"
#include <stdlib.h>
#include <iostream>
#include <ostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    TaskList unsorted = TaskList("Unsorted");
    vector<TaskList> allLists;
    int input = 0;
    // start
    clear();
    printMain(std::cout, allLists, unsorted);
    std::cout << "What would you like to do?" << std::endl << "1. Create new list/edit existing list" << std::endl
    << "2. Create new task/edit existing task" << std::endl << "3. Print list" << std::endl <<  "4. Filter"
        << std::endl << "5. Quit" << std::endl << std::endl;
    input = readInt(cin, cout);
    while(input != 5){
        printMain(std::cout, allLists, unsorted);
        menu(input,unsorted,allLists);
        std::cout << "What would you like to do?" << std::endl << "1. Create new list/edit existing list" << std::endl 
        << "2. Create new task/edit existing task" << std::endl << "3. Print list" << std::endl <<  "4. Filter" 
        << std::endl << "5. Quit" << std::endl << std::endl;
        input = readInt(cin, cout);
    }
    unsorted.free();
    for (int i = 0; i < allLists.size(); ++i) {
        allLists.at(i).free();
    }
    return 0;
}
