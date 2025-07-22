#include <iostream>
#include <windows.h>
#include "include/Events/ConsoleEvents.hpp"

int main(){
    ConsoleEvents console;
    while(true){
        console.Waiting();
        Sleep(0);
    }
    return 0;
}