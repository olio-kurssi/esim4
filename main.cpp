#include "student.h"
#include "teacher.h"
#include "person.h"

#include <iostream>

using namespace std;

int main()
{
    Person *objectPerson=new Person;
    objectPerson->sayStatus();

    Student *objectStudent = new Student;
    objectStudent->setName("Teppo Opiskelija");
    objectStudent->setBirthYear(2001);
    objectStudent->setGroupName("tvt23spl");
    cout<<"Opiskelijan tiedot"<<endl;
    objectStudent->sayStatus();
    cout<<objectStudent->getName()<<endl;
    cout<<objectStudent->getBirthYear()<<endl;
    cout<<objectStudent->getGroupName()<<endl;
    cout<<"*****************************\n";

    Teacher *objectTeacher = new Teacher;
    objectTeacher->setName("Liisa Opettaja");
    objectTeacher->setBirthYear(1978);
    objectTeacher->setDepartment("Tietotekniikka");
    cout<<"Opettajan tiedot"<<endl;
    objectTeacher->sayStatus();
    cout<<objectTeacher->getName()<<endl;
    cout<<objectTeacher->getBirthYear()<<endl;
    cout<<objectTeacher->getDepartment()<<endl;
    cout<<"*****************************\n";

    delete objectStudent;
    objectStudent=nullptr;
    delete objectTeacher;
    objectTeacher=nullptr;

    return 0;
}
