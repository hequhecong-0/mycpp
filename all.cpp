
//cout��cin�Ļ����÷�
#include <iostream>
using namespace std;
int main()
{
   const double pi=3.14159;
	int radius;
	cout<<"Please enter the radius!:\n";
	cin>>radius;
	cout<<"The radius is:"<<radius<<'\n';
	cout<<"Pi is:"<<pi<<'\n';
	cout<<"Please enter a different radius!\n";
	cin>>radius;
	cout<<"Now the radius is changed to:"<<radius<<'\n';
	cout<<"Pi is still:"<<pi<<'\n';
	return 0;
}


//�����ֽ����ĺ���ʹ��
#include <iostream>
using namespace std;
int main()
{


	cout<<"The size of an int is\t\t"    <<sizeof(int)<<"bytes.\n";



	return 0;
}



//ѧ�������廪c++��������3��5
#include<iostream>
#include<cmath>
using namespace std;

const double THNY_VALUE=1e-10;

double tsin(double x)
{
	double g=0;
	double t=x;
	int n=1;
	do{
		g+=t;
		n++;
		t=-t*x*x/(2*n-1)/(2*n-2);
	}while(fabs(t)>THNY_VALUE);
	return g;
}

int main()
{
	double k,r,s;
	cout<<"r= ";
	cin>>r;
	cout<<"s= ";
	cin>>s;
	if(r*r<=s*s)
		k=sqrt(tsin(r)*tsin(r)+tsin(s)*tsin(s));
	else
		k=tsin(r*s)/2;
	cout<<k<<endl;
	return 0;
}

//ѧ�������廪c++��������3��6��ɸ����Ϸ
#include<iostream>
#include<cstdlib>

using namespace std;

enum GameStatus{WIN,LOSE,PLAYING};
int main()
{
	int sum,myPoint;
	GameStatus status;
	unsigned seed;
	int rollDice();
	cout<<"Please enter an unsigned integer:";
	cin>>seed;
	srand(seed);
	sum=rollDice();
	
	switch(sum)
	{
		case 7:
		case 11:
			status=WIN;
			break;
		case 2:
		case 3:
		case 12:
			status=LOSE;
			break;
		default:
			status=PLAYING;
			myPoint=sum;
			cout<<"point is"<<myPoint<<endl;
			break;
	}
	while(status==PLAYING){
		sum=rollDice();
		if(sum==myPoint)
			status=WIN;
		else if(sum=7)
			status=LOSE;
	}

	if(status==WIN)
		cout<<"player wins"<<endl;
	else
		cout<<"player loses"<<endl;
	return 0;
}

int rollDice()
{
	int die1=1+rand()%6;
	int die2=1+rand()%6;
	int sum=die1+die2;
	cout<<"player rolled"<<die1<<"+"<<
		die2<<"="<<sum<<endl;
	return 0;
}



#include<iostream>
#include <string>
using namespace std;

class Cstu
{
public:
	string name;
	int age;
	float score;
public:
	float checkAgeScore(int age,float score)
	{
		if(age<16||age>25)
			throw age;
		if(score<0||score>5)
			throw score;
	}
	void set()
	{
		cin>>name;
		cin>>age;
		cin>>score;
	}
	void output()
	{
		cout <<"����:  "<<name<<endl;
		cout <<"����:  "<<age<<endl;
		cout <<"�÷�:   "<<score<<endl;
	}
};

int main()
{
	Cstu stu1;
	try
	{	
		cout<<"���������������䣨16-25�����÷֣�0-5��"<<endl;
		stu1.set();
		stu1.checkAgeScore(stu1.age,stu1.score);
	}
	catch(int)
	{
		cout<<"��������";
		return 0;
	}
	catch(float)
	{
		cout<<"�ɼ�����";
		return 0;
	}
	stu1.output();
	return 0;
}

#include<iostream>
#include <string>
using namespace std;

class Cstu
{
private:
	string name;
	int age;
	float score;
public:
	float checkAgeScore(int age,float score)
	{
		if(age<16||age>25)
			throw age;
		if(score<0||score>5)
			throw score;
	}
	void set()
	{
		cin>>name;
		cin>>age;
		cin>>score;
	}
	int Getage()
	{
		return age;
	}
	float Getscore()
	{
		return score;
	}
	void output()
	{
		cout <<"����:  "<<name<<endl;
		cout <<"����:  "<<age<<endl;
		cout <<"�÷�:   "<<score<<endl;
	}
};

int main()
{
	Cstu stu1;
	try
	{	
		cout<<"���������������䣨16-25�����÷֣�0-5��"<<endl;
		stu1.set();
		stu1.checkAgeScore(stu1.Getage(),stu1.Getscore());
	}
	catch(int)
	{
		cout<<"��������";
		return 0;
	}
	catch(float)
	{
		cout<<"�ɼ�����";
		return 0;
	}
	stu1.output();
	return 0;
}



#include <iostream>
using namespace std;
void fun(char *s)
{
	char t;	
	int k;
	int j=0;
	while( s[j++] ); // j��λ��'\0'�ĺ�һλ
	k=j-2;
	for (int i =0;i<(j-1)/2;i++,k--)   //����forʵ��ǰ�󽻻�
		{
			t=s[k];
			s[k]=s[i];
			s[i]=t;
	   }
}
int main()
{	

	char *p=new char[999];

	cout <<"������һ���ַ���"<<endl;
	gets(p);
	fun(p);
	cout <<"���ַ���ת��Ϊ�� "<<endl;
	puts(p);	
	delete [ ] p;
	return 0;

}

#include <iostream>
using namespace std;
void fun(char *s)
{
	char t;	
	int k;
	int j=0;
	while( s[j++] ); // j��λ��'\0'�ĺ�һλ
	k=j-2;
	for (int i =0;i<(j-1)/2;i++,k--)   //����forʵ��ǰ�󽻻�
		{
			t=s[k];
			s[k]=s[i];
			s[i]=t;
	   }
     	s[j-1]='\0';
}
int main()
{	
	int size;
	cout <<"������һ���ַ����ĳ���";
	cin >>size;
	char *p=new char[999];
	//char p[999];
	cout <<"������һ���ַ���"<<endl;
	cin>>p;
	fun(p);
	cout <<"���ַ���ת��Ϊ�� "<<endl;
	puts(p);	
	cout<<p;
	return 0;

}



#include <iostream>
#include<string>
using namespace std;
#define num 5									//ͨ���޸�num��ֵ�������ַ����ĸ���
#define size 20									//ͨ���޸�size��ֵ�������ַ�������󳤶�

class Cstr
{
public:
	char p[num][size];
	Cstr()                                            //���캯���Զ��������ڸ�����p����ֵ
	 {
		int i=0;
		cout <<"������" << num << "���ַ���"<<endl;
		for( i=0; i<num;i++)
			cin >>p[i];
	 }

	char*  findmax(Cstr &a , int &n)				//ʵ��Ѱ����ַ����ĵ�ַ��size
	{
			int i=1;
			int j=0;
		int MAX=strlen( a.p[0] );
			while( i < num)
			{
			if( strlen( a.p[i++]) > MAX)
			MAX=strlen( a.p[i-1] );
			}
			while(strlen( a.p[j++])!=MAX );
			n=MAX;
			return ( a.p[j-1] );
	}
};

int main()
{
	int n=0;
	Cstr str;
	char *p=str.findmax(str,n);
	cout <<"����ַ����ĳ���Ϊ�� "<<n <<endl;
	cout <<"����ַ���Ϊ�� "<< endl;
	cout << p <<endl;
	return 0;
}


#include <iostream>
using namespace std;

double accum(int n)					//����1+2+3+ ����n���ӵĺ�
{
	if(n==1)
		return 1;
	else
	return  ( n+accum(n-1) ) ;
}

double fun(int n)
{
	 double sum=0.0;
	for(int i=1; i<=n; i++)
		sum+=1.0/accum (i);   //���ϵ���accum��������ʵ��1+1/(1+2)+1/(1+2+3)+1/(1+2+3+����n)���ۼ�
	return sum;
}

int main()
{
	cout<<fun(11)<<endl;
	return 0;
}


//2020 4 23 ��ҵ
#include <iostream>
using namespace std;
class Point
{
private:
	double X,Y;
public:
	 Point(double a, double b)
	 {
		 X=a;
		 Y=b;
	 }
	 Point()
	 {
	 }
	 Point(Point &p)
	 {
		 X=p.GetX();
		 Y=p.GetY();
	 }
	 double GetX()
	 {
		 return X;
	 }
	 double GetY()
	 {
		 return Y;
	 }
};
class Line
{
private:
	Point A,B;
	double length;
public:
	Line(Point p1, Point p2)
	{
		A=p1;
		B=p2;
		length=sqrt( pow(A.GetX()-B.GetX(), 2)+pow(A.GetY()-B.GetY(), 2) );
	}
	double GetLength()
	{
		return length;
	}
};

int main()
{
	Point a(0,0);
	Point b(3,4);
	Line line( a, b );
	cout<<"�������Ϊ: "<<line.GetLength();
	return 0;
}


//2020 4 28ʵ����ҵ
��һ�⣺
#include <iostream>
using namespace std;

class Gril;
class Boy
{
private:
	char *name;
   	int age;
public:
	Boy(char N[],int a):age(a)
	{
		name=new char [strlen(N)+1];
		strcpy_s(name,strlen(N)+1,N);
	}
	~Boy()
	{
		delete [ ] name;
	}
	void Print()
	{
		cout<<"���������� "<<name<<endl;
		cout<<"�������䣺 "<<age<<endl;
	}
	//void VistGril(Gril & gril)								//��3�ʺ͵�5����ͼ����Gril���˽�г�Աʱ���ע��
	//{
	//	cout<<"Ů�������� "<<gril.name<<endl;
	//	cout<<"Ů�����䣺 "<<gril.age<<endl;
	//}

	//friend Gril;												//��2������Gril��Boy��Ԫʱ���ע��
	friend void VisitBoyGril(Boy & boy,Gril & gril);		//��6�ʽ��ע��
};

class Gril
{
private:
	char *name;
	int age;
public:
	Gril(char N[],int a):age(a)
	{
		name=new char [strlen(N)+1];
		strcpy_s(name,strlen(N)+1,N);
	}
	~Gril()
	{
		delete [ ] name;
	}
	void Print()
	{
		cout<<"Ů�������� "<<name<<endl;
		cout<<"Ů�����䣺 "<<age<<endl;
	}
	//void VistBoy(Boy & boy)									//��2�ʷ���Boy˽�г�Աʱ���ע��
	//{
	//	cout<<"���������� "<<boy.name<<endl;
	//	cout<<"�������䣺 "<<boy.age<<endl;
	//}

	//friend Boy;						//�ڵ�5������Boy��Gril����Ԫ��ʱ����ע��
	friend void VisitBoyGril(Boy & boy,Gril & gril);		//��6�ʽ��ע��
};

void VisitBoyGril(Boy & boy,Gril & gril)					//��6�ʽ��ע��
{
	cout<<"��������: "<<boy.name<<endl;
	cout<<"��������: "<<boy.age<<endl;
	cout<<"Ů������: "<<gril.name<<endl;
	cout<<"Ů������: "<<gril.age<<endl;
}

int main()
{
	Boy boy("�¿���",19);
	Gril gril("��ĳĳ",18);
	//boy.Print();					//��4��������Եĳ�Ա����ʱ���ע��
	//gril.Print();					//
	//boy.VistGril(gril);			//��3��,��5����ͼ����Gril���˽�г�Աʱ���ע��
	//gril.VistBoy(boy);   		//��2�ʷ���Boy˽�г�Աʱ���ע��
	 VisitBoyGril(boy, gril);	//��6�ʽ��ע��
	return 0;
}

�ڶ��⣺
ͷ�ļ����룺

#include <iostream>
using namespace std;

class Score
{
private:
	int hometeam;
	int opponent;
public:
	Score(int h=0, int o=0);
	void Set(int h,int o);
	int GetHometeam() const;
	int GetOpponent() const;
	void Display() const;
};

Score ::	Score(int h, int o)
	{
		hometeam=h;
		opponent=o;
	}
void Score ::  Set(int h,int o)
	{
		hometeam=h;
		opponent=o;
	}
int Score :: GetHometeam() const
	{
		return hometeam;
	}
int Score :: GetOpponent() const
	{
		return opponent;
	}
void Score :: Display() const
	{
		cout<<hometeam<<": "<<opponent<<endl;
	}

void result(Score *p, Score &e)
{
	int coutHometeamWins=0;
	for(int i=0; i<4; i++)
	{
	 if ( p[i].GetHometeam()>p[i].GetOpponent() )
		{
			coutHometeamWins++;
		}
	}
	e.Set(coutHometeamWins, 5-coutHometeamWins);
}

Դ�ļ����룺

#include <iostream>
#include "exp3_2.h"
using namespace std;

int main()
{
	Score game[5]={Score(98, 67), Score(105, 103), Score(88, 96)};
	Score end;
	game[3].Set(83, 96);
	game[4].Set(104,110);
	int n=1;
	cout<<"��������Ҫ��ѯ�ĳ�������(��0���˳���ѯ)��\n";
	cin>>n;
	while(n!=0)
	{
		cout<<"�ó��ĵ÷�Ϊ�� ";
		game[n-1].Display();
		cin>>n;
			if (n==0)
			{
					cout<<"���˳���ѯ"<<endl;
					break;
			}
	}
	result(game,end);
	cout<<"�ܱȷ�Ϊ�� "<<endl;
	end.Display();
	if (end.GetHometeam()>end.GetOpponent())
	{
		cout<<"����ʤ����"<<endl;
	}
	else 
		cout<<"�Ͷ�ʤ����"<<endl;
	return 0;
}