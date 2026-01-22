#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

template <typename T>
class Shape
{
	public:
		virtual T area() const = 0;
		virtual void draw() const = 0;
		virtual ~Shape() {}
};

template <typename T>
class Circle : public Shape<T>
{
	private:
		T radius;
	public:
		Circle(T r) : radius(r)
		{
			if (radius <= 0)
			{
				throw invalid_argument("circle radius must be positive.\n");
			}
		}

		T area() const override
		{
			return static_cast<T>(3.14159) * radius * radius;
		}
		
		void draw() const override
		{
			cout << "drawing circle with radius " << radius << endl;
		}
};

template <typename T>
class Rectangle : public Shape<T>
{
	private:
		T length;
		T width;
	public:
		Rectangle(T l, T w) : length(l), width(w)
		{
			if (length <= 0 || width <= 0)
			{
				throw invalid_argument("rectangle length and width must be positive.\n");
			}
		}
		T area() const override
		{
			return length * width;
		}
		void draw() const override
		{
			cout << "drawing rectangle with the width " << width << " and length " << length << endl;
		}
};

int main()
{
	vector<Shape<double>*> shapes;
	try
	{
		shapes.push_back(new Circle<double>(5.66));
		shapes.push_back(new Rectangle<double>(15.2, 18.1));
		shapes.push_back(new Circle<double>(-3.0));
	} 
	catch(const exception& e)
	{
		cout << "Exception caught: " << e.what() << endl;
	}

	for (const auto* s : shapes)
	{
		s->draw();
		cout << "Area: " << s->area() << endl << endl;
	}
	
	for (const auto* s : shapes)
	{
		delete s;
	}
	return 0;
}


























































