//
//  TowerDefenseUILayer.h
//  TowerDefenseDemo
//
//  Created by fanjinchen on 14-4-9.
//
//

#ifndef __TowerDefenseDemo__TowerDefenseUILayer__
#define __TowerDefenseDemo__TowerDefenseUILayer__

#include "cocos2d.h"
#include "cocos-ext.h"
USING_NS_CC;
USING_NS_CC_EXT;

class TowerDefenseUILayer : public CCLayer
{
public:
    static TowerDefenseUILayer * create(CCScene * scene);
    
    virtual bool init(CCScene * scene);
    
    virtual void onEnter();
    
    virtual void onExit();
    
    TowerDefenseUILayer();
    
    virtual ~TowerDefenseUILayer();
    
private:
    void createTiledMap();
    
protected:
    CCSize _screenSize;
    
    CCScene * _scene;
    
    CCArray * _buttons;
};



#endif /* defined(__TowerDefenseDemo__TowerDefenseUILayer__) */
