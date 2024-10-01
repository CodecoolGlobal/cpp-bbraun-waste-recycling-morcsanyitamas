# pragma once

#include <string>
class DustbinContentError {
 private:
    std::string const msg;
 public:
    DustbinContentError(const std::string &msg);
    void print() const;
};