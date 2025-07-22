#ifndef COMMANDS_HPP
#define COMMANDS_HPP

#include <string>

using namespace std;

class Commands{
    private:
        string command;        
    public:
        virtual void Command(string cmd);
        virtual string getCommand();
};


#endif