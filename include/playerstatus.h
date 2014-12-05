#ifndef PLAYERSTATUS_H
#define PLAYERSTATUS_H


#include "OIS.h"
#include "Ogre.h"
#include <OgreMath.h>
#include "stdlib.h"

class PlayerStatus
{
public:
    PlayerStatus();
    void LoseLife();
    int liv = 3;
};

#endif // PLAYERSTATUS_H
