#include <iostream>
#include <sstream>
#include "User.h"
#include "Event.h"
#include <algorithm>
#include <vector>

using namespace std;

void display(Event* _event)
{
    cout << _event->Getname() << endl;
}

int main()
{
    User member;
    Event event1;

    member.Setname("Eric");
    member.Setid(1);

//    event1.Setname("rando VTT");
//    event1.Setid(1);

    // Parcourt l'ensemble des instances de la classe
    vector<Event*>* v = &Event::objects;

    for_each(v->begin(), v->end(), display);

    cout << "Hello world!" << endl;
    return 0;
}
