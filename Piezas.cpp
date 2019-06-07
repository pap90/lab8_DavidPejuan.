#include "Piezas.h"
Piezas::Piezas(){
    x=0;
    y=0;
    color="";
}
Piezas::Piezas(int x,int y,string color){
    this->x=x;
    this->y=y;
    this->color=color;
}
int Piezas::getX() {
    return x;
}

 void Piezas::setX(int x) {
    this->x = x;
}

int Piezas::getY() {
    return y;
}
void Piezas::setY(int y) {
     this->y = y;
}
string Piezas::getColor() {
    return color;
}

void Piezas::setColor(string color) {
    this->color = color;
}
