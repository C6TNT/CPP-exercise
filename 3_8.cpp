//#include <iostream>
//#include <string>
//using namespace std;
//
////重载运算符
//
//class Person 
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//	
//	bool operator==(Person &p)
//	{
//		if(this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		return false;
//	}
//	
//	bool operator!=(Person &p)
//	{
//		if(this->m_Name != p.m_Name && this->m_Age != p.m_Age)
//		{
//			return false;
//		}
//		return true;
//		
//	}
//	
//	string m_Name;
//	int m_Age;
//};
//
//void test01()
//{
//	Person p1("Tom", 18);
//	Person p2("Tam", 18);
//	
//	if(p1 == p2)
//	{
//		cout << "p1和p2相等" << endl;
//	}
//	else
//	{
//		cout << "p1和p2不相等" << endl;
//	}
//	
//	if(p1 != p2)
//	{
//		cout << "p1和p2不相等" << endl;
//	}
//	else
//	{
//		cout << "p1和p2相等" << endl;
//	}
//	
//}
//
//int main()
//{
//	
//	test01();
//	
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//class MyPrint {
//public:
//	void operator()(string Str)
//	{
//		cout << Str << endl;
//	}
//
//};
//
//class MyAdd
//{
//public:
//	
//	int operator()(int num1, int num2)
//	{
//		return num1 + num2;
//	}
//	
//};
//
//void test01()
//{
//	MyPrint myprint;
//	myprint("Hello World");
//}
//
//void test02()
//{
//	MyAdd myadd;
//	
//	int temp = myadd(5, 10);
//	
//	cout << "temp = " << temp << endl;
//	
//	//匿名函数对象
//	cout << MyAdd()(100, 100) << endl;
//	
//}
//
//int main()
//{
//	
//	test01();
//	test02();
//	
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++、...(公共分类列表)" << endl;
//	}
//};
//
//class Java: public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//	
//};
//
//void test()
//{
//	Java java;
//	java.header();
//	java.left();
//	java.footer();
//	java.content();
//}
//
//int main()
//{
//	
//	test();
//	
//	system("pause");
//	return 0;
//}
#include <iostream>
using namespace std;

int main()
{
	
	
	
	system("pause");
	return 0;
}


