#include <iostream>

// Base class
class Shape
{
public:
   Shape(double width, double height)
       : m_width(width), m_height(height)
   {
   }

   virtual ~Shape()
   {
   }

   void setWidth(double width)
   {
      m_width = width;
   }

   void setHeight(double height)
   {
      m_height = height;
   }

   void printArea()
   {
      std::cout << "Area: " << getArea() << std::endl;
   }

   virtual double getArea() = 0;

   // Can be changed only by child classes (not by any other)
protected:
   double m_width;
   double m_height;
};

// Derived class
class Rectangle : public Shape
{
public:
   Rectangle(double width, double height)
       : Shape(width, height)
   {
   }

   double getArea() override
   {
      return m_width * m_height;
   }
};

// Derived class
class Triangle : public Shape
{
public:
   Triangle(double base, double height)
       : Shape(base, height)
   {
   }

   double getArea() override
   {
      return m_width * m_height / 2.0;
   }
};

void printShapeArea(Shape &shape)
{
   shape.printArea();
}

int main()
{
   Rectangle rect(10, 20);
   Triangle tri(10, 20);

   printShapeArea(rect);
   printShapeArea(tri);

   return 0;
}
