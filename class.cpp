// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

//Klase Car
class Dog {
    // īpašība brand publisk
    // un mileage privātu
    public:
        string name;
        
        Dog(string name, int age) {
            this->name = name;
            this->age = age;
        }
        
        // metodi MakeNoise
        void makeNoise() {
            cout << "Woof! \n";
        };
        
    private: 
        int age;
        void birthday() {
            age++;
        };
};

int main() {
    Dog dog1("Reksis \n", 2);
    dog1.makeNoise();

    return 0;
}
