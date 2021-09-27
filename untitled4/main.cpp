#include <iostream>
#include <vector>
#include "Person.cpp"

static vector<Person> luckiest(vector<Person> &persons){
    int maxLuck = -1;
    int index = 0;
    for ( int i = 0; i < persons.size(); i++ ) {
        if (maxLuck <= persons.at(i).getLuck()) {
            maxLuck = persons.at(i).getLuck();
            index = i;
        }
    }
    cout<<"The luckiest is "<<persons.at(index).getName()<<" "<<"luck = "<<persons.at(index).getLuck();
    return persons;
}

int main() {
    Person per1("Dake", 21);
    Person per2("Yerke", 19);
    Person per3("Shake", 27);
    Person per4("Make", 16);
    Person per5("Bake", 23);

    vector<Person> persons {per1, per2, per3, per4, per5};
    cout<<per1.getName()<<", "<<"luck = "<<per1.getLuck()<<endl;
    cout<<per2.getName()<<", "<<"luck = "<<per2.getLuck()<<endl;
    cout<<per3.getName()<<", "<<"luck = "<<per3.getLuck()<<endl;
    cout<<per4.getName()<<", "<<"luck = "<<per4.getLuck()<<endl;
    cout<<per5.getName()<<", "<<"luck = "<<per5.getLuck()<<endl<<endl;

    luckiest(persons);
    cout<<endl<<endl;

    per1.changeLck(per1,per2);
    per1.changeLck(per3,per5);
    per1.changeLck(per4,per1);

    cout<<per1.getName()<<", "<<"luck = "<<per1.getLuck()<<endl;
    cout<<per2.getName()<<", "<<"luck = "<<per2.getLuck()<<endl;
    cout<<per3.getName()<<", "<<"luck = "<<per3.getLuck()<<endl;
    cout<<per4.getName()<<", "<<"luck = "<<per4.getLuck()<<endl;
    cout<<per5.getName()<<", "<<"luck = "<<per5.getLuck()<<endl<<endl;


    Person *person = new Person();
    *person = {"Dake",17};
    cout<<person->getName();
    delete person;
    person =  0;

    return 0;
}