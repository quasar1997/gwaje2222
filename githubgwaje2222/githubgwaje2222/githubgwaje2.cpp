#include<vector>
#include<string>
#include<iostream>
#include<algorithm>

using namespace std;

class Person {
    string name;
    int age;
public:

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    int getAge() { return age; }
    string getName() { return name; }
};

int cmpAge(Person a, Person b)
{
    return a.getAge() > b.getAge();
}

int cmpName(Person a, Person b)
{
    return a.getName() < b.getName();
}

int main()
{
    vector<Person> v;
    v.push_back(Person("John", 33));
    v.push_back(Person("Kevin", 40));
    v.push_back(Person("Danial", 15));
    v.push_back(Person("Snow", 20));

    sort(v.begin(), v.end(), cmpAge);
    for (int i = 0; i < 4; i++)
    {
        cout << v[i].getAge() << "," << v[i].getName() << endl;
    }

    cout << endl;

    sort(v.begin(), v.end(), cmpName);
    for (int i = 0; i < 4; i++)
    {
        cout << v[i].getAge() << "," << v[i].getName() << endl;
    }
}