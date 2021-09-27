#pragma once
#include<box2d/box2d.h>

class Rigidbody
{
private:
    b2BodyDef* bodyDef{};
    b2Body* body{};
    b2PolygonShape* polygonShape{};
    b2FixtureDef* fixtureDef{};
    b2Fixture* fixture{};
    b2World* world{};
public:
    Rigidbody(b2World*& world, b2BodyType* bodyType, b2Vec2* position, 
    float width, float hight, float density, float friction, float restitution, 
    b2Vec2* origin, float angle);
    ~Rigidbody();
};

