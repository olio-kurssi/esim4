#include "classroom.h"
#include "student.h"
#include "teacher.h"

#include <iostream>

using namespace std;

int main()
{

    ClassRoom *objectClassroom = new ClassRoom;
    objectClassroom->setClassroomName("5b301");

    objectClassroom->objStudent1->setName("Teppo Testi");
    objectClassroom->objStudent1->setBirthYear(1999);
    objectClassroom->objStudent1->setGroupName("tvt23spl");

    objectClassroom->objStudent2->setName("Liisa Joki");
    objectClassroom->objStudent2->setBirthYear(1998);
    objectClassroom->objStudent2->setGroupName("tvt23spo");

    objectClassroom->objTeacher->setName("Mauno Opettaja");
    objectClassroom->objTeacher->setBirthYear(1982);
    objectClassroom->objTeacher->setDepartment("Tietotekniikka");

    cout<<"Luokkahuoneen "<<objectClassroom->getClassroomName()<<" kokoonpano"<<endl;

    cout<<objectClassroom->objStudent1->getName()<<endl;
    cout<<objectClassroom->objStudent1->getBirthYear()<<endl;
    cout<<objectClassroom->objStudent1->getGroupName()<<endl;
    cout<<"**********************************\n";

    cout<<objectClassroom->objStudent2->getName()<<endl;
    cout<<objectClassroom->objStudent2->getBirthYear()<<endl;
    cout<<objectClassroom->objStudent2->getGroupName()<<endl;
    cout<<"**********************************\n";

    cout<<objectClassroom->objTeacher->getName()<<endl;
    cout<<objectClassroom->objTeacher->getBirthYear()<<endl;
    cout<<objectClassroom->objTeacher->getDepartment()<<endl;

    delete objectClassroom;
    objectClassroom=nullptr;
    return 0;
}
