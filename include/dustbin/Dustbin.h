#pragma once

#include <string>
#include <vector>
#include "PaperGarbage.h"
#include "PlasticGarbage.h"
#include "Garbage.h"

class Dustbin {
 private:
    std::string const color;
    std::vector<PaperGarbage> paperContent;
    std::vector<PlasticGarbage> plasticContent;
    std::vector<Garbage> houseWasteContent;
 public:
    Dustbin(std::string const& color);
    std::vector<PaperGarbage> const& getPaperContent();
    std::vector<PlasticGarbage> const& getPlasticContent();
    std::vector<Garbage> const& getHouseWasteContent();
    void throwOutGarbage(Garbage const& garbage);
    void throwOutPaperGarbage(PaperGarbage const& paperGarbage);
    void throwOutPlasticGarbage(PlasticGarbage const& plasticGarbage);
    void emptyContents();
};