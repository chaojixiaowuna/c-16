//�����㷨
//for_each
//tansform

//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//class my//�º���
//{
//public:
//	void operator()(int val)
//	{
//		cout << val;
//	}
//};
//void print(int val)//����
//{
//	cout<<val<<endl;
//}
//int main()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	for_each(v.begin(), v.end(), my());
//	cout << endl;
//	for_each(v.begin(), v.end(), print);
//	return 0;
//}

//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//class my//�º���
//{
//public:
//	int operator()(int val)
//	{
//		cout << val;
//		return val;
//	}
//};
//void print(int val)//����
//{
//	cout << val << endl;
//}
//int main()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int> v1;
//	v1.resize(v.size());
//	transform(v.begin(), v.end(), v1.begin(), my());
//	return 0;
//}

//�����㷨
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//class Hero
//{
//public:
//	Hero(string name, int ce)
//	{
//		this->name = name;
//		this->combateffective = ce;
//	}
//	
//	string name;
//	int combateffective;
//};
//class great
//{
//public:
//	bool operator()(Hero& h, Hero& e)
//	{
//		return e.combateffective <h.combateffective;
//	}
//};
//void myprint(Hero h)
//{
//	cout << "Ӣ�����֣�" << h.name << "ս����" << h.combateffective << endl;
//}
//int main()
//{
//	vector<Hero> v;
//	Hero h1("�����", 555);
//	Hero h2("ţħ��", 222);
//	Hero h3("ɳ��", 333);
//	Hero h4("��˽�", 454);
//	Hero h5("��ɮ", 5);
//
//	v.push_back(h1);
//	v.push_back(h2);
//	v.push_back(h3);
//	v.push_back(h4);
//	v.push_back(h5);
//	sort(v.begin(), v.end(),great());
//	for_each(v.begin(), v.end(), myprint);
//	return 0;
//}

//merge�ϲ��������������������� ��
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//void myprint(int val)
//{
//	cout << val << endl;
//}
//int main()
//{
//	vector<int> v1;
//	vector<int> v2;
//	for (int i = 0; i < 5; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 2);
//	}
//	vector<int> v3;
//	v3.resize(v1.size() + v2.size());
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//	for_each(v3.begin(), v3.end(), myprint);
//	reverse(v3.begin(), v3.end());
//	for_each(v3.begin(), v3.end(), myprint);
//	return 0;
//}

//����ֵ�ۼ�
//accumulate(,,int)������ֵΪ��ʶֵ