#ifndef PERSON_H
#define PERSON_H
#include <iostream>

using namespace std;

class Person
{
public:
    Person();
    ~Person();
    string getName() const;
    void setName(const string &newName);

    int getBirthYear() const;
    void setBirthYear(int newBirthYear);
    virtual void sayStatus();

private:
    string name;
    int birthYear;
};

#endif // PERSON_H
