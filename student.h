#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

#include "person.h"



class Student : public Person
{
public:
    Student();
    string getGroupName() const;
    void setGroupName(const string &newGroupName);

private:
    string groupName;
};

#endif // STUDENT_H
