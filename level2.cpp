

#include "level2.h"

USING_NS_CC;

Sprite* sprite;
Sprite* _player;
Sprite* _player1;
Sprite* _player2;
Sprite* _player3;
Sprite* _player4;
Sprite* _player0;
Sprite* _DrawNode;
Sprite* passage;

Sprite* action;
float goUp = 0;
Scene* level2::createScene()
{
    // create the scene with physics enabled
    auto scene = Scene::createWithPhysics();

    // set gravity

    // optional: set debug draw
    scene->getPhysicsWorld()->setGravity(Vec2(0, 0));

    auto layer = HelloWorld::create();
    scene->addChild(layer);

    return scene;
    //return HelloWorld::create();
}
//const int screenWidth = 500;
//const int screenHeight = 350;
// Print useful error message instead of segfaulting when files are not there.
static void problemLoading(const char* filename)
{
    printf("Error while loading: %s\n", filename);
    printf("Depending on how you compiled you might have to add 'Resources/' in front of filenames in HelloWorldScene.cpp\n");
}

// on "init" you need to initialize your instance
bool level2::init()
{
    //////////////////////////////
    // 1. super init first
    if (!Layer::init())
    {
        return false;
    }


    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    ///////////////////////////////////



    // 2
    //auto origin = Director::getInstance()->getVisibleOrigin();
    //auto winSize = Director::getInstance()->getVisibleSize();
    // 3
    auto background = DrawNode::create();
    background->drawSolidRect(origin, visibleSize, Color4F(0.6, 0.6, 0.6, 1.0));
    this->addChild(background);
    // 4
    for (int i = 0; i < 5; i++) {
        passage = Sprite::create("T.png");
        passage->setContentSize({ 74, 78 });
        passage->setPosition(Vec2(visibleSize.width / 4 + i * 70, 333));
        passage1.pushBack(passage);
        this->addChild(passage);
    }
    for (int i = 0; i < 6; i++) {
        passage = Sprite::create("T.png");
        passage->setContentSize({ 74, 78 });
        passage->setPosition(Vec2(visibleSize.width / 4 + i * 70, 485));
        passage1.pushBack(passage);

        this->addChild(passage);
    }

    for (int i = 0; i < 3; i++) {
        passage = Sprite::create("T.png");
        passage->setContentSize({ 74, 78 });
        passage->setPosition(Vec2(175, visibleSize.height / 2.36 + i * 70));
        passage1.pushBack(passage);

        this->addChild(passage);
    }
    for (int i = 0; i < 2; i++) {
        passage = Sprite::create("T.png");
        passage->setContentSize({ 74, 78 });
        passage->setPosition(Vec2(525, visibleSize.height / 1.97 + i * 70)); \
            passage1.pushBack(passage);

        this->addChild(passage);
    }
 for (int i = 0; i < 2; i++) {
        passage = Sprite::create("T.png");
        passage->setContentSize({ 74, 78 });
        passage->setPosition(Vec2(525, visibleSize.height / 1.97 + i * 70)); \
            passage1.pushBack(passage);

        this->addChild(passage);
    }

 for (int i = 0; i < 2; i++) {
        passage = Sprite::create("T.png");
        passage->setContentSize({ 74, 78 });
        passage->setPosition(Vec2(525, visibleSize.height / 1.97 + i * 70)); \
            passage1.pushBack(passage);

        this->addChild(passage);
    }




    /// //////////////////////////////////////
    _player0 = Sprite::create("OIP.png");
    _player0->setContentSize({ 70, 70 });
    auto physicbody = PhysicsBody::createBox(_player0->getContentSize());
    //// _player->setPosition(Vec2(50, visibleSize.height / 2 ));
    _player0->setPhysicsBody(physicbody);
    physicbody->setDynamic(false);
    ////_player->setPosition(Vec2(visibleSize.width * (0.1), visibleSize.height * (0.5)));
    _player0->setPosition(Vec2(525, visibleSize.height / 2.38));
    this->addChild(_player0, 1);

    for (int i = 0; i < 4; i++) {
        _player = Sprite::create("OIP.png");
        _player->setContentSize({ 74, 78 });
        auto physicbody = PhysicsBody::createBox(_player->getContentSize());
        //// _player->setPosition(Vec2(50, visibleSize.height / 2 ));
        _player->setPhysicsBody(physicbody);
        physicbody->setDynamic(false);
        ////_player->setPosition(Vec2(visibleSize.width * (0.1), visibleSize.height * (0.5)));
        _player->setPosition(Vec2(visibleSize.width / 2.85 + i * 70, 409));
        this->addChild(_player, 1);
    }


    for (int i = 0; i < 5; i++) {
        _player1 = Sprite::create("OIP.png");
        _player1->setContentSize({ 70, 70 });
        auto physicbody = PhysicsBody::createBox(_player1->getContentSize());
        //physicbody->setCollisionBitmask(2);
        //_player1body->setContactTestBitmask(true);
        _player1->setPhysicsBody(physicbody);
        physicbody->setDynamic(false);
        _player1->setPosition(Vec2(105, visibleSize.height / 3 + i * 70));
        this->addChild(_player1, 1);
    }
    for (int i = 0; i < 5; i++) {
        _player2 = Sprite::create("OIP.png");
        _player2->setContentSize({ 70, 70 });
        auto physicbody = PhysicsBody::createBox(_player2->getContentSize());
        //physicbody->setCollisionBitmask(2);
        //_player2body->setContactTestBitmask(true);
        _player2->setPhysicsBody(physicbody);
        physicbody->setDynamic(false);
        _player2->setPosition(Vec2(595, visibleSize.height / 3 + i * 70));
        this->addChild(_player2, 1);
    }
    for (int i = 0; i < 6; i++) {
        _player3 = Sprite::create("OIP.png");
        _player3->setContentSize({ 70, 70 });
        auto physicbody = PhysicsBody::createBox(_player3->getContentSize());
        //physicbody->setCollisionBitmask(3);
        //_player3body->setContactTestBitmask(true);
        _player3->setPhysicsBody(physicbody);
        physicbody->setDynamic(false);
        _player3->setPosition(Vec2(visibleSize.height / 4.58 + i * 70, 268));
        this->addChild(_player3, 1);
    }
for (int i = 0; i < 6; i++) {
        _player3 = Sprite::create("OIP.png");
        _player3->setContentSize({ 70, 70 });
        auto physicbody = PhysicsBody::createBox(_player3->getContentSize());
        //physicbody->setCollisionBitmask(3);
        //_player3body->setContactTestBitmask(true);
        _player3->setPhysicsBody(physicbody);
        physicbody->setDynamic(false);
        _player3->setPosition(Vec2(visibleSize.height / 4.58 + i * 70, 268));
        this->addChild(_player3, 1);
    }
for (int i = 0; i < 6; i++) {
        _player3 = Sprite::create("OIP.png");
        _player3->setContentSize({ 70, 70 });
        auto physicbody = PhysicsBody::createBox(_player3->getContentSize());
        //physicbody->setCollisionBitmask(3);
        //_player3body->setContactTestBitmask(true);
        _player3->setPhysicsBody(physicbody);
        physicbody->setDynamic(false);
        _player3->setPosition(Vec2(visibleSize.height / 4.58 + i * 70, 268));
        this->addChild(_player3, 1);
    }

    for (int i = 0; i < 6; i++) {
        _player4 = Sprite::create("OIP.png");
        _player4->setContentSize({ 70, 70 });
        auto physicbody = PhysicsBody::createBox(_player4->getContentSize());
        //physicbody->setCollisionBitmask(2);
        //_player4body->setContactTestBitmask(true);
        _player4->setPhysicsBody(physicbody);
        physicbody->setDynamic(false);
        _player4->setPosition(Vec2(visibleSize.width / 4 + i * 70, 548));
        //_player1->setPhysicsBody(_player4body);
        this->addChild(_player4, 1);
    }



    /////////////////////////////
    // 2. add a menu item with "X" image, which is clicked to quit the program
    //    you may modify it.


    // add a "close" icon to exit the progress. it's an autorelease object
    auto closeItem = MenuItemImage::create(
        "CloseNormal.png",
        "CloseSelected.png",
        CC_CALLBACK_1(HelloWorld::menuCloseCallback, this));

    if (closeItem == nullptr ||
        closeItem->getContentSize().width <= 0 ||
        closeItem->getContentSize().height <= 0)
    {
        problemLoading("'CloseNormal.png' and 'CloseSelected.png'");
    }
    else
    {
        float x = origin.x + visibleSize.width - closeItem->getContentSize().width / 2;
        float y = origin.y + closeItem->getContentSize().height / 2;
        closeItem->setPosition(Vec2(x, y));
    }

    // create menu, it's an autorelease object
    auto menu = Menu::create(closeItem, NULL);
    menu->setPosition(Vec2::ZERO);
    this->addChild(menu, 1);


    auto label = Label::createWithTTF("Hello World", "fonts/Marker Felt.ttf", 24);
    if (label == nullptr)
    {
        problemLoading("'fonts/Marker Felt.ttf'");
    }
    else
    {
        // position the label on the center of the screen
        label->setPosition(Vec2(origin.x + visibleSize.width / 2,
            origin.y + visibleSize.height - label->getContentSize().height));

        // add the label as a child to this layer
        this->addChild(label, 1);
    }
    
    sprite = Sprite::create("ball.png");
    sprite->setContentSize({ 60, 60 });// hajm dyal ball
    if (sprite == nullptr)
    {
        problemLoading("'ball.png'");
    }
    else
    {
      

        sprite->setPosition(Vec2(175, 333));
    
        this->addChild(sprite, 1);
        auto ballbody = PhysicsBody::createCircle(sprite->getContentSize().width / 2);
        ballbody->setCollisionBitmask(1);
        ballbody->setContactTestBitmask(true);
        sprite->setPhysicsBody(ballbody);
    }
   
    auto eventListener = EventListenerKeyboard::create();
    eventListener->onKeyPressed = [=](EventKeyboard::KeyCode keyCode, Event* event) {

        auto action = TintTo::create(1, 0, 0, 0);
        sprite->runAction(action);
        Vec2 location = sprite->getPosition();
        //_DrawNode = DrawNode*::create();
        //log("the keycode is %d", keyCode);

        switch (keyCode) {
            //auto action = TintTo::create(2, 255, 0, 0);
        case EventKeyboard::KeyCode::KEY_LEFT_ARROW:
        case EventKeyboard::KeyCode::KEY_A:
            sprite->runAction(MoveTo::create(1.5, Vec2(location.x - 400.0f, location.y)));
            //sprite->getPhysicsBody()->setVelocity(Vec2(-400, 0));

            //event->getCurrentTarget()->setPosition(location.x - 400.0f, location.y);
            break;

        case EventKeyboard::KeyCode::KEY_RIGHT_ARROW:
        case EventKeyboard::KeyCode::KEY_D:
            sprite->runAction(MoveTo::create(1.5, Vec2(location.x + 400.0f, location.y)));

            //sprite->getPhysicsBody()->setVelocity(Vec2(400, 0));

            // event->getCurrentTarget()->setPosition(location.x + 400.0f, location.y);
            break;
        case EventKeyboard::KeyCode::KEY_UP_ARROW:
        case EventKeyboard::KeyCode::KEY_W:
            //// if (sprite->getPositionY() != 500) {
           // sprite->getPhysicsBody()->setVelocity(Vec2(0, 400));

            sprite->runAction(MoveTo::create(1, Vec2(location.x, location.y + 300.0f)));
            //passage->setColor(Color3B::ORANGE);
      //event->getCurrentTarget()->setPosition(location.x, location.y + 300.0f);
            break;
        case EventKeyboard::KeyCode::KEY_DOWN_ARROW:
        case EventKeyboard::KeyCode::KEY_S:
            sprite->runAction(MoveTo::create(1.5, Vec2(location.x, location.y - 300.0f)));

            //passage->setColor(Color3B::YELLOW);

           // sprite->getPhysicsBody()->setVelocity(Vec2(00, -400));
            //passage->setColor(Color3B::ORANGE);
            //event->getCurrentTarget()->setPosition(location.x, location.y - 300.0f);

            break;
        }
    };


    this->_eventDispatcher->addEventListenerWithSceneGraphPriority(eventListener, sprite);

  
    this->scheduleUpdate();

    return true;
}


void level2::menuCloseCallback(Ref* pSender)
{

    Director::getInstance()->end();



}
void HelloWorld::GoToGameScene(Ref* pSender) {
    auto scene = Scene::create();
    Director::getInstance()->replaceScene(scene);

}
void level2::update(float dt)
{
    float ballp = sprite->getPositionX();
    float ballp2 = sprite->getPositionY();
    log("ball coordinate x:%f and y:%f ", ballp, ballp2);
    for (auto p : passage1)
    {
        float p1 = p->getPositionX();
        float pp2 = p->getPositionY();
        if (sprite->getPosition().y < p->getPosition().y + 10 && sprite->getPosition().y > p->getPosition().y - 10
            && sprite->getPosition().x < p->getPosition().x + 10 && sprite->getPosition().x > p->getPosition().x - 10)
        {
            CCLOG("tail posX: %d, tail posY: %d", p1, pp2);
            CCLOG("ball posX: %d, ball posY: %d", ballp, ballp2);
            //p->setScale(2.);
            p->setColor(Color3B::BLUE);
            counter++;
            showMenu();
            /*auto action = TintTo::create(1, 255, 0, 0);
            p->runAction(action);*/
        }

    }
}


void level2::showMenu() {

     auto Back = MenuItemImage::create("OIP.png", "OIP.png");
    auto menu1 = Menu::create(Back, NULL);
    menu1->setPosition(100, 100);
    this->addChild(menu1, 5);

    auto start = MenuItemImage::create("next1.png", "next1.png",
        CC_CALLBACK_1(level3::GoToGameScene, this));

    auto menu2 = Menu::create(start, NULL);
    start->setContentSize({ 100, 100 });
    menu2->setPosition(100, 100);
    
    this->addChild(menu2, 6);
}