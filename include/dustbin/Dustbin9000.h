#pragma once

#include "Dustbin.h"
#include "MetalGarbage.h"
#include "BottleCap.h"

class Dustbin9000 {
 private:
    std::string const color;
    std::vector<PaperGarbage> paperContent;
    std::vector<PlasticGarbage> plasticContent;
    std::vector<Garbage> houseWasteContent;
    std::vector<MetalGarbage> metalContent;
    std::vector<BottleCap> bottleCaps;
 public:
    std::vector<PaperGarbage> const& getPaperContent();
    std::vector<PlasticGarbage> const& getPlasticContent();
    std::vector<Garbage> const& getHouseWasteContent();
    void throwOutGarbage(Garbage const& garbage);
    void throwOutPaperGarbage(PaperGarbage const& paperGarbage);
    void throwOutPlasticGarbage(PlasticGarbage const& plasticGarbage);
    void emptyContents();

    std::vector<MetalGarbage> const& getMetalContent();
    std::vector<BottleCap> const& getBottleCaps();
    void throwOutMetalGarbage(MetalGarbage const& metalGarbage);
    void throwOutBottleCap(BottleCap const& bottleCap);
};