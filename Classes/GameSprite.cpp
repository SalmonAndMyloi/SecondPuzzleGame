//
//  GameSprite.cpp
//  SecondPuzzleGame
//
//  Created by Salmon on 2015. 2. 25..
//
//

#include "GameSprite.h"


void GameSprite::Move()
{
    cocos2d::Vec2 position = getPosition() + getMoveVector();
    this->setPosition(position);
}