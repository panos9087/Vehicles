#include <iostream>

using namespace std;

class Vehicle{
    private:
    int wheels;
    int weight;
    public:
    Vehicle(int,int);
    void setWheels(int);
    void setWeight(int);
    int getWheels();
    int getWeight();
};


class Car{
    private:
    string color;
    char * company;
    string model;
    int cost;
    public:
    Car(string,char *,string,int);
    void move();
    void stop();
    void turnLeft();
    void turnRight();
    void display();
    public:
    string getColor();
    char * getCompany();
    string getModel();
    int getCost();
    void setColor(string);
    void setCost(int);

};