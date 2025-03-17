#include <iostream>
using namespace std;

//class AbstractDrinking
//{
//public:
//	
//	virtual void Boil() = 0;
//	
//	virtual void Brew() = 0;
//	
//	virtual void PutInCup() = 0;
//	
//	virtual void PutSomething() = 0;
//	
//	virtual ~AbstractDrinking()
//	{}
//	
//	void MakeDrink()
//	{
//		Boil();
//		Brew();
//		PutInCup();
//		PutSomething();
//	}
//	
//};
//
//class Coffee :public AbstractDrinking
//{
//public: 
//	virtual void Boil()
//	{
//		cout << "煮农夫山泉" << endl;
//	}
//	
//	virtual void Brew()
//	{
//		cout << "冲泡咖啡" << endl;
//	}
//	
//	virtual void PutInCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//	
//	virtual void PutSomething()
//	{
//		cout << "加入牛奶和糖" << endl;
//	}
//};
//
//class Tea :public AbstractDrinking
//{
//	public: 
//	virtual void Boil()
//	{
//		cout << "煮农夫山泉" << endl;
//	}
//	
//	virtual void Brew()
//	{
//		cout << "冲泡茶叶" << endl;
//	}
//	
//	virtual void PutInCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//	
//	virtual void PutSomething()
//	{
//		cout << "加入柠檬" << endl;
//	}
//};
//
//void doWork(AbstractDrinking *abs)
//{
//	abs->MakeDrink();
//	delete abs;
//}
//
//void test01()
//{
//	AbstractDrinking *abs = new Coffee;
//	abs->MakeDrink();
//	delete abs;
//}

class CPU
{
public:
	virtual void calculate() = 0;
	
	virtual ~CPU(){}
	
};

class GPU
{
public:
	virtual void display() = 0;
	
	virtual ~GPU(){}
};

class Memory
{
public:
	virtual void storage() = 0;
	
	virtual ~Memory(){}
};

class Computer
{
public:
	
	Computer(CPU *cpu, GPU *gpu, Memory *mem)
	{
		m_cpu = cpu;
		m_gpu = gpu;
		m_mem = mem;
	}
	
	void Work()
	{
		m_cpu->calculate();
		m_gpu->display();
		m_mem->storage();
	}
	
	~Computer()
	{
		if(m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		
		if(m_gpu != NULL)
		{
			delete m_gpu;
			m_gpu = NULL;
		}
		
		if(m_mem != NULL)
		{
			delete m_cpu;
			m_mem = NULL;
		}
		
		
	}
	
private:
	CPU *m_cpu;
	GPU *m_gpu;
	Memory *m_mem;
};

class IntelCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Intel的CPU正在工作" << endl;
	}
};

class IntelGPU :public GPU
{
public:
	virtual void display()
	{
		cout << "Intel的GPU正在工作" << endl;
	}
};

class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Intel的Memory正在工作" << endl;
	}
};

class LenovoCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Lenovo的CPU正在工作" << endl;
	}
};

class LenovoGPU :public GPU
{
public:
	virtual void display()
	{
		cout << "Lenovo的GPU正在工作" << endl;
	}
};

class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo的Memory正在工作" << endl;
	}
};

void test01()
{
	CPU *IntelCpu = new IntelCPU;
	GPU *IntelGpu = new IntelGPU;
	Memory *IntelMem = new IntelMemory;
	
	Computer *computer1 = new Computer(IntelCpu, IntelGpu, IntelMem);
	computer1 ->Work();
	delete computer1;
	
	cout << "----------------------------" << endl;
	
	Computer *computer2 = new Computer(new LenovoCPU, new LenovoGPU, new LenovoMemory);
	computer2->Work();
	delete computer2;
	
	cout << "----------------------------" << endl;
	
	Computer *computer3 = new Computer(new IntelCPU, new IntelGPU, new LenovoMemory);
	computer3->Work();
	delete computer3;
}

int main()
{
	
	test01();
	
	system("pause");
	return 0;
}

