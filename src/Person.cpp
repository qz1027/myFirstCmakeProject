#include"Person.h"

void Person::showInformation(){
    cout << "姓名:" << this->m_name << "\t年龄:" << this->m_age << endl;
}

void Person::setName(string name){
    this->m_name = name;
}

void Person::setAge(int age){
    this->m_age = age;
}