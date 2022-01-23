#include <iostream>
using namespace std;

enum days_week {Sun, Mon, Tue, Wen, Ther, Fri, Sut};
int main() {
    days_week day1, day2;
    day1 = Mon;
    day2 = Tue;

    if (day1 < day2) {
        cout << day1 << " Наступит раньше" << endl;
    } 
    else {
        cout << day2 << " Наступит позже" << endl;
    }

    return 0;
}