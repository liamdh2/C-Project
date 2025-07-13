#include <iostream>

int main(){
    std::cout << "I like pizza!"<< std::endl;
    std::cout << "It really good!"<< std::endl;
    //declaration: declare data type
    int x;
    //assign variable
    x = 5;
    std::cout << x<<'\n';
    int y = 6; //declare and assign
    std::cout << y<<'\n';
    int sum = x+y;
    std::cout << sum<<'\n';

    int age = 21;
    int year = 2023;
    int days = 7;
    //double (number including decimal)
    double price = 10.99;
    double gpa = 3.5;
    double temp = 25.1;

    std::cout << price << '\n';

    //char stores single character
    char grade = 'A';
    char initial = 'L';
    std::cout<<initial<<'\n';
    //boolean (true or fales)
    bool student = true;
    bool power = false;
    bool available = true;
    //string (objects that represents a sequence of text)
    std::string name = "Liam";
    std::cout<< name<< '\n';
    std::cout<<"Hello "<<name<<'\n';

    //constant makes it read only
    const double PI = 3.14159;
    double radius = 10;
    double circ = 2*PI*radius;
    std::cout<<circ<<" cm"<<'\n';
    return 0;
}