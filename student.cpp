#include "student.h"

Student::Student()
{

}

string Student::getGroupName() const
{
    return groupName;
}

void Student::setGroupName(const string &newGroupName)
{
    groupName = newGroupName;
}

void Student::sayStatus()
{
    cout<<"Opiskelija: ";
}

