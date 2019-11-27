#ifndef MEMBER_H
#define MEMBER_H

#include <User.h>


class Member : public User
{
    public:
        Member();
        virtual ~Member();

        string memberEvent;

        int Getid() { return id; }
        void Setid(int val) { id = val; }
        int Getrole() { return role; }
        void Setrole(int val) { role = val; }
        std::string Getpassword() { return password; }
        void Setpassword(string val) { password = val; }
        int Getavatar() { return avatar; }
        void Setavatar(int val) { avatar = val; }

         string getMemberEvent(int memberId) {return memberEvent;};
         bool hasSuscribed(int eventId);
         void subscribeEvent(int eventId);
         void unsubscribeEvent(int eventId);

    protected:

    private:
        int id;
        int role;
        string password;
        int avatar;
};

#endif // MEMBER_H
