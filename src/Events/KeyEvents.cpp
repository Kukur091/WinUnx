#include <iostream>
#include "../../include/Events/KeyEvents.hpp"
#include <string>

using namespace std;

void KeyEvents::KeyDetect(){ //organiser pour qu'il y ai qu'une instance dans consolevent, et que toutes les class puisse se communiquer le return cmd
    string ucmd;
    cin >> ucmd;
    KeyEvents::cmd = ucmd;
};

string KeyEvents::getCmd(){
    return cmd;
};