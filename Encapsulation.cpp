#include<iostream.h>
#include<conio.h>
class adder
{
	public:
		adder(int i=0)
		{
			total=i;
		}
		void addnum(int number)
		{
			total+=number;
		}
		int gettotal()
		{
			return total;
		}
		private:
			int total;
		
	};
	int main()
	{
		
		adder a;
		clrscr();
		a.addnum(10);
		a.addnum(20);
		a.addnum(30);
		cout<<"total="<<a.gettotal()<<endl;
	getch();
	return 0;
}
