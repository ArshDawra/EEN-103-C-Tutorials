#include<iostream>
#include<cmath>
using namespace std;
class area
{
	double radius;
	double side1,side2;
	double a,b,c;
	public:
//for circle	
area(double r)
{
	radius=r;
}
//for a rectangle
area(double s1,double s2)
{
side1=s1;
side2=s2;	
}
//for triangle
area(double st1,double st2,double st3)
{
a=st1;
b=st2;
c=st3;	
}
//circle area function
void circle()
{
	double circleArea=(3.14)*radius*radius;
	cout<<"Area of circle: "<<endl;
	cout<<circleArea<<endl;
}
//rectangle area function
void rectangle()
{
	double rectarea=side1*side2;
	cout<<"Area of rectangle: "<<endl;
	cout<<rectarea;
}
//triangle area function
void triangle()
{
	double s=(a+b+c)/2;
	double v=s*(s-a)*(s-b)*(s-c);
	double triarea=sqrt(v);
	cout<<"Area of triangle: "<<endl;
	cout<<triarea<<endl;
}
};
int main()
{
cout<<"Which figure's area do you want to find(select appropriate choices): Circle(1) Triangle(2) Rectangle(3)"<<endl;
int ch;
cin>>ch;
if(ch==1)
{
	cout<<"Enter radius of circle : ";
	int r;
	cin>>r;
    area s1(r);	
    s1.circle();
}
if(ch==3)
{
	cout<<"Enter sides of the rectangle : ";
	int a,b;
	cin>>a>>b;
    area s2(a,b);	
    s2.rectangle();
}	
if(ch==2)
{
	cout<<"Enter sides of the triangle : ";
	int x,y,z;
	cin>>x>>y>>z;
    area s3(x,y,z);	
    s3.triangle();
}			
}
