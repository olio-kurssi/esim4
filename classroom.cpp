#include "classroom.h"

ClassRoom::ClassRoom()
{
    objStudent1 = new Student;
    objStudent2 = new Student;
    objTeacher = new Teacher;
}

ClassRoom::~ClassRoom()
{
    delete objStudent1;
    delete objStudent2;
    delete objTeacher;
    objStudent1=nullptr;
    objStudent2=nullptr;
    objTeacher=nullptr;
}

string ClassRoom::getClassroomName() const
{
    return classroomName;
}

void ClassRoom::setClassroomName(const string &newClassroomName)
{
    classroomName = newClassroomName;
}
