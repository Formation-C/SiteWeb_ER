#ifndef USER_H
#define USER_H
#include <iostream>

using namespace std;
class User
{
    public:
        User();
        virtual ~User();

        int Getid() { return id; }
        void Setid(int val) { id = val; }
        string Getemail() { return email; }
        void Setemail(string val) { email = val; }
        string Getname() { return name; }
        void Setname(string val) { name = val; }

    protected:

    private:
        int id;
        string email;
        string name;
};

#endif // USER_H
