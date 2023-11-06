#include<iostream.h>
#include<conio.h>
class shape{
public:
int a,b;
void get_data(int n,int m)
{
a=n;
b=m;
}
};
class Rectangle:public shape
{
public:
int ret_area()
{
int result=a*b;
return result;
}
};
class Trinagle:public shape
{
public:
int triangle_area()
{
float result=0.5*a*b;
return result;
}
};
int mian()
{
clrscr();
Rectangle r;
Triangle t;
int length,breadth,base,height;
cout<<"enter teh lenght and breadth of the ractangle:"<<endl;
cin>>length>breadth;
r.get_data(length,breadth);
int m=rect_area();
cout<<"area of the rectangle is:"<<m<<endl;
cout<<"\n enter the base and heigth of triangle:"<<endl;
cin>>base>>heigth;
t.get_data(base,heigth);
float n=t,triangle_area();
cout<<"area of triangle is :"<<n<<endl;
getch();
return 0;
}
