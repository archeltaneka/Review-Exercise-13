#ifndef CIRCLE_H
#define CIRCLE_H

class Circle{
	private:
		const double phi = 3.14159;
		double radius;
		double diameter;
		double area;
	public:
		// default constructor
		Circle()
		{
			radius = 0;
			diameter = 0;
			area = 0;
		}
		// second constructor
		Circle(double rad)
		{
			radius = rad;
		}
		// set radius
		void setRadius(double r)
		{
			radius = r;
		}
		// get radius
		double getRadius() const
		{
			return radius;
		}
		// get diameter
		double getDiameter() const
		{
			return radius * 2;
		}
		// get area
		double getArea() const
		{
			return phi * radius * radius;
		}
		// get circumference
		double getCircumference() const
		{
			return 2 * phi * radius;
		}
};

#endif
