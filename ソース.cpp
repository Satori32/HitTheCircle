#include <iostream>
#include <cmath>
#include <tuple>

typedef std::tuple<double, double, double> Circle;//x,y,r.

bool IsHit(const Circle& A, const Circle& B) {
	double X = std::get<0>(B) - std::get<0>(A);
	double Y = std::get<1>(B) - std::get<1>(A);

//	double AA = std::sqrt((X * X) + (Y * Y)) ;

	double R = (std::get<2>(B) + std::get <2>(A));

	return (X * X + Y * Y) < (R * R);
}

int main() {


	{
		Circle A{ 20,40,5 };
		Circle B{ 25,30,8 };
		double X = std::get<0>(B) - std::get<0>(A);
		double Y = std::get<1>(B) - std::get<1>(A);
		double R = std::get<2>(B) + std::get <2>(A);
		double AA = std::sqrt((X * X) + (Y * Y));

		std::cout << X << ',' << Y << ',' << R << ',' << AA << ',' << (IsHit(A, B) ? true : false) << std::endl;
	}
	{
		Circle A{ 8,8,8 };
		Circle B{ 10,2,5 };
		double X = std::get<0>(B) - std::get<0>(A);
		double Y = std::get<1>(B) - std::get<1>(A);
		double R = std::get<2>(B) + std::get <2>(A);
		double AA = std::sqrt((X * X) + (Y * Y));

		std::cout << X << ',' << Y << ',' << R << ',' << AA << ',' << (IsHit(A, B) ? true : false) << std::endl;

	}
	{
		Circle A{ 0,0,16 };
		Circle B{ 16,16,2 };
		double X = std::get<0>(B) - std::get<0>(A);
		double Y = std::get<1>(B) - std::get<1>(A);
		double R = std::get<2>(B) + std::get <2>(A);
		double AA = std::sqrt((X * X) + (Y * Y));

		std::cout << X << ',' << Y << ',' << R << ',' << AA << ',' << (IsHit(A, B) ? true : false) << std::endl;
	}
	return 0;
}