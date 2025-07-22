#include <iostream>
#include "../../include/Events/KeyEvents.hpp"

using namespace std;
char* KeyEvents::KeyDetect(){ //organiser pour qu'il y ai qu'une instance dans consolevent, et que toutes les class puisse se communiquer le return cmd
    char* cmd;
    cin >> cmd;
    return cmd;
};