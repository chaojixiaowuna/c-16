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
//	sort(v.begin(), v.end());//Ĭ������  ����
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)//��ӡ
//	{
//		cout << *it << endl;
//	}
//	//�����㷨
//	vector<int> v2;
//	v2.resize(v.size());//������ǰ���ٿռ�
//	transform(v.begin(), v.end(), v2.begin(),logical_not<bool>());//������Ԫ�� ֻ����һ������
//	for (vector<int>::iterator vit = v2.begin(); vit != v2.end(); vit++)//��ӡ
//	{
//		cout << *vit << endl;
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}