#include<iostream>
using namespace std;

void addition(void)
{
	cout << "Enter two numbers:" << endl;
	int v1 = 0, v2 = 0;
	cin >> v1 >> v2;
	cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << endl;
}

void helloworld(void)
{
	cout << "Hello World!" << endl;
}

void multiplication(void)
{
	cout << "Enter two number:" << endl;
	int v1 = 0, v2 = 0;
	cin >> v1 >> v2;
	cout << "The product of " << v1 << " and " << v2 << " is " << v1 * v2 << endl;
}

void notes(void)
{
	cout << "/*" << endl;
	cout << "*/" << endl;
	cout <</*"*/" /* "/*" */ << endl;
}

int main()
{
	//标准输入输出在加法中的应用
	addition();
	//输出Hello_World
	helloworld();
	//标准输入输出在乘法中的应用
	multiplication();
	//注释对标准输入输出的影响
	notes();

	return 0;
}