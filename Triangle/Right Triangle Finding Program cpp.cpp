#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double CalcPerimeter(double side1, double side2, double side3)
{
	return side1 + side2 + side3;
}

double CalcArea(double side1, double side2)
{
	return (side1 * side2) / 2;
}

int main()
{
	int SelectOption = 0;
	int done;
	string whichSide;

	done = false;
	while (done == false)
	{
		// present user options.
		cout << "Please select a triangle or 4 to quit." << endl;
		cout << "  1. Right triangle" << endl;
		cout << "  2. Isosceles triangle" << endl;
		cout << "  3. Equilateral triangle" << endl;
		cout << "  4. Quit" << endl;

		cin >> SelectOption;
		if (SelectOption == 4) // are we done yet?
		{
			done = true;
		}
		else
		{
			// gather user input (all 3 sides)

			if (SelectOption == 1)
			{
				double side1;
				double side2;
				double hypotenuse;
				double perimeter;
				double area;
				cout << "Which side are you solving for A, B, or C>>";
				cin >> whichSide;
				if (whichSide == "C")
				{
					cout << "Enter side A: ";
					cin >> side1;
					cout << "Enter side B: ";
					cin >> side2;

					hypotenuse = sqrt(side1 * side1 + side2 * side2);
					perimeter = CalcPerimeter(side1, side2, hypotenuse);
					area = CalcArea(side1, side2);
				}
				else if (whichSide == "A" || whichSide == "B")
				{
					cout << "Enter side A: ";
					cin >> side1;
					cout << "Enter side B: ";
					cin >> side2;

					hypotenuse = sqrt(side1 * side1 + side2 * side2);
					perimeter = CalcPerimeter(side1, side2, hypotenuse);
					area = CalcArea(side1, side2);
				}
				

				cout << "Right triangle A side = " << side1;
				cout << ", B side = " << side2;
				cout << ", Missing side = " << hypotenuse << endl;
				cout << "Area of right triangle = " << area << endl;
				cout << "Perimeter of right triangle = " << perimeter << endl;
			}
			else if (SelectOption == 2)
			{
				double base_half;
				double height;
				double length;
				double base;
				double area;
				double perimeter;

				cout << "Enter length: ";
				cin >> length;
				cout << "Enter base: ";
				cin >> base;

				base_half = base / 2;
				height = sqrt(length * length - base_half * base_half);
				perimeter = CalcPerimeter(length, length, base);
				area = CalcArea(base, height);

				cout << "Isosceles triangle length = " << length;
				cout << ", B side base = " << base;
				cout << ", Missing side (height) = " << height << endl;
				cout << "Area of isosceles triangle = " << area << endl;
				cout << "Perimeter of isosceles triangle = " << perimeter << endl;

			}
			else if (SelectOption == 3)
			{
				double base;
				double height;
				double side;
				double perimeter;
				double area;
				double base_half;

				cout << "Enter side (all sides will be equal): ";
				cin >> side;

				base = side;
				base_half = base / 2;
				height = sqrt(side * side - base_half * base_half);
				perimeter = CalcPerimeter(side, side, side);
				area = CalcArea(base, height);

				cout << "Equilateral Triangle Side A, B, and C = " << side << endl;
				cout << "Area of equilateral triangle = " << area << endl;
				cout << "Perimeter of equilateral triangle = " << perimeter << endl;
			}
		}
	}

	system("pause");
	return 0;

}



