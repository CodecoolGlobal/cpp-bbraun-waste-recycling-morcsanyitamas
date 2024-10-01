#pragma once

#include <string>

class PaperGarbage {
 public:
    std::string const name;
    bool isSqueezed;
    PaperGarbage(std::string name, bool isSqueezed);
    void squeeze();
};