#include <iostream>
#include "../../../include/Commands/FileCommands/CreateFile.hpp"
#include "../../../include/Events/KeyEvents.hpp"
#include "../../../include/Events/ConsoleEvents.hpp"

using namespace std;

CreateFile::CreateFile(){ 
    CreateFile::command = "cat";
};

void CreateFile::Command(string cmd){
    cout << "test" << endl;
};

string CreateFile::getCommand(){
    return CreateFile::command;
};