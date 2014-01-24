#include <iostream>
#include<vector>
#include<string>
using namespace std;
#include "Sockpuppet.h"
#include "Msgcreator.h"

void Msgcreator::readmessage(vector<string>&messages){
	string messagetemp;
	cin.getline >> messagetemp;
	Msgcreator::addtovector(messages,messagetemp);


};


void Msgcreator::addtovector(vector<string>&messages, string message){
	messages.push_back(message);

};

void Msgcreator::printlog(vector<std::string>&messages){

	for (int i = 0; i < messages.size(); i++){
		cout << messages[i] << endl;
	}


}