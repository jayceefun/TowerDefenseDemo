#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "cocos-ext.h"
USING_NS_CC;
USING_NS_CC_EXT;

class TowerDefense : public CCLayer
{
public:
    
    virtual ~TowerDefense();
    
    static CCScene* scene();
    
    static TowerDefense* instance();
    
    static TowerDefense * create(CCScene * scene);
    
    virtual bool init(CCScene * scene);
    
private:
    
    TowerDefense();
    
    static TowerDefense * _instance;
    
    static CCScene* _scene;
    
    TowerDefense * _gameLayer;
    
    CCSize _screenSize;
};

#endif // __HELLOWORLD_SCENE_H__
