#pragma once

#include <string>

class MetalGarbage {
 public:
    std::string const name;
    bool isClean;
    MetalGarbage(std::string name, bool isClean);
    void clean();
};