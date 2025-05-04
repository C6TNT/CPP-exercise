//#include <iostream>
//using namespace std;
//
//template<class T>
//void My_Swap(T &a, T &b)
//{
//	T temp = a;
//	
//	a = b;
//	b = temp;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	
//	My_Swap(a, b);
//	cout << "a =" << a << endl;
//	cout << "b =" << b << endl;
//}
//
//template<class T>
//void func()
//{
//	cout << "func调用" << endl;
//}
//
//void test02()
//{
//	func<int>();
//}
//
//int main()
//{
//	
//	//test01();
//	test02();
//	
//	system("pause");
//	
//	return 0;
//}

//#include <iostream>
//using namespace std;
////实现通用 对数组进行排序的函数
////规则 从大到小
////算法 选择
////测试 char 数组、int数组
//
//template<class T>
//void My_Swap(T &a, T &b)
//{
//	T temp = a;
//	
//	a = b;
//	b = temp;
//}
//
//
//
////排序算法
//template<class T>
//void My_Sort(T arr[], int len)
//{
//	for(int i = 0; i < len; i++)
//	{
//		int max = i;
//		for(int j = i + 1; j < len; j++)
//		{
//			if(arr[max] < arr[j])
//			{
//				max = j;
//			}
//		}
//		if(max != i)
//		{
//			My_Swap(arr[max], arr[i]);
//		}
//	}
//}
//
////提供打印模板
//template<class T>
//void printArray(T arr[], int len)
//{
//	for(int i = 0;i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//测试char数组
//	char charArr[] = "badcfe";
//	int num = sizeof(charArr) / sizeof(char);
//	My_Sort(charArr, num);
//	printArray(charArr, num);
//
//}
//
//void test02()
//{
//	int intArr[] = {7, 5, 1, 3, 9, 2, 4, 6, 8};
//	int num = sizeof(intArr) / sizeof(int);
//	
//	My_Sort(intArr, num);
//	printArray(intArr, num);
//	
//	
//}
//
//int main()
//{
//	
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
////普通函数
//int My_Add01(int a, int b)
//{
//	return a + b;	
//}
//
//template<class T>
//T My_Add02(T a, T b)
//{
//	return a + b;
//}
//
//void test01()
//{
//	int a = 10;
//	//int b = 20;
//	char c = 'c';
//	
//	cout << My_Add01(a, c) << endl;
//		
//	//自动类型推导
//	cout << My_Add02<int>(a, c) << endl;
//}
//
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
//#include <string>
//
//template<class NameType, class AgeType>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	
//	void Show_Person()
//	{
//		cout << "name: " << this->m_Name << " age: " << this->m_Age << endl;
//	}
//	
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//void test01()
//{
//	Person<string, int>p1("孙悟空", 999);
//	p1.Show_Person();
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
//template<class NameType, class AgeType = int>
//class Person {
//public:
//	Person(NameType Name, AgeType Age) 
//	{
//		this->m_Name = Name;
//		this->m_Age = Age;
//	}
//
//	void showPerson() 
//	{
//		cout << "name: " << this->m_Name << " age: " << this->m_Age << endl;
//	}
//	NameType m_Name;
//	AgeType m_Age;
//	
//};
//
//void test01()
//{
//	Person<string>p1("猪八戒", 999);
//	p1.showPerson();
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
//#include <string>
//
////类模板对象做函数参数
//
//template<class T1, class T2>
//class Person {
//public:
//	Person(T1 name, T2 age) 
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void ShowPerson() 
//	{
//		cout << "姓名： " << this->m_Name << " 年龄： " << this->m_Age << endl;	
//	}
//	
//	T1 m_Name;
//	T2 m_Age;
//	
//};
//
////1、指定传入类型
//
//void printPerson1(Person<string, int>&p)
//{
//	p.ShowPerson();
//}
//
//void test01()
//{
//	Person<string, int>p("孙悟空", 100);
//	printPerson1(p);
//}
////2、参数模板化
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>&p)
//{
//	p.ShowPerson();
//	cout << "T1的类型为： " << typeid(T1).name() << endl;
//	cout << "T2的类型为： " << typeid(T2).name() << endl;
//}
//
//void test02()
//{
//	Person<string, int>p("猪八戒", 90);
//	printPerson2(p);
//}
//
////3、整个类模板化
//
//template<class T>
//void printPerson3(T &p)
//{
//	p.ShowPerson();
//	cout << "T1的类型为： " << typeid(T).name() << endl;
//}
//
//void test03()
//{
//	
//	Person<string , int>p("唐僧",30);
//	printPerson3(p);
//	
//}
//
//int main()
//{
//	
//	test03();
//	
//	system("pause");
//	
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
////类模板与继承
//template<class T>
//class Base
//{
//	T m;
//};
//
////class Son :public Base //错误的 必须要知道父类中T的类型，才能继承给子类
//class Son :public Base<int>
//{
//	
//};
//
//void test01()
//{
//	Son s1;
//}
//
////如果想灵活指定父类中T的类型，子类也需要变成类模板
//template<class T1, class T2>
//class Son2 :public Base<T2>
//{
//public:
//	Son2()
//	{
//		cout << "T1的类型为：" << typeid(T1).name() << endl;
//		cout << "T2的类型为：" << typeid(T2).name() << endl;
//	}
//	T1 obj;
//};
//
//void test02()
//{
//	Son2<int, char>S2;
//}
//
//int main()
//{
//	
//	test02();
//	
//	system("pause");
//	
//	
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <string>
//#include "Person.hpp"
////
////template<class T1, class T2>
////class Person {
////	int YourVar;
////public:
////	Person(T1 name, T2 age);
//////	{
//////		this->m_Name = name;
//////		this->m_Age = age;
//////	}
////	
////	void ShowPerson();
//////	{
//////		cout << "name: " << this->m_Name << " age: " << this->m_Age << endl; 
//////	}
////	
////	T1 m_Name;
////	T2 m_Age;
////};
////
//////构造函数的类外实现
////template<class T1, class T2>
////Person<T1, T2>::Person(T1 name, T2 age)
////{
////	this->m_Name = name;
////	this->m_Age = age;
////}
////
//////成员函数的类外实现
////template<class T1, class T2>
////void Person<T1, T2>:: ShowPerson()
////{
////	cout << "name: " << this->m_Name << " age: " << this->m_Age << endl;
////}
//
//void test01()
//{
//	Person<string, int>p("Tom", 20);
//	
//	p.ShowPerson();
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

#include <iostream>
using namespace std;

template<class T1,class T2>
class Person {
	friend void printPerson(Person<T1,T2>p)
	{
		cout << "姓名： " << p.m_Name << "年龄：" << p.m_Age << endl; 
	}
public:
	Person(T1 name, T2 age) 
	{
		this ->m_Name = name;
		this ->m_Age = age;
	}
	
	T1 m_Name;
	T2 m_Age;
};

void test01()
{
	Person<string, int>p("Tom", 20);
}

int main()
{
	
	
	
	system("pause");
	return 0;
}


