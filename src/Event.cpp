#include "Event.h"

Event::Event(string _name) : name(_name)
{
    //ctor
    objects.push_back(this);
}

Event::~Event()
{
    //dtor
}

vector<Event*> Event::objects;
