#ifndef GARDEN_FLOWER_H
#define GARDEN_FLOWER_H

#include "Plant.h"
class Flower : public Plant {
public:
    Flower( const std::string &color);

    std::string getPlantType() override;


public:
};


#endif //GARDEN_FLOWER_H
