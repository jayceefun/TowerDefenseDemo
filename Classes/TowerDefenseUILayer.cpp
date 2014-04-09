//
//  TowerDefenseUILayer.cpp
//  TowerDefenseDemo
//
//  Created by fanjinchen on 14-4-9.
//
//

#include "TowerDefenseUILayer.h"

TowerDefenseUILayer * TowerDefenseUILayer::create(CCScene * scene)
{
    TowerDefenseUILayer * tdUILayer = new TowerDefenseUILayer();
    if (tdUILayer && tdUILayer->init(scene)) {
        tdUILayer->autorelease();
        return tdUILayer;
    }
    
    CC_SAFE_DELETE(tdUILayer);
    return NULL;
}

TowerDefenseUILayer::TowerDefenseUILayer()
{
    
}

TowerDefenseUILayer::~TowerDefenseUILayer()
{
    
}

bool TowerDefenseUILayer::init(CCScene * scene)
{
    if (!CCLayer::init()) {
        return false;
    }
    
    this->createTileMap();
    
    return true;
}

void TowerDefenseUILayer::onEnter()
{
    CCLayer::onEnter();
}

void TowerDefenseUILayer::onExit()
{
    CCLayer::onExit();
}

void TowerDefenseUILayer::createTileMap()
{
    
}

