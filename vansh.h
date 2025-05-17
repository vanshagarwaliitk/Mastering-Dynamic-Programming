// vansh.h
#ifndef VANSH_H // If not defined
#define VANSH_H  // define VANSH_H here

#include <iostream>
using namespace std;
void vansh_print(const string& msg) {
    std::cout << "From vansh: " << msg << std::endl;
}

#endif // Once defined, Do not define it next time , simply use it.