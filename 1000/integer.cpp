#include<iostream>
#include<cmath>

using namespace std;
int main() {
    return 0;
}

int integer1(int n) {
	return (n / 100);
}

int integer2(int m) {
	return (m / 1000);
}

int integer3(int f) {
	return (f / 1024);
}

int integer4(int a, int b) {
	return (a / b);
}

int integer5(int a, int b) {
	return (a % b);
}
 
int integer6_1(int a) {
	return (a / 10);
}

int integer6_2(int a) {
	return (a % 10);
}

int integer7_1(int a) {
	int a1 = a / 10;
	a %= 10;
	return (a + a1);
}

int integer7_2(int a) {
	int a1 = a / 10;
	a %= 10;
	return (a * a1);
}

int integer8(int a) {
	int a11 = a % 10 * 10;
	int a1 = a / 10;
	return (a11 + a1);
}

int integer9(int a) {
	return (a / 100);
}

int integer10_1(int a) {
	return (a % 10);
}

int integer10_2(int a) {
	return (a / 10 % 10);
}

int integer11_1(int a) {
	int aa, b, c;
	aa = a / 100;
	b = a / 10 % 10;
	c = a % 10;
	return (aa + b + c);
}

int integer11_2(int a) {
	int aa, b, c;
	aa = a / 100;
	b = a / 10 % 10;
	c = a % 10;
	return (aa * b * c);
}

int integer12(int a) {
	int aa, b, c;
	aa = a / 100;
	b = a / 10 % 10 * 10;
	c = a % 10 * 100;
	return (aa + b + c);
}

int integer13(int a) {
	int aa, b;
	aa = a % 100 * 10;
	b = a / 100;
	return(aa + b);
}

int integer14(int a) {
	int aa, b;
	aa = a / 10;
	b = a % 10 * 100;
	return (aa + b);
}

int integer15(int a) {
	int aa, b, c;
	aa = a / 100 * 10;
	b = a / 10 % 10 * 100;
	c = a % 10;
	return (aa + b + c);
}

int integer16(int a) {
	int aa, b, c;
	aa = a / 100 * 100;
	b = a / 10 % 10;
	c = a % 10 * 10;
	return (aa + b + c);
}

int integer17(int a) {
	return (a / 100 % 10);
}

int integer18(int a) {
	return (a / 1000 % 10);
}

int integer19(int a) {
	return (a / 60);
}

int integer20(int a) {
	return (a / 3600);
}

int integer21(int a) {
	return (a % 60);
}

int integer22(int a) {
	return (a % 3600);
}
 
int integer23(int a) {
	return (a % 3600 / 60);
}
 
int integer24(int a) {
	return (a % 7);
}

int integer25(int a) {
	return ((a + 3) % 7);
}

int integer26(int a) {
	return (a % 7 + 1);
}

int integer27(int a) {
	return ((a + 4) % 7 + 1);
}
 
int integer28(int a, int n) {
	return ((a + n - 2) % 7 + 1);
}

int integer29(int a, int b, int c) {
	int d = (a / c) * (b / c);
	d = d * pow(c, 2);
	return (a * b - d);
}

int integer30(int a) {
	return ((a - 1) / 100 + 1);
}