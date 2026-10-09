
#include <iostream>
using namespace std;
double add(double a, double b) {
    return 0;
}
double subtract(double a, double b) {
    return 0;
}
double multiply(double a, double b) {
    return 0;
}
double divide(double a, double b) {
    return 0;
}
int main() {
    double a, b;
    char op;
    cout << "请输入算式";
    if (!(cin >> a >> op >> b)) {
        cout << "输入格式不正确！" << endl;
        return 1;
    }
    switch (op) {
        case '+':
            cout << a << " + " << b << " = " << add(a, b) << endl;
            break;
        case '-':
            cout << a << " - " << b << " = " << subtract(a, b) << endl;
            break;
        case '*':
            cout << a << " * " << b << " = " << multiply(a, b) << endl;
            break;
        case '/':
            if (b == 0) {
                cout << "错误：除数不能为 0" << endl;
            } else {
                cout << a << " / " << b << " = " << divide(a, b) << endl;
            }
            break;
        default:
            cout << "不认识这个运算符：" << op << endl;
    }
    return 0;
}