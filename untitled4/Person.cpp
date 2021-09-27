#include "Person.h"

Person::Person() {
    this->luck = rand()%100;
}
Person::Person(const string &name, int age) : Person() {
    this->name = name;
    this->age = age;
}
const string &Person::getName() const{
    return name;
}
int Person::getAge() const{
    return age;
}
int Person::getLuck() const{
    return luck;
}
void Person::setName(const string &name){
    Person::name = name;
}
void Person::setAge(int age){
    Person::age = age;
}
void Person::setLuck(int luck) {
    Person::luck = luck;
}
void Person::changeLck(Person &per1, Person &per2){
    int next = per1.getLuck();
    per1.setLuck(per2.getLuck());
    per2.setLuck(next);
}


