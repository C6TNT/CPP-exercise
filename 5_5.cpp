//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
////vector容器存放内置数据类型
//
//void myPrint(int val)
//{
//	cout << val << endl;
//}
//
//void test01()
//{
//	//创建一个vector容器、数组
//	vector<int> v;
//	
//	//向容器中插入数据
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	//通过迭代器访问容器中的数据
////	vector<int>::iterator itBegin = v.begin();
////	vector<int>::iterator itEnd = v.end();
////	
////	while(itBegin != itEnd)
////	{
////		cout << *itBegin << endl;
////		itBegin ++;
////	}
//	//第二种for循环的遍历方式
////	for(vector<int>::iterator it = v.begin();it != v.end();it ++)
////	{
////		cout << *it << endl;
////	}
//	
//	//第三种遍历方式 利用STL提供遍历算法
//	for_each(v.begin(), v.end(), myPrint);
//}
//
//int main()
//{
//	
//	test01();
//	
//	system("pause");
//	
//	return 0;
//}

#include <iostream>
using namespace std;
#include <vector>
#include <string>

class Person{
	int YourVar;
public:
	Person(string name, int age) 
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

void test01()
{
	vector<Person>v;
	
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);
	
	//向容器中添加数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
	
	//遍历数组中的数据
	for(vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名： " << it->m_Name << " 年龄： " << it->m_Age << endl;
	}
}

int main()
{
	
	test01();
	
	system("pause");
	
	return 0;
}



