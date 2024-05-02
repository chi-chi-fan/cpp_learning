// ask for a person's name, and greet the person

#include<iostream>
#include<string>

int main()
{
    std::cout << "Your name: ";

    std::string name; // define the name
    std::cin >> name; // read the name

    std::cout << "Hello " << name << "!" << std::endl;
    return 0;
}