//#include <iostream>
//#include <math.h> // 为了使用常数 π
//using namespace std;
//#define  M_PI 3.14159265358979323846		// 为防止编译器不支持math.h里定义好的π,再次定义宏
//class Container // 抽象类 容器
//{
//protected:
//    double radius;
//
//public:
//    Container()
//    {
//        // 构造函数
//    }
//    Container(double r)
//    {
//        // 构造函数
//    }
//    virtual double area() = 0;   // 求表面积
//    virtual double volume() = 0; // 求体积
//    virtual void print() = 0;    // 输出相关信息
//};
//
//class Cube : public Container // 正方体类
//{
//public:
//    Cube(double r)
//    {
//        radius = r; // 构造函数
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
//        cout << "表面积为:" << area() << endl;
//        cout << "体积为:" << volume() << endl;
//    }
//};
//class Sphere : public Container // 球类
//{
//public:
//    Sphere(double r)
//    {
//        radius = r; // 构造函数
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
//        cout << "表面积为:" << area() << endl;
//        cout << "体积为:" << volume() << endl;
//    }
//};
//class Cylinder : public Container // 圆柱体类
//{
//protected:
//    double height;
//
//public:
//    Cylinder(double r, double h)
//    {
//        radius = r; // 构造函数定义半径和高
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
//        cout << "表面积为:" << area() << endl;
//        cout << "体积为:" << volume() << endl;
//    }
//};
//int main()
//{
//    Container *p = NULL;			// 定义基类空指针
//    Cube a(1);								// 分别指向基类的空间,调用子类的函数
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
