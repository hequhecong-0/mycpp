#include <iostream>
using namespace std;
class Complex
{
private:
    double real; // ʵ��
    double imag; // �鲿
public:
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(double r, double i)
    {
        real = r;
        imag = i;
    }
    void print() // �������
    {
        cout << real;
        if (imag != 0)
        {
            if (imag > 0)
                cout << " +";
            cout << imag << "i";
        }
        cout << endl;
    }
    Complex operator+(Complex &a) // ���� "+"
    {
        Complex b;
        b.real = real + a.real;
        b.imag = imag + a.imag;
        return b;
    }
    Complex operator-(Complex &a) // ���� "-"
    {
        Complex b;
        b.real = real - a.real;
        b.imag = imag - a.imag;
        return b;
    }
    Complex operator*(Complex &a) // ���� "*"
    {
        Complex b;
        b.real = (real * a.real) - (imag * a.imag);
        b.imag = (real * a.imag) + (imag * a.real);
        return b;
    }
    Complex operator/(Complex &a) // ���� "/"
    {
        Complex b;
        double t = 1 / (a.real * a.real + a.imag * a.imag);
        b.real = t * (real * a.real) + (imag * a.imag);
        b.imag = t * (imag * a.real) - (real * a.imag);
        return b;
    }
    Complex operator++() // ���� ��"++"
    {
        ++real;
        ++imag;
        return *this;
    }
    Complex operator++(int) // ���� ��"++"
    {
        Complex b;
        b.real = real++;
        b.imag = imag++;
        return b;
    }
    ~Complex()
    {
    }
};

int main()
{
    Complex c1(2.3, 4), c2(3.6, 2);
    Complex c3, c4, c5, c6;
    c3 = c1 + c2;
    c4 = c1 - c2;
    c5 = c1 * c2;
    c6 = c1 / c2;
    cout << "c1= ";
    c1.print();
    cout << "c2= ";
    c2.print();
    cout << "c1+c2= ";
    c3.print();
    cout << "c1-c2= ";
    c4.print();
    cout << "c1*c2= ";
    c5.print();
    cout << "c1/c2=";
    c6.print();
    cout << "++c1Ϊ: ";
    c3 = ++c1;
    c3.print();
    cout << "c4=c2++Ϊ: ";
    c4 = c2++;
    c4.print();
    cout << "c2��Ϊ: ";
    c2.print();
    return 0;
}
