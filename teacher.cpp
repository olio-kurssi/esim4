#include "teacher.h"

Teacher::Teacher()
{

}

string Teacher::getDepartment() const
{
    return department;
}

void Teacher::setDepartment(const string &newDepartment)
{
    department = newDepartment;
}

void Teacher::sayStatus()
{
    cout<<"Opettaja: ";
}
