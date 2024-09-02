#include <iostream>
using namespace std;

class Point3
{
 public:
 friend std::ostream& operator<<(std::ostream& out, const Point3& v);
 Point3(double x = 0, double y = 0, double z = 0);
 double& operator[](int index);               //note theres no const here
 const double& operator[](int index) const;   //note the const here but same function
 Point3 operator+(const Point3& v) const;
 Point3 operator-(const Point3& v) const;
 Point3 operator*(double s) const;
 private:
 static const int cm_Dim = 3;
 double m_Coord[cm_Dim];
};



const double& Point3::operator[](int index) const  //note the const here
{
 if ((index >= 0) && (index < cm_Dim))
 return m_Coord[index];
 else
 return zero(index);
}
double& Point3::operator[](int index) //note theres no const here
{
 if ((index >= 0) && (index < cm_Dim))
 return m_Coord[index];
 else
     return zero(index);
}


int main( )
{
 using namespace std;
 Point3 pt1(1.2, 3.4, 5.6);
 const Point3 pt2(7.8, 9.1, 6.4);
 double d ;
 d = pt2[2];
 cout << d << endl;
 d = pt1[0];
 cout << d << endl;
 d = pt1[3];
 cout << d << endl;
 pt1[2] = 8.7;
 cout << pt1 << endl;
 // pt2[2] = 'd';
 cout << pt2 << endl;
 return 0;
}
