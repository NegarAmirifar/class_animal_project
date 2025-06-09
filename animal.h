#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
using namespace std;
//define animal class:
class animal{
private:
    int age;
    string color;
    string typeskin;
    bool wild;
public:
    animal();
    void display();
    void sound ();
    void sleep();
    void eat();
    void setage(int a);
    void setcolor(string b);
    void setwild(bool c);
    void settypeskin(string skin);
};
#endif // ANIMAL_H#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
using namespace std;
//define animal class:
class animal{
private:
    int age;
    string color;
    string typeskin;
    bool wild;
public:
    animal();
    void display();
    void sound ();
    void sleep();
    void eat();
    void setage(int a);
    void setcolor(string b);
    void setwild(bool c);
    void settypeskin(string skin);
};
#endif // ANIMAL_H
