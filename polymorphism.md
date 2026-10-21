### polymorphism.md

md
# POLYMORPHISM IN C++

## Meaning of Polymorphism

Polymorphism is an Object-Oriented Programming concept where the same function or interface can behave differently depending on the object using it.

The word polymorphism can be divided into two parts:

- `poly` means many.
- `morph` means forms.

Therefore, polymorphism means **many forms**.

---

## Types of Polymorphism

C++ mainly has two types of polymorphism:

1. Compile-time polymorphism
2. Run-time polymorphism

---

## Compile-Time Polymorphism

Compile-time polymorphism happens when C++ decides which function to use during compilation.

One common example is **function overloading**.

Example:

cpp
#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    Calculator c;

    cout << c.add(4, 5) << endl;
    cout << c.add(2.5, 3.7) << endl;

    return 0;
}