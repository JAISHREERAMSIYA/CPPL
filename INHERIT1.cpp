#include<iostream.h>
#include<conio.h>
class Animal
{
public:
void eat()
{
cout<<"eating"<<endl;
}
};
class Dog:public Animal
{
public:
void bark()
{
cout<<"barking"<<endl;
}
};
int main()
{
clrscr();
Dog d1;
d1.eat();
d1.bark();
getch();
return 0;
}