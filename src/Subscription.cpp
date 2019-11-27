#include "Subscription.h"

Subscription::Subscription(string _name) : name(_name)
{
    //ctor
    objects.push_back(this);
}

Subscription::~Subscription()
{
    //dtor
}

vector<Subscription*> Subscription::objects;
