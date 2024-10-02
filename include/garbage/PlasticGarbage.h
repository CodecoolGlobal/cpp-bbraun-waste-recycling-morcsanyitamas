#pragma once

#include <string>

class PlasticGarbage {
private:
    std::string const name;
public:
    bool isClean;
    PlasticGarbage(std::string const& name, bool isClean);
    void clean();
};