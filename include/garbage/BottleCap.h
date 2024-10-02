#pragma once

#include "PlasticGarbage.h"

class BottleCap {
private:
    std::string const name;
    std::string const color;
public:
    std::string const& getColor() const;
    bool isClean;
    void clean();
    BottleCap(std::string const& name, bool isClean, std::string const& color);
};