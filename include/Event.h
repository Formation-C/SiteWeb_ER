#ifndef EVENT_H
#define EVENT_H
#include <iostream>
#include <vector>

using namespace std;

class Event
{
    public:
        /** Default constructor */
        Event(std::string name);
        /** Default destructor */
        virtual ~Event();

        /** Access id
         * \return The current value of id
         */
        int Getid() { return id; }
        /** Set id
         * \param val New value to set
         */
        void Setid(int val) { id = val; }
        /** Access name
         * \return The current value of name
         */
        string Getname() { return name; }
        /** Set name
         * \param val New value to set
         */
        void Setname(string val) { name = val; }
        /** Access description
         * \return The current value of description
         */
        string Getdescription() { return description; }
        /** Set description
         * \param val New value to set
         */
        void Setdescription(string val) { description = val; }
        /** Access date
         * \return The current value of date
         */
        string Getdate() { return date; }
        /** Set date
         * \param val New value to set
         */
        void Setdate(string val) { date = val; }

        // Objet contenqnt les références vers toutes les instances de la classe
        static vector<Event*> objects;

    protected:

    private:
        int id; //!< Member variable "id"
        string name; //!< Member variable "name"
        string description; //!< Member variable "description"
        string date; //!< Member variable "date"
};

#endif // EVENT_H
