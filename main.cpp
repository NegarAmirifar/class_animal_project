#include <iostream>
#include <string>
#include "Animal.h"
using namespace std;

int main()
{
    animal Dog;
    Dog.display();
    Dog.sound();
    Dog.eat();
    Dog.sleep();

    animal *pa=new animal();
    pa->display();
    animal *pb;
    pb=&Dog;

    pb->settypeskin("pashmaloo");
    pb->setwild(false);
     pb->display();
    return 0;
}
