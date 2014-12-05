#ifndef PLAYER_H
#define PLAYER_H

#include "OIS.h"
#include "Ogre.h"
#include <OgreMath.h>

using namespace Ogre;

class Player
{
public:
    Ogre::Entity *mEntity; /// Character entity
    Ogre::SceneManager *mSceneMgr;
    Ogre::SceneNode *mPlayerNode; /// Main character node mPlayer as it was a private member.
    Ogre::AnimationState *mAnimationState; /// Animationstate of character.

    // update for movement / input.
    void update (Real elapsedTime, OIS::Keyboard *input, OIS::Mouse *mouseInput); // maybe ill use modes to determine camerastate.
    void resetPos();



    Player(Ogre::String name, Ogre::SceneManager *sceneMgr);
    Ogre::Entity *getEntity() {
        return mEntity;

    }
};

#endif // PLAYER_H