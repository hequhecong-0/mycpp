#include <iostream>
using namespace std;
#define M 3			// ����Ĭ�ϵ�����Ϊ3��2��
#define N 2
class Matrix    // ������
{
private:
	int **p;				// ��ά�������ڴ洢����Ԫ��
	int row;			//��
	int col;				//��
public:
	Matrix(int r=M,int c=N)    // ���캯����Ĭ��������Ϊ3,2
	{
		static int a=1;					// ���þ�̬��Աaͳ�ƹ��캯�����õĴ���
		cout<<"�����"<<a<<"�����󣬾����ʼ��Ϊ0"<<endl;
		row=r;
		col=c;
		p=new int*[row];				// p������ָ�룬Ҳ�����е�ַ
		for(int i=0; i<row; i++)
			p[i]=new int[col];			// ÿ��ָ�뿪��һ���г��ȵĿռ�
		for(int i=0; i<row; i++)
			for(int j=0; j<col; j++)
			p[i][j]=0;				// ��ʼ��Ϊ0
			//�ȼ���*(*(p+i)+j)=0;		
		cout<<endl;
		a++;
	}
	void input()		// ���뺯����Ĭ��������Ϊ3,2
	{
		cout<<"������һ��"<<row<<"��"<<col<<"�еľ���"<<endl;
		for(int i=0; i<row; i++)
			for(int j=0; j<col; j++)
			cin>>p[i][j];
		cout<<endl;
	}
	void display()  		const	// �������
	{	
		cout<<"����Ϊ�� "<<endl;
		for(int i=0; i<row; i++)
		{
			for(int j=0; j<col; j++)
			cout<<p[i][j]<<" ";
			cout<<endl;
		}
	}
	Matrix& operator + (Matrix &n)		// ���������+�����ض��������
	{
		for(int i=0; i<row; i++)
			for(int j=0; j<col; j++)
				p[i][j]+=n.p[i][j];
		return *this;
	}
};
int main()
{
	Matrix m,n;		// ʵ��������m,n��Ĭ��������Ϊ3��2,��ָ��������
	// ���Ҿ���Ԫ���ڹ��캯���г�ʼ��Ϊ0
	m.input();	
	m.display();
	n.input();
	n.display();
	cout<<"����������Ӻ� ";
	(m+n).display();
	return 0;
}