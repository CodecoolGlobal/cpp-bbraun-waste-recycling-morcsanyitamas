#pragma once

#include <string>

class BottleCapException {
private:
   std::string const msg;
public:
   BottleCapException(std::string const& msg);
   void print() const;
};