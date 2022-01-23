#include<iostream>

using namespace std;
int main() {

    return 0;
}

bool boolean1(int A) {
    if (A > 0) {
        return true;
    }
    return false;
}

bool boolean2(int A) {
    if (A % 2 != 0) {
        return true;
    }
    return false;
}

bool boolean3(int A) {
    if (A % 2 == 0) {
        return true;
    }
    return false;
}

bool boolean4(int A, int B) {
    if (A > 2 && B  <= 3) {
        return true;
    }
    return false;
}

bool boolean5(int A, int B) {
    if (A >= 0 && B <= -2) {
        return true;
    }
    return false;
}

bool boolean6(int A, int B, int C) {
    if (A < B && A < C && B < C) {
        return true;
    }
    return false;
}

bool boolean7(int A, int B, int C) {
    if (B > A && B < C) {
        return true;
    }
    return false;
}

bool boolean8(int A, int B) {
    if (A % 2 != 0 && B % 2 != 0) {
        return true;
    }
    return false;
}

bool boolean9(int A, int B) {
    if (A % 2 != 0 || B % 2 != 0) {
        return true;
    }
    return false;
}

bool boolean10(int A, int B) {
    if (A % 2 != 0 ^ B % 2 != 0) {
        return true;
    }
    return false;
}

bool boolean11(int A, int B) {
    if (A % 2 == 0 && B % 2 == 0) {
        return true;
    }
    return false;
}

bool boolean12(int A, int B, int C) {
    if (A > 0 && B > 0 && C > 0) {
        return true;
    }
    return false;
}

bool boolean13(int A, int B, int C) {
    if (A > 0 || B > 0 || C > 0) {
        return true;
    }
    return false;
}

bool boolean14(int A, int B, int C) {
    if (A > 0 ^ B > 0 ^ C > 0) {
        return true;
    }
    return false;
}

bool boolean15(int A, int B, int C) {
    if ((A > 0 && B > 0) ^ (A > 0 && C > 0) ^ (B > 0 && C > 0)) {
        return true;
    }
    return false;
}

bool boolean16(int A) {
    if (A % 2 == 0 && A > 9 && A < 100) {
        return true;
    }
    return false;
}

bool boolean17(int A) {
    if (A % 2 != 0 && A > 99 && A < 1000) {
        return true;
    }
    return false;
}

bool boolean18(int A, int B, int C) {
    if ((A == B) || (A == C) || (B == C)) {
        return true;
    }
    return false;
}

bool boolean19(int A, int B, int C) 
{
    if ((A == (-1) * B || A == (-1) * C || B == (-1) * C)){
        return true;
    }
    return false;
}

bool boolean20(int A, int B, int C) {
    if (A != B && A != C && B != C){
        return true;
    }
    return false;
}

bool boolean21(int A, int B, int C) {
    if (A + 1 ==  B && B + 1 == C){
        return true;
    }
    return false;
}

bool boolean22(int A, int B, int C) {
    if ((A + 1 ==  B && B + 1 == C) || (A - 1 ==  B && B - 1 == C) ){
        return true;
    }
    return false;
}

bool boolean23(int A, int B, int C) {
    if ((A + 1 ==  B && B + 1 == C) || (A - 1 ==  B && B - 1 == C) ){
        return true;
    }
    return false;
}

bool boolean24(double A, double B, double C) {
    double D = 0;
    D = (B * B) - (4 * A * C);
    if (D >= 0) {
        return true;
    }
    return false;
}

bool boolean25(int x, int y) {
    if (x < 0 && y > 0) {
        return true;
    }
    return false;
}

bool boolean26(int x, int y) {
    if (x > 0 && y < 0) {
        return true;
    }
    return false;
}

bool boolean27(int x, int y) {
    if ((x < 0 && y > 0) || (x < 0 && y < 0)) {
        return true;
    }
    return false;
}

bool boolean28(int x, int y) {
    if ((x > 0 && y > 0) || (x < 0 && y < 0)) {
        return true;
    }
    return false;
}

bool boolean29(int x, int y, int x1, int y1, int x2, int y2) {
    if (x1 < x && x < x2 && y2 < y && y < y1) {
        return true;
    }
    return false;
}

bool boolean30(int a, int b, int c) {
    if (a == b && a == c && b == c) {
        return true;
    }
    return false;
}

bool boolean31(int a, int b, int c) {
    if (a == b || a == c || b == c) {
        return true;
    }
    return false;
}

bool boolean32(int a, int b, int c) {
    if (a > 0 && b > 0 && c > 0) {
        return true;
    }
    return false;
}

bool boolean33(int a, int b, int c) {
    if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b)) {
        return true;
    }
    return false;
}

bool boolean34(int x, int y) {
    if ((x + y) % 2 != 0) {
        return true;
    }
    return false;
}

bool boolean35(int x, int y, int x2, int y2) {
    if ((x + y) % 2 != 0 == (x2 + y2) % 2 != 0) {
        return true;
    }
    return false;
}

bool boolean36(int x, int y, int x2, int y2) {
    if (x == x2 || y == y2) {
        return true;
    }
    return false;
}

bool boolean37(int x, int y, int x2, int y2) {
    if ((x - x2) <= 1 && (y - y2) <= 1) {
        return true;
    }
    return false;
}

bool boolean38(int x, int y, int x2, int y2) {
    if ((x - x2) == (y - y2) || (x == x2) || (y == y2)) {
        return true;
    }
    return false;
}

bool boolean39(int x, int y, int x2, int y2) {
    if ((x - x2) == (y - y2) || (x == x2) || (y == y2)) {
        return true;
    }
    return false;
}

bool boolean40(int x, int y, int x2, int y2) {
    if ((x - x2) == 1 && (y - y2) == 2 || (x - x2) == 2 && (y - y2) == 1) {
        return true;
    }
    return false;
}




















