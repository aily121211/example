#include <iostream>
using namespace std;

class Name {
public:
    string firstName;
    string lastName;

    Name(string first, string last) {
        firstName = first;
        lastName = last;
    }

    void namePrinter() {
        privateNamePrinter();
    }

private:

    void privateNamePrinter() {
        cout << firstName << "-" << lastName << endl; 
    }
};

void func();


int main() {
    func();
    return 0;
}

void func() {
    Name* name = new Name("Paul", "Chris");
    // cout << name->firstName << "-" << name->lastName << endl;
    name->namePrinter();
}
