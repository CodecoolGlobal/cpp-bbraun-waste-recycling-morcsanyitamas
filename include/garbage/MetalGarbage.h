#pragma once

#include <string>

class MetalGarbage {
private:
    std::string const name;
public:
    bool isClean;
    MetalGarbage(std::string const &name, bool isClean);
    void clean();
};