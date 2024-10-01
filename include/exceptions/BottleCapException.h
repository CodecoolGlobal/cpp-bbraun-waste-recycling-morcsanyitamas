#pragma once

#include <string>

class BottleCapException {
 private:
    std::string const msg;
 public:
    std::string const& getMsg() const;
    BottleCapException(const std::string &msg);
    void print() const;
};