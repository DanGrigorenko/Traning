# include <iostream>
# include <cmath>

using namespace std;
int main()
{	
	return 0;
}

void Case1(int x) {
	switch (x) {
		case 1:
			cout << "Понедельник\n";
			break;
		case 2:
			cout << "Вторник\n";
			break;
		case 3:
			cout << "Среда\n";
			break;
		case 4:
			cout << "Четверг\n";
			break;
		case 5:
			cout << "Пятница\n";
			break;
		case 6:
			cout << "Суббота\n";
			break;
		case 7:
			cout << "Воскресенье\n";
			break;
		default:
			cout << "Ошибка";
	}
}

void Case2(int x) {
	switch (x) {
		case 1:
			cout << "плохо\n";
			break;
		case 2:
			cout << "неудовлетворительно\n";
			break;
		case 3:
			cout << "удовлетворительно\n";
			break;
		case 4:
			cout << "хорошо\n";
			break;
		case 5:
			cout << "отлично\n";
			break;
		default:
			cout << "Ошибка\n";
	}
}

void Case3(int x) {
	switch (x) {
		case 1:
		case 2:
		case 12:
			cout << "Зима\n";
			break;
		case 3:
		case 4:
		case 5:
			cout << "Весна\n";
			break;
		case 6:
		case 7:
		case 8:
			cout << "Лето\n";
			break;
		case 9:
		case 10:
		case 11:
			cout << "Осень\n";
			break;
	}
}

void Case4(int x) {
	switch (x) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout << "В месяце 31 днень\n";
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout << "В месяце 30 днень\n";
			break;
		case 2:
			cout << "В месяце 28 днень\n";
			break;
	}
}

double Case5(int a, double b, double c) {
	switch (a) {
		case 1:
			return b + c ;
			break;
		case 2:
			return b - c;
			break;
		case 3:
			return b * c;
			break;
		case 4:
			return b / c;
			break;
	}
}

double Case6(int n, double b) {
	switch (n) {
		case 1:
			return b / 10;
			break;
		case 2:
			return b * 1000;
			break;
		case 3:
			return b;
			break;
		case 4:
			return b / 1000;
			break;
		case 5:
			return b / 100;
			break;
	}
}

double Case7(int a, double x) {
	switch (a) {
		case 1:
			return x;
			break;
		case 2:
			return x / 1000000;
			break;
		case 3:
			return x / 1000;
			break;
		case 4:
			return x * 1000;
			break;
		case 5:
			return x * 100;
			break;
	}
}

int Case8(int m, int d) {
	switch (m) {
		case 1: 
			return d = 31;
			break;
		case 3: 
			return d = 31;
			break;
		case 5: 
			return d = 31;
			break;
		case 7: 
			return d = 31;
			break;
		case 8: 
			return d = 31;
			break;
		case 10: 
			return d = 31;
			break;
		case 12: 
			return d = 31;
			break;
		case 4: 
			return d = 30;
			break;
		case 6: 
			return d = 30;
			break;
		case 9: 
			return d = 30;
			break;
		case 11: 
			return d = 30;
			break;
		case 2: 
			return d = 28;
			break;
	}
}

int Case9(int m, int d) {
	switch (m) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (d == 31) 
			return d = 0;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if (d == 30) 
			return d = 0;
			break;
		case 2:
			if (d == 28) 
			return d = 0;
			break;
	}
}

char Case10(int c, int n) {
	switch (c) {
	case 'С':
		switch (n) {
			case 1:
				return c = 'З';
				break;
			case 0:
				return c = 'С';
				break;
			case -1:
				return c = 'В';
				break;
		}
		break;
	case 'В':
		switch (n) {
			case 1:
				return c = 'С';
				break;
			case 0:
				return c = 'В';
				break;
			case -1:
				return c = 'Ю';
				break;
		}
	case 'Ю':
		switch (n) {
			case 1:
				return c = 'В';
				break;
			case 0:
				return c = 'Ю';
				break;
			case -1:
				return c = 'З';
				break;
		}
		break;
	case 'З':
		switch (n) {
			case 1:
				return c = 'Ю';
				break;
			case 0:
				return c = 'З';
				break;
			case -1:
				return c = 'С';
				break;
		}
	}
}

char Case11(int c, int n1, int n2) {
	switch (c) {
	case 'С':
		switch (n1 + n2) {
			case -1:
			case 3:
				return c = 'В';
				break;
			case 1:
				return c = 'З';
				break;
			case -2:
			case 2:
				return c = 'Ю';
				break;
		}
		break;
	case 'В':
		switch (n1 + n2) {
			case -1:
			case 3:
				return c = 'Ю';
				break;
			case 1:
				return c = 'С';
				break;
			case -2:
			case 2:
				return c = 'З';
				break;
		}
		break;
	case 'Ю':
		switch (n1 + n2) {
			case -1:
			case 3:
				return c = 'З';
				break;
			case 1:
				return c = 'В';
				break;
			case -2:
			case 2:
				return c = 'С';
				break;
		}
		break;
	case 'З':
		switch (n1 + n2) {
			case -1:
			case 3:
				return c = 'С';
				break;
			case 1:
				return c = 'Ю';
				break;
			case -2:
			case 2:
				return c = 'В';
				break;
		}
	}
}

void Case12(int n, double x) {
	double r, d, l, s;
	switch (n) {
		case 1:
			r = x;
			d = 2 * r;
			l = 2 * 3.14 * r;
			s = 3.14 * r * r;
			cout << d << " " << l << " " << s << endl;
			break;
		case 2:
			r = x / 2;
			d = x;
			l = 2 * 3.14 * r;
			s = 3.14 * r * r;
			cout << r << " " << l << " " << s << endl;
			break;
		case 3:
			r = x / 2 * 3.14;
			d = 2 * r;
			l = x;
			s = 3.14 * r * r;
			cout << r << " " << d << " " << s << endl;
			break;
		case 4:
			r = sqrt(x / 3.14);
			d = 2 * r;
			l = 2 * 3.14 * r;
			s = x;
			cout << r << " " << d << " " << l << endl;
			break;
	}
}

void Case13(int n, double x) {
	double a, c, h, s;
	switch (n) {
		case 1:
			a = x;
			c = a * sqrt(2);
			h = c / 2;
			s = c * h / 2;
			cout << c << " " << h << " " << s << endl;
			break;
		case 2:
			c = x;
			a = c / sqrt(2);
			h = c / 2;
			s = c * h / 2;
			cout << a << " " << h << " " << s << endl;
			break;
		case 3:
			h = x;
			c = 2 * h;
			a = c / sqrt(2);
			s = c * h / 2;
			cout << a << " " << c << " " << s << endl;
			break;
		case 4:
			s = x;
			h = sqrt(s);
			c = 2 * h;
			a = c / sqrt(2);
			cout << a << " " << c << " " << h << endl;
			break;
	}
}

void Case14(int n, double x) {
	double a, r1, r2, s;
	switch (n) {
		case 1:
			a = x;
			r1 = a * sqrt(3) / 6;
			r2 = 2 * r1;
			s = a * a * sqrt(3) / 4;
			cout << r1 << " " << r2 << " " << s << endl;
			break;
		case 2:
			r1 = x;
			a = r1 * 6 / sqrt(3);
			r2 = 2 * r1;
			s = a * a * sqrt(3) / 4;
			cout << a << " " << r2 << " " << s << endl;
			break;
		case 3:
			r2 = x;
			r1 = r2 / 2;
			a = r1 * 6 / sqrt(3);
			s = a * a * sqrt(3) / 4;
			cout << a << " " << r1 << " " << s << endl;
			break;
		case 4:
			s = x;
			a = sqrt(s * 4 / sqrt(3));
			r1 = a * sqrt(3) / 6;
			r2 = 2 * r1;
			cout << a << " " << r1 << " " << r2 << endl;
			break;
	}
}

void Case15(int n, int m) {
	switch (n) {
		case 6:
			cout << "шестёрка \n";
			break;
		case 7:
			cout << "семерка \n";
			break;
		case 8:
			cout << "восьмерка \n";
			break;
		case 9:
			cout << "девятка \n";
			break;
		case 10:
			cout << "десятка \n";
			break;
		case 11:
			cout << "валет \n";
			break;
		case 12:
			cout << "дама \n";
			break;
		case 13:
			cout << "король \n";
			break;
		case 14:
			cout << "туз \n";
			break;
	}

	switch (m) {
		case 1:
			cout << "пик \n";
			break;
		case 2:
			cout << "треф \n";
			break;
		case 3:
			cout << "бубен \n";
			break;
		case 4:
			cout << "червей \n";
			break;
	}
}

void Case16(int y) {
	switch (y / 10) {
		case 2:
			cout << "двадцать ";
			break;
		case 3:
			cout << "тридцать ";
			break;
		case 4:
			cout << "сорок ";
			break;
		case 5:
			cout << "пятдесят ";
			break;
		case 6:
			cout << "шестьдесят ";
			break;
		}

	switch (y % 10) {
		case 1:
			cout << "один ";
			break;
		case 2:
			cout << "два ";
			break;
		case 3:
			cout << "три ";
			break;
		case 4:
			cout << "четыре ";
			break;
		case 5:
			cout << "пять ";
			break;
		case 6:
			cout << "шесть ";
			break;
		case 7:
			cout << "семь ";
			break;
		case 8:
			cout << "восемь ";
			break;
		case 9:
			cout << "девять ";
			break;
	}

	switch (y % 10) {
		case 0:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			cout << "лет. ";
			break;
		case 1:
			cout << "год. ";
			break;
		case 2:
		case 3:
		case 4:
			cout << "года. ";
			break;
	}
}

void Case17(int n) {
	if (n / 10 == 1) {
		switch (n) {
			case 10:
				cout << "десять учебных заданий.";
				break;
			case 11:
				cout << "одинадцать учебных заданий.";
				break;
			case 12:
				cout << "двенадцать учебных заданий.";
				break;
			case 13:
				cout << "тринадцать учебных заданий.";
				break;
			case 14:
				cout << "четырнадцать учебных заданий.";
				break;
			case 15:
				cout << "пятнадцать учебных заданий.";
				break;
			case 16:
				cout << "шестнадцать учебных заданий.";
				break;
			case 17:
				cout << "семнадцать учебных заданий.";
				break;
			case 18:
				cout << "восемнадцать учебных заданий.";
				break;
			case 19:
				cout << "девятнадцать учебных заданий.";
				break;
		}
	}	
	else {
		switch (n / 10) {
			case 2:
				cout << "двадцать ";
				break;
			case 3:
				cout << "тридцать ";
				break;
			case 4:
				cout << "сорок ";
				break;
		}

		switch (n % 10) {
			case 1:
				cout << "одно ";
				break;
			case 2:
				cout << "два ";
				break;
			case 3:
				cout << "три ";
				break;
			case 4:
				cout << "четыре ";
				break;
			case 5:
				cout << "пять ";
				break;
			case 6:
				cout << "шесть ";
				break;
			case 7:
				cout << "семь ";
				break;
			case 8:
				cout << "восемь ";
				break;
			case 9:
				cout << "девять ";
				break;
		}

		switch (n % 10) {
			case 0:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
				cout << "учебных заданий.";
				break;
			case 1:
				cout << "учебное задание.";
				break;
			case 2:
			case 3:
			case 4:
				cout << "учебных задания.";
				break;
		}
	}
}

void Case18(int n) {
	switch (n / 100) {
		case 1:
			cout << "сто ";
			break;
		case 2:
			cout << "двести ";
			break;
		case 3:
			cout << "триста ";
			break;
		case 4:
			cout << "четыреста ";
			break;
		case 5:
			cout << "пятьсот ";
			break;
		case 6:
			cout << "шестьсот ";
			break;
		case 7:
			cout << "семьсот ";
			break;
		case 8:
			cout << "восемьсот  ";
			break;
		case 9:
			cout << "девятьсот  ";
			break;
	}

	if ((n % 100) / 10 == 1)
		switch (n % 100) {
			case 10:
				cout << "десять";
				break;
			case 11:
				cout << "одинадцать";
				break;
			case 12:
				cout << "двенадцать";
				break;
			case 13:
				cout << "тринадцать";
				break;
			case 14:
				cout << "четырнадцать";
				break;
			case 15:
				cout << "пятнадцать";
				break;
			case 16:
				cout << "шестнадцать";
				break;
			case 17:
				cout << "семнадцать";
				break;
			case 18:
				cout << "восемнадцать";
				break;
			case 19:
				cout << "девятнадцать";
				break;
		}
	else {
		switch ((n % 100) / 10) {
			case 2:
				cout << "двадцать ";
				break;
			case 3:
				cout << "тридцать ";
				break;
			case 4:
				cout << "сорок ";
				break;
			case 5:
				cout << "пятьдесят ";
				break;
			case 6:
				cout << "шестьдесят ";
				break;
			case 7:
				cout << "семьдесят ";
				break;
			case 8:
				cout << "восемьдесят ";
				break;
			case 9:
				cout << "девяносто ";
				break;
		}

		switch (n % 10) {
			case 1:
				cout << "один";
				break;
			case 2:
				cout << "два";
				break;
			case 3:
				cout << "три";
				break;
			case 4:
				cout << "четыре";
				break;
			case 5:
				cout << "пять";
				break;
			case 6:
				cout << "шесть";
				break;
			case 7:
				cout << "семь";
				break;
			case 8:
				cout << "восемь";
				break;
			case 9:
				cout << "девять";
				break;
		}
	}
}

void Case19(int n) {
	switch ((n) % 10) {
		case 0:
		case 1:
			cout << "бел";
			break;
		case 2:
		case 3:
			cout << "черн";
			break;
		case 4:
		case 5:
			cout << "зелён";
			break;
		case 6:
		case 7:
			cout << "красн";
			break;
		case 8:
		case 9:
			cout << "жёлт";
			break;
	}

	switch ((n + 1) % 5) {
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 9:
		case 10:
		case 11:
			cout << "ой ";
			break;
		case 6:
		case 7:
		case 8:
			cout << "ого ";
			break;
	}

	switch ((n + 8) % 12) {
		case 0:
			cout << "крысы";
			break;
		case 1:
			cout << "коровы";
			break;
		case 2:
			cout << "тигра";
			break;
		case 3:
			cout << "зайца";
			break;
		case 4:
			cout << "дракона";
			break;
		case 5:
			cout << "змеи";
			break;
		case 6:
			cout << "лошади";
			break;
		case 7:
			cout << "овцы";
			break;
		case 8:
			cout << "обезьяны";
			break;
		case 9:
			cout << "курицы";
			break;
		case 10:
			cout << "собаки";
			break;
		case 11:
			cout << "свиньи";
			break;
	}
}

void Case20(int d, int m) {
	switch (m) {
		case 1:
			if (d > 19)
				cout << "Водолей";
			else
				cout << "Козерог";
			break;
		case 2:
			if (d > 18)
				cout << "Рыбы";
			else
				cout << "Водолей";
			break;
		case 3:
			if (d > 20)
				cout << "Овен";
			else
				cout << "Рыбы";
			break;
		case 4:
			if (d > 19)
				cout << "Телец";
			else
				cout << "Овен";
			break;
		case 5:
			if (d > 20)
				cout << "Близнецы";
			else
				cout << "Телец";
			break;
		case 6:
			if (d > 21)
				cout << "Рак";
			else
				cout << "Близнецы";
			break;
		case 7:
			if (d > 22)
				cout << "Лев";
			else
				cout << "Рак";
			break;
		case 8:
			if (d > 22)
				cout << "Дева";
			else
				cout << "Лев";
			break;
		case 9:
			if (d > 22)
				cout << "Весы";
			else
				cout << "Дева";
			break;
		case 10:
			if (d > 22)
				cout << "Скорпион";
			else
				cout << "Весы";
			break;
		case 11:
			if (d > 22)
				cout << "Стрелец";
			else
				cout << "Скорпион";
			break;
		case 12:
			if (d > 21)
				cout << "Козерог";
			else
				cout << "Стрелец";
			break;
	}
}