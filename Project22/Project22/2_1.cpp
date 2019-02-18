#include<iostream>
using namespace std;
class polar
{
	int rad;
	float angle;
	
public:
	static int count;
	polar()/*default constructors*/
	{
		rad = 0;
		angle = 0.0;
		count++;
	}
		polar(int r, float a)/*constructor with parameters*/
		{
		rad = r;
		angle = a;
		count++;
		}
		~polar()
		{
			cout << "count is " << count << endl;
		}
		void display()
		{
			count--;
			cout << count;
		}
	
};
int polar::count;
int main()
{
	{
		polar p1, p2(5, 30.5);

		p1.display();
	}
	//p2.display();
	system("pause");
	return 0;
	
}