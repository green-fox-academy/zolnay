#include "Tree.h"

Tree::Tree(int thirstLevel, float absorbtion, const std::string &color) : Plant(0,0.40, color)
{}

std::string Tree::getPlantType()
{
    return "Tree";
}
