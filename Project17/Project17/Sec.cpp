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
		complex(float f)
		{
			real = f;
			img = f;
		}
		complex(float r, float i)
		{
			real = r;
			img = i;
		}

		void display()
		{
			cout << real << "+" << img << "i" << endl;
		}
		friend void addc(complex x, complex y);
		//friend void mulc(complex &x, complex &y);

};
void addc(complex x, complex y)
{
	float real, img;
	real = x.real + y.real;
	img = x.img + y.img;
	cout << "real :" << real << "img:" << img;
	display();
}

/*
void mulc(complex &x, complex &y)
{
real = x.real *y.real;
img = x.img *y.img;
}*/
int main()
{
	complex c1, c2(5), c3(6, 8);
	c2.display();
	c3.display();
	addc(c2, c3);
	//mulc(c2, c3);
	//display();
	getchar();
	return 0;
}