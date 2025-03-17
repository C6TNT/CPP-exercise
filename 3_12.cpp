#include <iostream>
#include <string>
using namespace std;

//class Animal
//{
//public:
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//
//class Cat: public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小猫在说话" << endl;
//	}
//};
//
//class Dog: public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小狗在说话" << endl;
//	}
//};
//
//void do_speak(Animal &animal)
//{
//	animal.speak();
//}
//
//void test01()
//{
//	Cat cat;
//	do_speak(cat);
//	
//	Dog dog;
//	do_speak(dog);
//}

//class Calculator
//{
//public:
//	
//	int Get_Result(string oper)
//	{
//		if(oper == "+")
//		{
//			return m_Num1 + m_Num2;
//		}
//		else if(oper == "-")
//		{
//			return m_Num1 - m_Num2;
//		}
//		else if(oper == "*")
//		{
//			return m_Num1 * m_Num2;
//		}
//		return 0;
//	}
//	
//	int m_Num1;
//	int m_Num2;
//};
//
//void test01()
//{
//	Calculator c;
//	
//	c.m_Num1 = 10;
//	c.m_Num2 = 10;
//	
//	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.Get_Result("+") << endl;
//	cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.Get_Result("-") << endl;
//	cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.Get_Result("*") << endl;
//}
//
////利用多态实现计算器
//class AbstractCalculator
//{
//public:
//	
//	virtual ~AbstractCalculator()
//	{
//		
//	}
//	
//	virtual int Get_Result()
//	{
//		return 0;
//	}
//	
//	int m_Num1;
//	int m_Num2;
//};
//
//class AddCalculator :public AbstractCalculator
//{
//public:
//	int Get_Result()
//	{
//		return m_Num1  + m_Num2;
//	}
//};
//
//class SubCalculator :public AbstractCalculator
//{
//public:
//	int Get_Result()
//	{
//		return m_Num1  - m_Num2;
//	}
//};
//
//class MulCalculator :public AbstractCalculator
//{
//public:
//	int Get_Result()
//	{
//		return m_Num1  * m_Num2;
//	}
//};
//
//void test02()
//{
//	AbstractCalculator *abs =new AddCalculator;
//	abs->m_Num1 = 100;
//	abs->m_Num2 = 100;
//	
//	cout << abs->m_Num1 << "+" << abs->m_Num2 << "=" << abs->Get_Result() << endl;
//	
//	delete abs;
//	
//	abs = new SubCalculator;
//	abs->m_Num1 = 100;
//	abs->m_Num2 = 100;
//	
//	cout << abs->m_Num1 << "-" << abs->m_Num2 << "=" << abs->Get_Result() << endl;
//	
//	delete abs;
//	
//	abs = new MulCalculator;
//	abs->m_Num1 = 100;
//	abs->m_Num2 = 100;
//	
//	cout << abs->m_Num1 << "*" << abs->m_Num2 << "=" << abs->Get_Result() << endl;
//}

void test01()
{
	
}

int main()
{
	
	test01();
	
	system("pause");
	return 0;
}



