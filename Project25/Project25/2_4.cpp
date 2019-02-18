#include<iostream>
using namespace std;
class complex
{
	float real;
	float img;
public:
	complex()
		{
		real = 0.0;
		img = 0.0;
		}
	complex(float a, float b)
			{
				real = a;
				img = b;
			}
				complex(const complex &c)
				{
					real = c.real;
					img = c.img;
				}
	complex operator+(complex c1)
		{
			complex temp;
			temp.real = c1.real + real;
			temp.img = c1.img + img;
			return temp;
		}
	complex operator-(complex c1)
	{
		complex temp;
		temp.real = real - c1.real;
		temp.img = img - c1.img;
		return temp;
	}
complex operator-()
	{
			
			real = -real;
		   img = -img;
			return (*this);
		
	}
complex operator++( )
{
	complex temp;
	temp.real = ++real;
	temp.img = ++img;
	return temp;
}
complex operator++( int n)
{
	complex temp;
	temp.real = real++;
	temp.img = img++;
	return temp;
}
complex operator,(complex c1)
{
	return c1;
}
	void display()
	{
		cout << "real" << real<<"img"<<img<<endl;
	}
};
int main()
{
	complex c1(2,5), c2(2.5, 6.8), c3, c4, c5(3,2),c6(8,8),c7(2,2),c8,c9;
	c3 = c1 + c2;
	-c5;
	c8=c6++;
	c9=++c7;
	c4 = c2 - c1;
	
	c3.display();
	c4.display();
	c5.display();
	c6.display();
	c8.display();
	c9.display();

	system("pause");
	 

}