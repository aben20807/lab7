#ifndef MINO_O_H
#define MINO_O_H
#include "Mino.h"
#include <iostream>
using namespace std;
class MinoO:public Mino
{
    public:
        MinoO();
        virtual void paint();
};
#endif
