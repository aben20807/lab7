#include<cstdlib>
#include"genMino.h"
#define NUM_MINO 7
#define MINO_I 0
#define MINO_J 1
#define MINO_S 2
#define MINO_O 3
#define MINO_T 4
#define MINO_L 5
#define MINO_Z 6

Mino *genMino()
{
    int mino_type;
    Mino *ptr;

    mino_type = random()%NUM_MINO;

    switch(mino_type)
    {
        case MINO_I:
            ptr = new MinoI;
            break;
        case MINO_J:
            ptr = new MinoJ;
            break;
        case MINO_S:
            ptr = new MinoS;
            break;
        case MINO_O:
            ptr = new MinoO;
            break;
        case MINO_T:
            ptr = new MinoT;
            break;
        case MINO_L:
            ptr = new MinoL;
            break;
        case MINO_Z:
            ptr = new MinoZ;
            break;
    }
    return ptr;
}
