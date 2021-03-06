/**
 * @file main.cc
 * @brief 运行入口文件
 */

#include "backend_api.h"

#include <map>
#include <vector>
#include <string>
#include <iostream>

using std::vector;
using std::string;
using std::map;
using std::cout;
using std::endl;


int main(int argc, char * argv[]) {
    if (argc <= 1) {
        cout << "please specify an input file!" << endl << endl << endl;
    }
    else {
        string path = argv[1];
        interpreter(path);
    }
}
