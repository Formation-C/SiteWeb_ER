#ifndef GUEST_H
#define GUEST_H
#include <iostream>
#include <User.h>


class Guest : public User
{
    public:
        /** Default constructor */
        Guest();
        /** Default destructor */
        virtual ~Guest();

    protected:

    private:
};

#endif // GUEST_H
