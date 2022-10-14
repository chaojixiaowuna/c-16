//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<functional>
//using namespace std;
//class mgreater
//{
//public:
//	bool operator()(int v1)
//	{
//		return v1 > 2;
//	}
//};
//void test()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(3);
//	v.push_back(4);
//	v.push_back(2);
//	sort(v.begin(), v.end());//默认排序  升序
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)//打印
//	{
//		cout << *it << endl;
//	}
//	//搬运算法
//	vector<int> v2;
//	v2.resize(v.size());//必须提前开辟空间
//	transform(v.begin(), v.end(), v2.begin(),logical_not<bool>());//第三个元素 只能有一个参数
//	for (vector<int>::iterator vit = v2.begin(); vit != v2.end(); vit++)//打印
//	{
//		cout << *vit << endl;
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}