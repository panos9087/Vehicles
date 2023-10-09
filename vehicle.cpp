#include "vehicle.h"

using namespace std;


Vehicle::Vehicle(int wheels,int weight){
    this->weight= weight;
    this->wheels = wheels;
}
int Vehicle::getWheels(){
    return this->wheels;
}
int Vehicle::getWeight(){
    return this->weight;
}
void Vehicle::setWeight(int weight){
    this->weight=weight;
}
void Vehicle::setWheels(int wheels){
    this->wheels= wheels;
}
string Car::getColor(){
    return this->color;
}
char * Car::getCompany(){
    return this->company;
}
string Car::getModel(){
    return this->model;
}
int Car::getCost(){
    return this->cost;
}
void Car::setColor(string color){
    this->color=color;
}
void Car::setCost(int cost){
    this->cost = cost;
}
void Car::move(){
    cout<<"car moving"<<endl;
}

void Car::stop(){
    cout<<"car stoped"<<endl;
}

void Car::turnLeft(){
    cout<<"car turns left"<<endl;
}

void Car::turnRight(){
    cout<<"car turns right"<<endl;
}
void Car::display(){
    cout<<"Brand : "<<getCompany()<<endl;
    cout<<"Model : "<<getModel()<<endl;
    cout<<"Color : "<<getColor()<<endl;
    cout<<"Cost : "<<getCost()<<endl;
    cout<<endl;
}
Car::Car(string color,char * cname,string model,int cost){
    this->color=color;
    this->company= cname;
    this->model = model;
    this->cost = cost;
}