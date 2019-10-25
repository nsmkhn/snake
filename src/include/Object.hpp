//  Object.hpp
//  snake
//  Copyright © 2019 Nikita Tokariev. All rights reserved.
#pragma once
#include "Vector2.hpp"

class Object {
public:
    virtual ~Object() {};

    virtual void draw() const = 0;
    virtual void update() = 0;

    virtual void onInput() {};
    virtual void extend() {};

    inline int getX() const { return m_position.m_x; }
    inline int getY() const { return m_position.m_y; }
    inline bool isDead() const { return m_isDead; }
    
protected:
    Vector2i m_position;
    bool m_isDead;
};