#include <iostream>
using namespace std;
class shape {
public:
	virtual double area()const = 0;
	virtual void show() = 0;
};
class Circle :public shape {
private:
	double R;
public:
	Circle(double R) {
		this->R = R;
	}
	double area()const {
		double Area;
		Area = 3.14 * R * R;
		return Area;
	}
	void show() {
		cout << "圆面积为" << area() << endl;
	}
};
class Square :public shape {
private:
	int bianchang;
public:
	Square(int Bianchang) {
		this->bianchang = Bianchang;
	}

	double area()const {
		double Area;
		Area = bianchang * bianchang;
		return Area;
	}
	void show() {
		cout << "正方形面积为" << area() << endl;
	}
};
class Rectangle :public shape {
private:
	int chang;
	int kuan;
public:
	Rectangle(int Chang, int Kuan) {
		this->chang = Chang;
		this->kuan = Kuan;
	}

	double area()const {
		double Area;
		Area = chang * kuan;
		return Area;
	}
	void show() {
		cout << "长方形面积为" << area() << endl;
	}
};
class Trapezoid :public shape {
private:
	double shang;
	double xia;
	int h;
public:
	Trapezoid(double Shang, double Xia, int H) {
		this->shang = Shang;
		this->xia = Xia;
		this->h = H;
	}

	double area()const {
		double Area;
		Area = (shang + xia) * h / 2;
		return Area;
	}
	void show() {
		cout << "梯形面积为" << area() << endl;
	}
};
class  Triangle :public shape {
private:
	int bian1;
	int bian2;
	int bian3;
public:
	Triangle(int Bian1, int Bian2, int Bian3) {
		this->bian1 = Bian1;
		this->bian2 = Bian2;
		this->bian3 = Bian3;
	}
	double area()const {
		double Area;
		int p;
		p = (bian1 + bian2 + bian3) / 2;
		Area = sqrt(p * (p - bian1) * (p - bian2) * (p - bian3));
		return Area;
	}
	void show() {
		cout << "三角形面积为" << area() << endl;
	}
};
int main() {
	shape* area[5];
	Circle circle(10.2);
	Square square(3);
	Rectangle rectangle(3, 4);
	Trapezoid trapezoid(2.0, 4.5, 3);
	Triangle triangle(4, 5, 6);
	area[0] = &circle;
	area[1] = &square;
	area[2] = &rectangle;
	area[3] = &trapezoid;
	area[4] = &triangle;
	double sum = 0;
	for (int i = 0; i < 5; i++)
	{
		area[i]->show();
		sum = sum + area[i]->area();
	}
	cout << "面积之和为" << sum << endl;
	return 0;
}