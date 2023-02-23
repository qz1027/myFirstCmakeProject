#ifndef __PERSON_H__
#define __PERSON_H__

#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    void showInformation();
    void setName(string name);
    void setAge(int age);
private:
    string m_name;
    int m_age;
};

#endif