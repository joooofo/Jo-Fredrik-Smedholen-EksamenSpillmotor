#include "player.h"

Player::Player(Ogre::String name, Ogre::SceneManager *sceneMgr)
{

    // Create the player
    Ogre::Entity* pingu = mSceneMgr->createEntity("_penguin", "penguin.mesh");
    pingu->setCastShadows(true);
    // Create a SceneNode and attach the Entity to it
    mPlayerNode = mSceneMgr->getRootSceneNode()->createChildSceneNode("_penguinNode", Ogre::Vector3(-40.0f, 5.0f, 0.0f));
    mPlayerNode->attachObject(pingu);
    mPlayerNode->scale(0.2f, 0.2f, 0.2f);
    mPlayerNode->rotate(Ogre::Vector3::UNIT_Y, Ogre::Degree(90));
    // Set walking animation
    mAnimationState = pingu->getAnimationState("amuse");
    mAnimationState->setLoop(true);
    mAnimationState->setEnabled(true);
}

void Player::update (Real elapsedTime, OIS::Keyboard *input, OIS::Mouse *mouseInput)
{

}
void Player::resetPos()
{

}
