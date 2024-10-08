#include <iostream>
#include <string>

class Person {
public:
    Person(const std::string& name, int age) : name(name), age(age) {}

    void introduce() const {
        std::cout << "Hello, my name is " << name << " and I am " << age << " years old." << std::endl;
    }

private:
    std::string name;
    int age;
};

int main() {
    Person person("John Doe", 30);
    person.introduce();

    std::cout << "sizeof(Person) = " << sizeof(Person) << std::endl;
    std::cout << "cpp is really weird" << std::endl;

    return 0;
}
