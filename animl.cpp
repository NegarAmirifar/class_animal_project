#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;
animal::animal(){
    age=0;
    color="Black";
    typeskin="Hairy";
    wild=false;
}
void animal::eat(){
    cout<<"This animal eats food "<<endl;
}
void animal::sleep(){
    cout<<"wizzzzzzzzzz"<<endl;
}
void animal::sound(){
    cout<<"soundddddddddd"<<endl;

}
void animal::display(){
    cout<<"animal info is: "<<endl;
    cout<<"age= "<<age<<endl;
    cout<<"color= "<<color<<endl;
    cout<<"skin type= "<<typeskin<<endl;
    if(wild)
        cout<<"It is wild"<<endl;
    else
        cout<<"It is not wild"<<endl;

}
void animal:: setage(int a){
    this->age=a;
}
void animal:: setcolor(string b){
    this->color=b;
    }
void  animal:: setwild(bool c){
    this->wild=c;
    }
void animal:: settypeskin(string skin){
    this->typeskin=skin;
    }
