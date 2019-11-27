#ifndef ABSTRACTCATEGORY_H
#define ABSTRACTCATEGORY_H
#include <iostream>

using namespace std;
class AbstractCategory
{
    public:
        AbstractCategory();
        virtual ~AbstractCategory();

        int Getid() { return id; }
        void Setid(int val) { id = val; }
        string Getname() { return name; }
        void Setname(string val) { name = val; }

    protected:

    private:
        int id;
        string name;
};

#endif // ABSTRACTCATEGORY_H
