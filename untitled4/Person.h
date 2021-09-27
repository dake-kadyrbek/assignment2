#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    int luck;
public:
    Person();

    Person(const string &name,int age);

    const string &getName() const;

    int getAge() const;

    int getLuck() const;

    void setName(const string &name);

    void setAge(int age);

    void changeLck(Person &p1, Person &p2);

    void setLuck(int luck);

};


