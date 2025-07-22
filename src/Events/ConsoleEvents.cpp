#include <iostream>
#include "../../include/Events/ConsoleEvents.hpp"
#include "../../include/Events/KeyEvents.hpp"

using namespace std;

void ConsoleEvents::Waiting() {
    KeyEvents key;
    cout << '>';
    key.KeyDetect();
};