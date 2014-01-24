#include <iostream>
#include<vector>
#include<string>

//custom classes
#include "Sockpuppet.h"
#include "Msgcreator.h"
// to prevent constant std:: unary scope operations
//test comment
//test comment 3
using namespace std;



int main(void){
    vector<string> messages;
    Msgcreator *msgc = new Msgcreator();

    msgc->readmessage(messages);
    msgc->printlog(messages);


    return 0;
};