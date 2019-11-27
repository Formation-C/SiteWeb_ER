#ifndef SUBSCRIPTION_H
#define SUBSCRIPTION_H
#include <iostream>
#include <vector>

using namespace std;

class Subscription
{
    public:
        string name;
        /** Default constructor */
        Subscription(std::string name);
        /** Default destructor */
        virtual ~Subscription();


        // Objet contenqnt les références vers toutes les instances de la classe
        static vector<Subscription*> objects;

    protected:

    private:
};

#endif // SUBSCRIPTION_H
