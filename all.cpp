
//cout和cin的基础用法
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


//计算字节数的函数使用
#include <iostream>
using namespace std;
int main()
{


	cout<<"The size of an int is\t\t"    <<sizeof(int)<<"bytes.\n";



	return 0;
}



//学堂在线清华c++基础，例3—5
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

//学堂在线清华c++基础，例3—6丢筛子游戏
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
		cout <<"姓名:  "<<name<<endl;
		cout <<"年龄:  "<<age<<endl;
		cout <<"得分:   "<<score<<endl;
	}
};

int main()
{
	Cstu stu1;
	try
	{	
		cout<<"请输入姓名，年龄（16-25），得分（0-5）"<<endl;
		stu1.set();
		stu1.checkAgeScore(stu1.age,stu1.score);
	}
	catch(int)
	{
		cout<<"年龄有误";
		return 0;
	}
	catch(float)
	{
		cout<<"成绩有误";
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
		cout <<"姓名:  "<<name<<endl;
		cout <<"年龄:  "<<age<<endl;
		cout <<"得分:   "<<score<<endl;
	}
};

int main()
{
	Cstu stu1;
	try
	{	
		cout<<"请输入姓名，年龄（16-25），得分（0-5）"<<endl;
		stu1.set();
		stu1.checkAgeScore(stu1.Getage(),stu1.Getscore());
	}
	catch(int)
	{
		cout<<"年龄有误";
		return 0;
	}
	catch(float)
	{
		cout<<"成绩有误";
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
	while( s[j++] ); // j定位到'\0'的后一位
	k=j-2;
	for (int i =0;i<(j-1)/2;i++,k--)   //利用for实现前后交换
		{
			t=s[k];
			s[k]=s[i];
			s[i]=t;
	   }
}
int main()
{	

	char *p=new char[999];

	cout <<"请输入一个字符串"<<endl;
	gets(p);
	fun(p);
	cout <<"该字符串转置为： "<<endl;
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
	while( s[j++] ); // j定位到'\0'的后一位
	k=j-2;
	for (int i =0;i<(j-1)/2;i++,k--)   //利用for实现前后交换
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
	cout <<"请输入一个字符串的长度";
	cin >>size;
	char *p=new char[999];
	//char p[999];
	cout <<"请输入一个字符串"<<endl;
	cin>>p;
	fun(p);
	cout <<"该字符串转置为： "<<endl;
	puts(p);	
	cout<<p;
	return 0;

}



#include <iostream>
#include<string>
using namespace std;
#define num 5									//通过修改num的值来控制字符串的个数
#define size 20									//通过修改size的值来控制字符串的最大长度

class Cstr
{
public:
	char p[num][size];
	Cstr()                                            //构造函数自动调用用于给数组p赋初值
	 {
		int i=0;
		cout <<"请输入" << num << "个字符串"<<endl;
		for( i=0; i<num;i++)
			cin >>p[i];
	 }

	char*  findmax(Cstr &a , int &n)				//实现寻找最长字符串的地址和size
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
	cout <<"最长的字符串的长度为： "<<n <<endl;
	cout <<"最长的字符串为： "<< endl;
	cout << p <<endl;
	return 0;
}


#include <iostream>
using namespace std;

double accum(int n)					//计算1+2+3+ ……n叠加的和
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
		sum+=1.0/accum (i);   //不断调用accum（）函数实现1+1/(1+2)+1/(1+2+3)+1/(1+2+3+……n)的累加
	return sum;
}

int main()
{
	cout<<fun(11)<<endl;
	return 0;
}


//2020 4 23 作业
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
	cout<<"两点距离为: "<<line.GetLength();
	return 0;
}


//2020 4 28实验作业
第一题：
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
		cout<<"男生姓名： "<<name<<endl;
		cout<<"男生年龄： "<<age<<endl;
	}
	//void VistGril(Gril & gril)								//第3问和第5问试图访问Gril类的私有成员时解除注释
	//{
	//	cout<<"女生姓名： "<<gril.name<<endl;
	//	cout<<"女生年龄： "<<gril.age<<endl;
	//}

	//friend Gril;												//第2问声明Gril是Boy友元时解除注释
	friend void VisitBoyGril(Boy & boy,Gril & gril);		//第6问解除注释
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
		cout<<"女生姓名： "<<name<<endl;
		cout<<"女生年龄： "<<age<<endl;
	}
	//void VistBoy(Boy & boy)									//第2问访问Boy私有成员时解除注释
	//{
	//	cout<<"男生姓名： "<<boy.name<<endl;
	//	cout<<"男生年龄： "<<boy.age<<endl;
	//}

	//friend Boy;						//在第5问声明Boy是Gril的友元类时候解除注释
	friend void VisitBoyGril(Boy & boy,Gril & gril);		//第6问解除注释
};

void VisitBoyGril(Boy & boy,Gril & gril)					//第6问解除注释
{
	cout<<"男生姓名: "<<boy.name<<endl;
	cout<<"男生年龄: "<<boy.age<<endl;
	cout<<"女生姓名: "<<gril.name<<endl;
	cout<<"女生年龄: "<<gril.age<<endl;
}

int main()
{
	Boy boy("陈俊宇",19);
	Gril gril("张某某",18);
	//boy.Print();					//第4问输出各自的成员函数时解除注释
	//gril.Print();					//
	//boy.VistGril(gril);			//第3问,第5问试图访问Gril类的私有成员时解除注释
	//gril.VistBoy(boy);   		//第2问访问Boy私有成员时解除注释
	 VisitBoyGril(boy, gril);	//第6问解除注释
	return 0;
}

第二题：
头文件代码：

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

源文件代码：

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
	cout<<"请输入想要查询的场次输入(‘0’退出查询)：\n";
	cin>>n;
	while(n!=0)
	{
		cout<<"该场的得分为： ";
		game[n-1].Display();
		cin>>n;
			if (n==0)
			{
					cout<<"已退出查询"<<endl;
					break;
			}
	}
	result(game,end);
	cout<<"总比分为： "<<endl;
	end.Display();
	if (end.GetHometeam()>end.GetOpponent())
	{
		cout<<"主队胜利！"<<endl;
	}
	else 
		cout<<"客队胜利！"<<endl;
	return 0;
}