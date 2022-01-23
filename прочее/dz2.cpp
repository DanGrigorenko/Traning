    #include <iostream>
    using namespace std;

      double average(int, int, int);////////////////////////////////

    int main()
    {
    int a, b, c;
    double result;
   
    cout << "введите число а\n";
    cin >> a;
    cout << "введите число b\n";
    cin >> b;
    cout << "введите число c\n";
    cin >> c;
    result = average(a, b, c);  
    cout << "произведение этих чисел: \n" << result << endl;

    return 0;
    }

    double average(int a, int b, int c)
    {
    int pro = a * b * c;
    return pro;
    }