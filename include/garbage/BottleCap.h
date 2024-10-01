#pragma once

#include "PlasticGarbage.h"

class BottleCap {
 public:
    std::string const name;
    std::string const color;
    bool isClean;
    void clean();
    BottleCap(std::string name, bool isClean, std::string color);
};