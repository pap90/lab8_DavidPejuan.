#ifndef PIEZAS_H
#define PIEZAS_H
#include <string>
using std::string;

class Piezas
{
protected:
    string color;
    int x,y;
public:
    Piezas(/* args */);
    Piezas(int,int,string);
    void setX(int);
    void setY(int);
    void setColor(string);
    string getColor();
    int getX();
    int getY();
    virtual int* mover(int*);
    virtual string toString();

    
};



#endif // !PIEZAS_H