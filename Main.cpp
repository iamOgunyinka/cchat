#include <iostream>
#include <vector>
#include <string>
#include <memory>
//custom classes
#include "Sockpuppet.h"
#include "Msgcreator.h"
// to prevent constant std:: unary scope operations
//test comment
//test comment 3
using namespace std;



int main(void){
    vector<string> messages;
    std::shared_ptr<Msgcreator> msgc = std::make_shared<Msgcreator>();
    
    msgc->readmessage(messages);
    msgc->printlog(messages);

    return 0;
};
