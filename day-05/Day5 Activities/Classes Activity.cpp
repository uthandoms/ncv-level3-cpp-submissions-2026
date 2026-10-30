#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;
    char gender;
public:
    Person(); // default constructor
    Person(string nm, int ag, char gn); // parameterised constructor
    void setPerson(string nm, int ag, char gn); // setter
    string getName();
    int getAge();
    char getGender();
};

  // Class implementation

Person::Person()
{
    name = "";
    age = 0;
    gender = ' ';
}

Person::Person(string nm, int ag, char gn)
{
    setPerson(nm, ag, gn);
}

void Person::setPerson(string nm, int ag, char gn)
{
    name = nm;
    if (ag >= 0 && ag <= 120) // the setter guards the data
    {
        age = ag;
    }
    else
    {
        age = 0;
    }
    gender = gn;
}

string Person::getName() { return name; }
int Person::getAge() { return age; }
char Person::getGender() { return gender; }

int main()
{
 // DECLARATION
    Person ps;
    Person p2;
    int birthYearPs;
    int birthYearP2;
    int currentYear;

    //INITIALIZATION
    currentYear = 2026;
    ps.setPerson("Thato", 23, 'M');
    p2.setPerson("Lerato", 19, 'F');

    // 3. ARITHMETIC - C3 QUESTION - COMMIT THIS TO GITHUB
    birthYearPs = currentYear - ps.getAge();
    birthYearP2 = currentYear - p2.getAge();

    //FORMATTED OUTPUT
    cout << ps.getName() << ", " << ps.getAge() << ", " << ps.getGender() << " - Born: " << birthYearPs << endl;
    cout << p2.getName() << ", " << p2.getAge() << ", " << p2.getGender() << " - Born: " << birthYearP2 << endl;

    // Validation Test - invalid age
    p2.setPerson("Lerato", 200, 'F');
    cout << "After invalid entry:" << endl;
    cout << p2.getName() << ", " << p2.getAge() << endl;

    return 0;
}
