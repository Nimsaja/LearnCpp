#include <iostream>
#include <string>

void printStrings()
{
    std::string myName("Alex");
    std::cout << myName << "\n";

    myName = "John";
    std::cout << myName << "\n";
}

void getLine()
{
    std::cout << "Enter your full name: ";
    std::string name;
    std::getline(std::cin, name); // read a full line of text into name

    std::cout << "Enter your age: ";
    std::string age;
    std::getline(std::cin, age);

    std::cout << "Your name is " << name << " and your age is " << age << "\n";
}

void appendStrings()
{
    std::string a("45");
    std::string b("11");

    std::cout << a + b << "\n";
    a += " volts";
    std::cout << a << "\n";

    std::cout << a << " has " << a.length() << " characters\n";
}

void quiz()
{
    std::cout << "Enter your full name: ";
    std::string name;
    std::getline(std::cin, name);

    std::cout << "Enter your age: ";
    int age;
    std::cin >> age;
    std::cin.ignore(32767, '\n');

    double yearsPerLetter = age / static_cast<double>(name.length());

    std::cout << "You've lived " << yearsPerLetter << " for each letter in your name.\n";


}

int main()
{
    // printStrings();
    // getLine();
    // appendStrings();

    quiz();

    return 0;
}