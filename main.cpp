#include <iostream>
#include <sstream>
#include "User.h"
#include "Event.h"
#include <algorithm>
#include <vector>
#include"Subscription.h"

using namespace std;

void display(Event* _event)
{
    cout << _event->Getname() << endl;
}

int main()
{
    User member;
    new Event("Rando VTT GTJ");
    new Event("Rando VTT Transbeaujo");
    new Event("Rando VTT thil");


    new Subscription(Event::objects[0], "Eric");

    member.Setname("Eric");
    member.Setid(1);

//    event1.Setname("rando VTT");
//    event1.Setid(1);

    // Parcourt l'ensemble des instances de la classe
    vector<Event*>* e = &Event::objects;
    vector<Subscription*>* s = &Subscription::objects;

    for_each(e->begin(), e->end(), display);

    for_each(s->begin(), s->end(), display);



    return 0;
}
