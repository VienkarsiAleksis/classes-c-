#include <iostream>
using namespace std;

class Cat{
    private:
        int age;
    public:
        string name;
        
        Cat(string n, int a){
            this->age = a;
            this->name = n;
        };
        
        void birthday(){
            this->age++;
        }
        void meow(){
            cout << "Meeoooowwww!!!";
        }
};

int main() {
    Cat cat1("Mincis \n", 2);
    cat1.meow();

    return 0;
}
