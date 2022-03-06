#include "../header/Filter.h"
#include "../header/TaskList.h"
#include "../header/Task.h"
#include "../header/Goal.h"

using namespace std;

void filter(TaskList entry, int answer, string searchVal,std::ostream &out){
   // int answer;
   // std::string answer2;
   // int answer3;
   // std::cout << "Which would you like to sort by?\n1. Due Date\n2.Classification\n3. Priority\n4.Due soon" << std::endl;
   // std::cin >> answer;
    std::stringstream output;
    if(answer == 1){
     //   std::cout << "Enter month as following: XX" << std::endl; //we haven't validated answers yet
       // std::cin >> answer2;

        for(int i = 0; i < entry.getList().size(); i++){
            Task *tempTask = dynamic_cast<Task *>(entry.getList().at(i));
            std::string temp = tempTask->getDueDate();
            std::string subTemp = temp.substr(0,2);
            if(subTemp == searchVal){
                tempTask->print(out);  
            }
        }
    }
    else if(answer == 2){
     //   std::cout << "Enter the classifiaction" << std::endl;
       // std::cin.ignore();
       // getline(std::cin, answer2);

        for(int i = 0; i < entry.getList().size(); i++){
             Task *tempTask = dynamic_cast<Task *>(entry.getList().at(i));
            std::string tempClass = tempTask->getClassification();
            if(tempClass == searchVal){
                tempTask->print(out); 
            }
        }
    }
    else if(answer == 3){
     //   std::cout << "Enter the priority" << std::endl;
       // std::cin >> answer3;

        for(int i = 0; i < entry.getList().size(); i++){
             Task *tempTask = dynamic_cast<Task *>(entry.getList().at(i));
            int temp = tempTask->getPriority();
            if(temp == stoi(searchVal)){
                tempTask->print(out);  
            }
        }
    }
    else if(answer == 4){
     //   std::cout << "Enter today's date: XX/YY/ZZ" << std::endl;
       // std::cin >> answer2;

        std::string month = searchVal.substr(0,2);
        std::string day = searchVal.substr(2,4);
        for(int i = 0; i < entry.getList().size(); i++){
            Task *tempTask = dynamic_cast<Task *>(entry.getList().at(i));
            std::string temp = tempTask->getDueDate();
            std::string tempMonth = temp.substr(0,2);
            if(tempMonth == month){
                std::string tempDay = temp.substr(2,4);
                int num1, num2;
                num1 = stoi(day);
                num2 = stoi(tempDay);

                if(num1 - num2 <= 7){
                    tempTask->print(out); 
                }
            }
        }
    }   
}
