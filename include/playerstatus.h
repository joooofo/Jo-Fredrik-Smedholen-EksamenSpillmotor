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
    int LoseLife(int life);
    int liv;
};

#endif // PLAYERSTATUS_H
