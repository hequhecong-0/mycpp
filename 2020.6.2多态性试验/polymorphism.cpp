//#include <iostream>
//#include <math.h> // Ϊ��ʹ�ó��� ��
//using namespace std;
//#define  M_PI 3.14159265358979323846		// Ϊ��ֹ��������֧��math.h�ﶨ��õĦ�,�ٴζ����
//class Container // ������ ����
//{
//protected:
//    double radius;
//
//public:
//    Container()
//    {
//        // ���캯��
//    }
//    Container(double r)
//    {
//        // ���캯��
//    }
//    virtual double area() = 0;   // ������
//    virtual double volume() = 0; // �����
//    virtual void print() = 0;    // ��������Ϣ
//};
//
//class Cube : public Container // ��������
//{
//public:
//    Cube(double r)
//    {
//        radius = r; // ���캯��
//    }
//    double area()
//    {
//        return (6 * (radius * radius));
//    }
//    double volume()
//    {
//        return (radius * radius * radius);
//    }
//    void print()
//    {
//        cout << "�����Ϊ:" << area() << endl;
//        cout << "���Ϊ:" << volume() << endl;
//    }
//};
//class Sphere : public Container // ����
//{
//public:
//    Sphere(double r)
//    {
//        radius = r; // ���캯��
//    }
//    double area()
//    {
//        return (4 * M_PI * (radius * radius));
//    }
//    double volume()
//    {
//        return (4 / 3 * M_PI * (radius * radius * radius));
//    }
//    void print()
//    {
//        cout << "�����Ϊ:" << area() << endl;
//        cout << "���Ϊ:" << volume() << endl;
//    }
//};
//class Cylinder : public Container // Բ������
//{
//protected:
//    double height;
//
//public:
//    Cylinder(double r, double h)
//    {
//        radius = r; // ���캯������뾶�͸�
//        height = h;
//    }
//    double area()
//    {
//        return ((2 * M_PI * radius * height) + 2 * M_PI * (radius * radius));
//    }
//    double volume()
//    {
//        return (M_PI * (radius * radius) * height);
//    }
//    void print()
//    {
//        cout << "�����Ϊ:" << area() << endl;
//        cout << "���Ϊ:" << volume() << endl;
//    }
//};
//int main()
//{
//    Container *p = NULL;			// ��������ָ��
//    Cube a(1);								// �ֱ�ָ�����Ŀռ�,��������ĺ���
//    Sphere b(1);
//    Cylinder c(1, 2);
//    p = &a;
//    cout << p->area() << endl;
//    cout << p->volume() << endl;
//    p->print();
//    p = &b;
//    cout << p->area() << endl;
//    cout << p->volume() << endl;
//    p->print();
//    p = &c;
//    cout << p->area() << endl;
//    cout << p->volume() << endl;
//    p->print();
//    return 0;
//}
