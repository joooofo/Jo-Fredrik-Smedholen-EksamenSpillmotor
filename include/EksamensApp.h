#ifndef __EksamensApp_h_
#define __EksamensApp_h_

#include "OgreFramework.h"
#include "Player.h"
#include "playerStatus.h"
#include "stdlib.h"


class EksamensApp : public OgreFramework
{
public:
    EksamensApp(void);
    virtual ~EksamensApp(void);

    void createCamera();
protected:
    virtual void createScene(void);
    virtual bool nextLocation(void);
    virtual bool keyPressed( const OIS::KeyEvent &arg );
    virtual bool keyReleased( const OIS::KeyEvent &arg );
    virtual bool mouseMoved( const OIS::MouseEvent &arg );



    Ogre::Real mDistance;
    Ogre::Vector3 mDirection;
    Ogre::Vector3 mDestination;
    std::deque<Ogre::Vector3> mWalkList;
    int mListIterator;
    Ogre::Real mEnemyWalkSpeed;
    Ogre::Real mPlayerWalkSpeed;
    Ogre::SceneNode *mEnemyNode;

    // Playernode -
    Ogre::SceneNode* playerNode;

    // GoalNode - will be removed if i get the time.
    Ogre::SceneNode* mGoalNode;


    Player *player;
    PlayerStatus *playerStatus;
    //Camera node
    SceneNode *mCameraNode;

    int life = 2;
    Ogre::SceneNode* mPickupNode1;
    Ogre::SceneNode* mPickupNode2;
    Ogre::SceneNode* mPickupNode3;
    Ogre::SceneNode* mPickupNode4;


    SceneManager *sceneMgr;

    int mPickups;
     float canGetHit = 1.0f;

    Ogre::AnimationState *mAnimationState;

    Ogre::ParticleSystem* mWinParticles;

    void createFrameListener();
    bool frameRenderingQueued(const Ogre::FrameEvent &evt);

    //walk parameters
    bool forward;
    bool backwards;
    bool left;
    bool right;
};

#endif // #ifndef __EksamensApp_h_
