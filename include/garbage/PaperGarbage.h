#pragma once

#include <string>

class PaperGarbage {
private:
    std::string const name;
public:
    bool isSqueezed;
    PaperGarbage(std::string const& name, bool isSqueezed);
    void squeeze();
};