//函数对象
//重载函数调用操作符的类，其对象常称为函数对象
//函数对象使用重载的（）时，行为类似函数调用，也叫仿函数
//
//本质；函数对象（仿函数）是一个类，不是一个函数
//
//函数对象使用特点
//函数对象咋使用时可以像普通函数那样调用，可以有参数，可以有返回值
//函数对象超出普通函数的概念，函数对象可以有自己的状态
//函数对象可以作为参数传递

//一元谓词
//只有一个参数 且返回值为bool类型
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class great
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//int main()
//{ 
//	vector<int> v;
//	great g;
//	for (int i = 0; i < 4; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int>::iterator it=find_if(v.begin(),v.end(), great());
//	if (it == v.end()) 
//	{
//		cout << "没有比5大的数" << endl;
//	}
//	return 0;
//}

