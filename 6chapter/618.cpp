#include<iostream>
#include<cassert>
#include "Point.h"
using namespace std;

class Point;
class ArrayOfPoints{
    public:
        ArrayOfPoints(int size):size(size){
            points = new Point[size];
        }
        ~ArrayOfPoints(){
            cout<<"Deleting ..."<<endl;
            delete[] points;
        }
        Point& element(int index){
            assert(index >=0 && index<size);
            return points[index];
        }
    private:
        Point *points;
        int size;
};

int main(){
    int count;
    cout<<"Please enter the count of points:";
    cin>>count;
    ArrayOfPoints points(count);
    points.element(0).move(5,0);
    points.element(1).move(15,20);
    


    return 0;
}
