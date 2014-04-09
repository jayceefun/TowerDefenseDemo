#include "TowerDefense.h"
#include "TowerDefenseUILayer.h"

USING_NS_CC;

TowerDefense* TowerDefense::_instance = NULL;

CCScene* TowerDefense::_scene = NULL;

TowerDefense::~TowerDefense()
{
    
}

TowerDefense::TowerDefense()
{
    
}

TowerDefense* TowerDefense::instance()
{
    if (_instance == NULL) {
        _instance = new TowerDefense();
    }
    
    return _instance;
}

CCScene* TowerDefense::scene()
{
    CCScene * scene = CCScene::create();
    
    TowerDefense* td = TowerDefense::create(scene);
    
    scene->addChild(td);
    
    return scene;
}


TowerDefense * TowerDefense::create(cocos2d::CCScene *scene)
{
    TowerDefense * hw = new TowerDefense();
    if (hw && hw->init(scene)) {
        hw->autorelease();
        return hw;
    }
    
    CC_SAFE_DELETE(hw);
    return NULL;
}

bool TowerDefense::init(CCScene * scene)
{
    if (!CCLayer::init()) return false;
    
    _instance = this;
    _screenSize = CCDirector::sharedDirector()->getWinSize();
    _scene = scene;
    
    TowerDefenseUILayer * tdUILayer = TowerDefenseUILayer::create(scene);
    _scene->addChild(tdUILayer);
    
    return true;
}
