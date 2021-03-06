
#include "pch.h"

#define _USE_MATH_DEFINES

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>

// #1 demonstrate functions
long gcd(long a, long b) {

    while (a != b) {
        if (a > b) {
            std::swap(a, b);
        }
        b = b - a;
    }
    return a;
}
int gcd(int a, long b);

long lcm(long a, long b) {
    return a * b / gcd(a, b);
}

// #2 function overloading
void printNumber(double num) {
    printf("%.5f\n", num);
}

void printNumber(int num) {
    printf("%d\n", num);
}

// #3 default arguments
double power(double num = M_E, int exp = 1) {
    double res = 1;
    while (exp) {
        exp & 1 ? (res *= num, --exp) : (num *= num, exp /= 2);
    }
    return res;
}

// #4
std::string globalStr;
// pass by value
std::string concat1(std::string a, std::string b) {
    return a + b;
}

// pass by reference
void concat2(std::string& a, std::string& b) {
    a = a + b;
}

// return by reference
std::string& global() {
    return globalStr;
}

// #5,6 classes and objects
class Ball {
public:
    Ball() : radius(1), color("black") { }
    Ball(int radius, std::string color) : radius(radius), color(color) { }

    int getRadius() {
        return radius;
    }
    std::string getColor() {
        return color;
    }
    void changeColor(std::string color) {
        this->color = color;
    }

    bool operator< (const Ball & other)
    {
        return radius < other.radius;
    }
private:
    int radius;
    std::string color;
};

int main() {
    long a, b;
    std::cin >> a >> b;
    // #1 demonstrate functions
    std::cout << lcm(a, b) << "\n";

    // #2 function overloading
    printNumber(15);
    printNumber(static_cast<double>(15));
    printNumber(15.132423423);

    // #3 default arguments
    std::cout << power(2, 10) << ", " << power() << "\n";

    // #4 pass by value, pass by reference and return by reference
    std::string c = "aaa";
    std::string d = "bbb";
    std::cout << c << "\n";
    c = concat1(c, d);
    std::cout << c << "\n";
    concat2(c, d);
    std::cout << c << "\n";
    global() = c;
    std::cout << globalStr << "\n";


    // #5,6 classes and objects, constructors
    Ball ball1(3, "green");
    Ball ball2;
    std::cout << "ball 1 is smaller than ball 2: " << (ball1 < ball2 ? "yes" : "no");


    return 0;

}

