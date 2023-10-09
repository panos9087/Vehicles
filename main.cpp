#include <iostream>
#include "vehicle.h"

using namespace std;

int main(void){

    Car v1 = Car("blue","falcon x","model b",20000);
    v1.display();
    v1.move();
    v1.stop();
    v1.turnLeft();
    v1.turnRight();

    return 0;
}