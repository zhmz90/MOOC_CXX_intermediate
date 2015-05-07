#include<iostream>
#include "Point.h"

using namespace std;

Point::Point():x(0),y(0){
    cout<<"default constructor called"<<endl;
}
Point::Point(int x,int y):x(x),y(y){
    cout<<"Contructor called."<<endl;
}

Point::~Point(){
    cout<<"Destructor called"<<endl;
}

void Point::move(int newX, int newY){
    cout<<"Moving the point to ("<<newX<<","<<newY<<")"<<endl;
    x = newX;
    y = newY;
}   
