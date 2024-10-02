#include <iostream>
#include "BottleCapException.h"

using namespace std;

BottleCapException::BottleCapException(std::string const& msg) : msg(msg) {}

void BottleCapException::print() const {
    cerr << msg << endl;
}