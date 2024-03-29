#ifndef EXAM_EXERCISE_F16_H
#define EXAM_EXERCISE_F16_H

#include "Aircraft.h"

class F16 : public Aircraft
{
public:
    F16(int aircraftAmmunition, int ammunitionCapacity, int baseDamage);

    F16();

    std::string getType() override;

    bool isPriority() override;

};


#endif //EXAM_EXERCISE_F16_H
