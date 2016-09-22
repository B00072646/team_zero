#include <iostream>
using namespace std;
// Base class
class Shape
{
public:
 // pure virtual function providing interface framework.
 virtual int getArea() = 0;
 void setWidth(int w)
 {
 width = w;
 }
 void setHeight(int h)
 {
 height = h;
 }
protected:
 int width;
 int height;
};
class Rectangle: public Shape
{
public:
 int getArea()
 {
 return (width * height);
 }
};
int main(void)
{
 Rectangle Rec;
 Rec.setWidth(4);
 Rec.setHeight(10);
 // Print the area of the object.
 cout << "Total Rectangle area: " << Rec.getArea() << endl;
 return 0;
}
