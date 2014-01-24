#ifndef Msgcreator_H
#define Msgcreator_H
#endif

#include <iostream>
#include<vector>
#include<string>

class Msgcreator{
public:	void readmessage(vector<std::string>&messages);
		void addtovector(vector<std::string>&messages, std::string message);
		void printlog(vector<std::string>&messages);
private: 
	std::string message;


};