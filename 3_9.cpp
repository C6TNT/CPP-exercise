//#include <iostream>
//using namespace std;
//
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//	
//	int m_A;
//	
//};
//
//class Son :public Base
//{
//public:
//	
//	Son()
//	{
//		m_A = 200;
//	}
//	
//	int m_A;
//};
//
//void test01()
//{
//	Son s;
//	cout << "m_A = " << s.m_A << endl;
//	cout << "Base m_A = " << s.Base::m_A << endl;
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
//class Base
//{
//public:
//	static int m_A;
//};
//int Base::m_A = 100;
//
//class Son :public Base
//{
//public:
//	static int m_A;
//};
//int Son::m_A = 200;
//
//void test01()
//{
//	Son s;
//	//通过对象的方式访问
//	cout << "Son m_A = " << s.m_A << endl;
//	cout << "Base m_A = " << s.Base::m_A << endl;
//	//通过类名的方式访问
//	cout << "Son m_A = " << Son::m_A << endl;
//	cout << "Base m_A = " << Son::Base::m_A << endl;
//	
//}
//
//int main()
//{
//	test01();
//	
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//class Base1
//{
//public:
//	
//	Base1()
//	{
//		m_A = 100;
//	}
//	
//	int m_A;
//};
//
//class Base2
//{
//public:
//	
//	Base2()
//	{
//		m_A = 200;
//	}
//	
//	int m_A;
//};
//
//class Son :public Base1, public Base2
//{
//public:
//	
//	Son()
//	{
//		m_B = 200;
//	}
//	
//	int m_B;
//};
//
//void test01()
//{
//	Son s;
//	cout << "Base1::m_A = " << s.Base1::m_A << endl;
//	cout << "Base2::m_A = " << s.Base2::m_A << endl;
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

class Animal
{
public:
	int m_Age;
};

class Sheep :virtual public Animal {};
class Tuo :virtual public Animal {};
class SheepTuo :public Sheep, public Tuo {};

void test01()
{
	SheepTuo st;
	st.m_Age = 28;
	st.Sheep::m_Age = 28;
	cout << "st.m_Age = " << st.m_Age << endl;
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
}

int main()
{
	
	test01();
	
	system("pause");
	return 0;
}



