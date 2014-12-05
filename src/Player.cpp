#include "player.h"

Player::Player(Ogre::String name, Ogre::SceneManager *sceneMgr)
{
    mName = name;
    mSceneMgr = sceneMgr;

    // Create the player

    mEntity = mSceneMgr->createEntity(name + "_player", "penguin.mesh"); //

    // Create a SceneNode and attach the Entity to it
    mPlayerNode = mSceneMgr->getRootSceneNode()->createChildSceneNode(name, Ogre::Vector3(-40.0f, 5.0f, 0.0f)); // + "_penguinNode"
    mPlayerNode->attachObject(mEntity);
    std::cout << name << std::endl;
    mPlayerNode->scale(0.2f, 0.2f, 0.2f);/// PLAYER SCALE

    mPlayerNode->rotate(Ogre::Vector3::UNIT_Y, Ogre::Degree(90)); /// PLAYER ROTATION
    // Set walking animation

    mAnimationState = mEntity->getAnimationState("amuse");
    mAnimationState->setLoop(true);
    mAnimationState->setEnabled(true);
   // SHADOWS
    mEntity->setCastShadows(true);

}

void Player::update (Real elapsedTime, OIS::Keyboard *input, OIS::Mouse *mouseInput)
{

}
void Player::resetPos()
{

}
