#include <iostream>
#include<cmath>

using namespace std;

int main() 
{

	return 0;
}


int	if1(int a) {
	if (a > 0) {
		a += 1;
	}
	return a;
}

int if2(int a) {
	if (a > 0) {
		a += 1;
	}
	else
	{
		a += 2;
	}
	return a;
}

int if3(int a) {
	if (a > 0) {
		a += 1;
	}

	if (a == 0) {
		a = 10;
	}

	if (a > 0) {
		a -= 2;
	}
	return a;
}

int if4(int a, int b, int c) {
	int count = 0, necount = 0;
	if (a > 0) {
		count++;
	}

	if (b > 0) {
		count++;
	}

	if (c > 0) {
		count++;
	}
	return count;
}

void if5(int a, int b, int c) {
	int count = 0, necount = 0;
	if (a > 0) {
		count++;
	}
	else {
		necount++;
	}

	if (b > 0) {
		count++;
	}
	else {
		necount++;
	}

	if (c > 0) {
		count++;
	}
	else {
		necount++;
	}
	cout << "chet: " << count << " nechet: " << necount << endl;
}

int if6(int a, int b) {
	if (a > b) {
		return a;
	}

	if (a < b) {
		return b;
	}

	if (a == b) {
		cout << "они равные";
		return 0;
	}
}

int if7(int a, int b) {
	if (a > b) {
		return 1;
	}
	else {
		return 2;
	}
}

void if8(int a, int b) {
	if (a > b) {
		cout << a << b;
	}
	else {
		cout << b << a;
	}
}

void if9(int a, int b) {
	if (a > b) {
		int c;
		c = a;
		a = b;
		b = c;
	}
	cout << a << b;
}

void if10(int a, int b) {
	if (a == b) {
		a = 0;
		b = 0;
	}
	else {
		int c = a + b;
		a = c;
		b = c;
	}
	cout << a << b;
}
 
void if11(int a, int b) {	
	int max;
	if (a > b) {
		max = a;
	}
	else {
		max = b;
	}

	if (a != b) {
		a = max;
		b = max;
		cout << a << b;
	}

	if (a == b) {
		a = 0;
		b = 0;
		cout << a << b;
	}
}

int if12(int a, int b, int c) {
	if (a > b) {
		if (b > c) {
			return c;
		}
		else {
			return b;
		}
	}
	else {
		if (a < b && a < c) {
			return a;
		}
	}
}

int if13(int a, int b, int c) {
	if (a < b) {
		if (b < c) {
			return b;
		}
		else {
			return c;
		}
	}
	else {
		if (a < c) {
			return a;
		}
		else {
			return c;
		}	
	}
}

int if14(int a, int b, int c) {
	if (a < b && a < c) {
		return a;
	}
	else if (b < c) {
		return b;
	}
	else {
		return c;
	}

	if (a > b && a > c) {
		return a;
	}
	else if (b > c) {
		return b;
	}
	else {
		return c;
	}
}

int if15(int a, int b, int c) {
	int max1, max2;

	if (a > b) {
		max1 = a;
		if (b > c) {
			max2 = b;
		}
		else {
			max2 = c;
		}
	}
	else {
		max1 = b;
		if (a > c) {
			max2 = a;
		}
		else {
			max2 = c;
		}
	}

	int sum = max1 + max2;
	return sum;
}

void if16(double a, double b, double c) {
	if (a < b && b < c) {
		a *= 2;
		b *= 2;
		c *= 2;
	}
	else {
		a = -a;
		b = -b;
		c = -c;
	}

	cout << a << ' ' << b << ' ' << c;
}

void if17(double a, double b, double c) {
	if ((a <= b) & (b <= c) || (a >= b) & (b >= c)) {
		a = a * 2;
		b = b * 2;
		c = c * 2;

		cout << a << ' ' << b << ' ' << c;
	}
	else {
		a = a * (-1);
		b = b * (-1);
		c = c * (-1);
		cout << a << ' ' << b << ' ' << c;
	}
}

int if18(double a, double b, double c) {
	if (a == b & b != c) {
		return 3;
	}

	if (a == c & c != b) {
		return 2;
	}

	if (b == c & a != b) {
		return 1;
	}
}

int if19(int a, int b, int c, int d) {
	if (a == b == c & c != d) {
		return 4;
	}

	if (a == b == d & c != d) {
		return 3;
	}

	if (a == b == c & b != d) {
		return 2;
	}

	if (d== b == c & a != d) {
		return 1;
	}
}

void if20(int a, int b, int c) {
	if (abs(a - b) < abs(a - c)) {
		cout << "ближе:" << b << endl;
		if ((a - b) > 0) {
			cout  << a - b;
        }    
		else if ((a - b) < 0) {
			cout << (a - b) * -1;
        }    
	}
	else {
		cout << "ближе:" << c << endl;
		if ((a - c) > 0) {
			cout <<  a - c;
        }    
		else if ((a - c) < 0) {
			cout << (a - c) * -1;
        }    
	}
}

int if21(int a, int b) {
	if (a == 0 && b == 0) {
		return 0;
	}
	else if (a == 0 && b != 0) {
		return 1;
	}
	else if (a != 0 && b == 0) {
		return 2;
	}
	else {
		return 3;
	}
}

void if22(int a, int b) {
	if (a > 0 && b > 0) {
		cout << "Первая ";
	}
	else if (a < 0 && b>0) {
		cout << "Вторая ";
	}
	else if (a < 0 && b < 0) {
		cout << "Третья ";
	}
	else {
		cout << "Четвертая ";
	}
}

void if23(int a, int b, int c, int b2, int c3, int a1) {
	if (b == c) {
		cout << "x4:" << a << endl;
	}
	else {
		if (c == a) {
			cout << "x4:" << b << endl;
		}
		else {
			cout << "x4:" << c << endl;
		}
	}

	if (b2 == c3) {
		cout << "y4:" << a1;
	}
	else {
		if (c3 == a1) {
			cout << "d4:" << b2;
		}
	}
}

int if24(int x) {
	int f;
	if (x > 0) {
		f = 2 * sin(x);
	}
	else {
		f = 6 - x;
	}

	return f;
}

int if25(int x) {
	if (x < -2 | x>2) {
		x *= 2;
	}
	else {
		x *= -3;
	}

	return x;
}

int if26(int x) {
	if (x <= 0 ) {
		x = -x;
	}

	if (0 < x < 2) {
		x = pow(x,2);
	}

	if (x >= 2) {
		x = 4;
	}
	return x;
}

int if27(int x) {
	if (x < 0) {
		return 0;
	}
	else {
		if ((x % 2) == 0) {
			return 1;
		}
		else {
			return -1;
		}
	}
}

int if28(int a) {
	int days = (a % 400 == 0 || a % 4 == 0 && a % 100 != 0) ? 366 : 365;

	return days;
}

void if29(int a) {
	if (a == 0) {
		cout << "нулевое ";
	}
	else {
		if (a >0) {
			cout << "положительное ";
		}
		else {
			cout << "отрицательное ";
		}
	}
	cout << "число";
}

void if30(int a) {
	if (a % 2 == 0);
	else cout << "не";
	cout << "четное ";
	if (a / 100 > 0 && a / 100 < 10) cout << "трехзначное ";
	else if (a / 10 > 0 && a / 10 < 10) cout << "двухзначное ";
	else if (a / 10 == 0) cout << "однозначное ";
	cout << "число";
}