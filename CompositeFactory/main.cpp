#include "stdafx.h"
#include <vector>
#include "rectangle.h"
#include "point.h"
#include "circle.h"
#include "line.h"
#include "polygon.h"
#include "picture.h"

int main()
{

	Circle circle(Point(1, 2), 12);
	nlohmann::json a{ circle };
	std::cout << a << std::endl;

	Line line(Point(1, 2), Point(3, 4));
	nlohmann::json b{ line };
	std::cout << b << std::endl;

	Polygon polygon(Point(0, 0), 4, 4, 90);
	nlohmann::json c{ polygon };
	std::cout << c << std::endl;

	Rectangle rectangle(Point(5, 7), 12, 3);
	nlohmann::json d{ rectangle };
	std::cout << d << std::endl;

	Picture picture({ &circle, &polygon, &rectangle, &line });
	nlohmann::json e{ picture };
	std::cout << e << std::endl;


    return 0;
}

