#include<iostream>
#include"./include/Person.h"
using namespace std;

void test01(){
    Person a;
    string name;
    int age;
    cout << "请输入姓名:";
    cin  >> name;
    cout << "请输入年龄:";
    cin  >> age;
    a.setAge(age);a.setName(name);
    a.showInformation();

}

void test02(){
    cout << "Hello world!" << endl;
}

int main(){
    test01();
    test02();


    return 0;
}
