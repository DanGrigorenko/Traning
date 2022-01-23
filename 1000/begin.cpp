#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    return 0;
}

double begin1(int a) {
    int p = 4 * a;
    return p;
}

double begin2(int a) {
    int s = a * a;
    return s;
}

double begin3(double a, double b) {
    int p = 2 * (a + b);
    return p;
}

double begin4(double d) {   
    double pi = 3.14;
    double L = pi * d;
    return L;
}

double begin5_1(double a) { 
    double v = a * a * a;
    return v;
}
double begin5_2(double a) { 
    double s = 6 * pow(a, 2);
    return s;
}

double begin6_1(double a, double b, double c){ 
    double v = a * b * c;
    return v;
}
double begin6_2(double a, double b, double c){ 
    double s = 2 * (a * b + b * c + a * c);
    return s;
}

double begin7_1(double r) { 
    const double pi = 3.14;
    double l = 2 * pi * r;
    double s = pi * (r * r);
    return l;
}
double begin7_2(double r) { 
    const double pi = 3.14;
    double s = pi * (r * r);
    return s;
}

double begin8(double a, double b) {
    double s = (a + b) / 2;
    return s;
}

double begin9(double a, double b) {
    double s = sqrt(a * b);
    return s;
}

double begin10_1(double a, double b) { 
    double s = (a * a) + (b * b);
    return s;
}
double begin10_2(double a, double b) { 
    double r = (a * a) - (b * b);
    return r;
}
double begin10_3(double a, double b) { 
    double m = (a * a) * (b * b);
    return m;
}
double begin10_4(double a, double b) { 
    double ch = (a * a) / (b * b);

    return ch;
}

double begin11_1(double a, double b) { 
    double s = fabs(a + b);
    return s;
}
double begin11_2(double a, double b) { 
    double r =fabs(a - b);
    return r;
}
double begin11_3(double a, double b) { 
    double m =fabs(a * b);
    return m;
}
double begin11_4(double a, double b) { 
    double ch = fabs(a / a);
    return ch;
}

double begin12_1(double a, double b, double c) { 
    double p = a + b + c;
    double gipatinuza = sqrt(pow(a, 2) + pow(b, 2));
    return p;
}
double begin12_2(double a, double b, double c) { 
    double gipatinuza = sqrt(pow(a, 2) + pow(b, 2));
    return gipatinuza;
}

double begin13(double r1, double r2) { 
    double s1 = 3.14*pow(r1,2);
    double s2 = 3.14*pow(r2,2);
    double s3 = s1 - s2;
    return s3;
}

double begin14(double l) { 
    double r = l / 2 * 3.14;
    double S = 3.14 * pow(r, 2);
    return S;
}

double begin15(double s) {
    double d = 2 * sqrt( s / 3.14);
    double l = 3.14 * d;
    return l;
}

int begin16(int x1, int x2) {
    double res = fabs(x2 - x1);
    return res;
}

int begin17(int A, int B, int C) {
    double sum = A + B + C;
    return sum;
}

int begin18(int A, int B, int C) {
    double res = A * B * C;
    return res;
}

double begin19_1(int x1, int x2, int y1, int y2) { 
    double p = (x1 - x2) + (y1 - y2);
    return p;
}
double begin19_2(int x1, int x2, int y1, int y2) {
    double s = (x1 - x2) * (y1 - y2);
    return s;
}

double begin20(int x1, int x2, int y1, int y2) {
    double res =  sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return res;
}

double begin21(int x1, int x2,int x3, int y1, int y2,int y3) {
    double a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(y3 - x3,2));
    double p = (a * 3) / 2;
    double s = sqrt(p * (p - a) * 3);
    return s;
}

void begin22(int a, int b) {
    int buff = b;
    b = a;
    a = buff;
    cout << a << " " << b;
}

void begin23(int a, int b, int c) {
    b = a;
    c = b;
    a = c;
    cout << a << b << c;
}

void begin24(int a, int b, int c) {
    c = a;
    b = c;
    a = b;
    cout << a << b << c;
}

int begin25(int x) {
    double y = 3 * pow(x, 6) - 6 * pow(x, 2);
    return y;
}

int begin26(int x) {
    double y = 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;
    return y;
}

void begin27(int a) {
    int z = a * a;
    cout << z;
    z = z * a * a;
    cout << z;
    z = z * a * a * a;
    cout << z;
}

//begin 28

double begin29(int a) {
    double res = (a * 180) / 3.14;
    return res;
}

double begin30(int a) {
    double res = 180.0 / a;
    return res;
}

double begin31(int t) {
    double res =  (t - 32) * 5.0 / 9;
    return res;
}

double begin32(int t) {
    double res = (9 / 5.0) * t + 32;
    return res;
}

double begin33(double x, double y, double a) {
    double res = y * (a / x);
    return res;
}

double begin34(double x, double y, double a, double b) {
    double shokolad = x / a;
    double iris = y / b;
    double res = shokolad - iris;
    return res;
}

double begin35(double v, double u, double t1, double t2) {
    double res = v * t1 + (v - u) * t2;
    return res;
}

double begin36(double V1, double V2, double S, double T) {
    double res = S + V1 * T + V2 * T;
    return res;
}

double begin37(double V1, double V2, double S, double T) {
    double res =  fabs(S - (V1 * T + V2 * T));
    return res;
}

double begin38(int a, int b) { 
    double res = -1.0 * (b / a);
    return res;
}

double begin39_1(int a,int b,int c) { 
    double D = pow(b, 2) - 4 * a * c;
    double x1;
    x1 = (-1 * b + sqrt(D)) / 2 * a;
    return x1;
}

double begin39_2(int a,int b,int c) { 
    double D = pow(b, 2) - 4 * a * c;
    double x2;
    x2 = (-1 * b - sqrt(D)) / 2 * a;
    return x2;
}

double begin40_1(int a1, int b1, int c1, int a2, int b2, int c2) {
    double D;
    D = a1 * b2 - a2 * b1;
 
    double x;
    x = (c1 * b2 - c2 * b1) / D;
    return x;
}

double begin40_2(int a1, int b1, int c1, int a2, int b2, int c2) {
    double D;
    D = a1 * b2 - a2 * b1;
 
    double y;
    y= (a1 * c2 - a2 * c1) / D;
    return y;
}

