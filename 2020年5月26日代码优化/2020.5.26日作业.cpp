#include <iostream>
using namespace std;
#define M 3			// 设置默认的行列为3行2列
#define N 2
class Matrix    // 矩阵类
{
private:
	int **p;				// 二维数组用于存储矩阵元素
	int row;			//行
	int col;				//列
public:
	Matrix(int r=M,int c=N)    // 构造函数，默认行列数为3,2
	{
		static int a=1;					// 利用静态成员a统计构造函数调用的次数
		cout<<"构造第"<<a<<"个矩阵，矩阵初始化为0"<<endl;
		row=r;
		col=c;
		p=new int*[row];				// p存数组指针，也就是行地址
		for(int i=0; i<row; i++)
			p[i]=new int[col];			// 每个指针开辟一段列长度的空间
		for(int i=0; i<row; i++)
			for(int j=0; j<col; j++)
			p[i][j]=0;				// 初始化为0
			//等价于*(*(p+i)+j)=0;		
		cout<<endl;
		a++;
	}
	void input()		// 输入函数，默认行列数为3,2
	{
		cout<<"请输入一个"<<row<<"行"<<col<<"列的矩阵"<<endl;
		for(int i=0; i<row; i++)
			for(int j=0; j<col; j++)
			cin>>p[i][j];
		cout<<endl;
	}
	void display()  		const	// 输出函数
	{	
		cout<<"矩阵为： "<<endl;
		for(int i=0; i<row; i++)
		{
			for(int j=0; j<col; j++)
			cout<<p[i][j]<<" ";
			cout<<endl;
		}
	}
	Matrix& operator + (Matrix &n)		// 重载运算符+，返回对象的引用
	{
		for(int i=0; i<row; i++)
			for(int j=0; j<col; j++)
				p[i][j]+=n.p[i][j];
		return *this;
	}
};
int main()
{
	Matrix m,n;		// 实例化对象m,n，默认行列数为3，2,可指定行列数
	// 并且矩阵元素在构造函数中初始化为0
	m.input();	
	m.display();
	n.input();
	n.display();
	cout<<"两个矩阵相加后： ";
	(m+n).display();
	return 0;
}