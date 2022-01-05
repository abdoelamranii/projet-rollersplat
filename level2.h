

#ifndef __LEVEL_2_H__
#define __LEVEL_2_H__

#include "cocos2d.h"

USING_NS_CC;

class level2 : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    static cocos2d::DrawNode* drawNode;
    static cocos2d::Color4F color;
    static cocos2d::TintTo* action;


    virtual bool init();

    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);

    Vector<Sprite*> passage1;

    int counter = 0;
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);
    void update(float dt);
    void GoToGameScene(Ref* pSender);
    void showMenu();

};

#endif // __HELLOWORLD_SCENE_H__
