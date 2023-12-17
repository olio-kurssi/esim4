#ifndef TEACHER_H
#define TEACHER_H
#include <iostream>

using namespace std;
#include "person.h"



class Teacher : public Person
{
public:
    Teacher();
    string getDepartment() const;
    void setDepartment(const string &newDepartment);
    void sayStatus();

private:
    string department;
};

#endif // TEACHER_H
