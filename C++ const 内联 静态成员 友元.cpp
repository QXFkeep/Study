#include<iostream>
using namespace std;


//const���γ�Ա����
//�ڳ�Ա���������const��const����thisָ����ָ��Ķ���Ҳ���Ǳ�֤�������const��Ա�����Ķ����ں����ڲ����ı䡣

//class Date
//{
//public:
//	void Display()
//	{
//		cout << "Display ()" << endl;
//		cout << "year:" << _year << endl;
//		cout << "month:" << _month << endl;
//		cout << "day:" << _day << endl << endl;
//	}
//
//	void Display() const
//	{
//		cout << "Display () const" << endl;
//		cout << "year:" << _year << endl;
//		cout << "month:" << _month << endl;
//		cout << "day:" << _day << endl << endl;
//	}
//private:
//	int _year;     // ��
//	int _month;    // ��
//	int _day;      // ��
//};
//
//void Test()
//{
//	Date d1;   //d1 �ñ��������ɵ�Ĭ�Ϲ��캯����ʼ���ġ�const���Զ����ݲ������ɿ��Ľ��
//	d1.Display();
//
//	const Date d2;   //  void Display() const
//	d2.Display();
//}
//void main()
//{
//	Test();
//}



// ȡ��ַ�������������Ĭ�ϳ�Ա����һ�㲻�����¶��壩

//

//��Ԫ�ࣺ
//�������������һ�������Ԫ����Ԫ���ÿ����Ա����������һ�������Ԫ���������ɷ�����һ�����еı�����˽�����ݳ�Ա��
class Time
{
	// Date��Time ����Ԫ������ Date���Է���Time�����г�Ա��
	friend class Date;
private:
	int _hour;
	int _minute;
	int _second;
};

class Date
{
public:
	void Display()
	{
		cout << "year:" << _year << endl;
		cout << "month:" << _month << endl;
		cout << "day:" << _day << endl;

		// ����Ϊ��Ԫ��󣬿��Է���Time���������г�Ա
		cout << "hour:" << _t._hour << endl;
		cout << "minute:" << _t._minute << endl;
		cout << "second:" << _t._second << endl << endl;
	}

private:
	int _year;     // ��
	int _month;    // ��
	int _day;      // ��

	Time _t;
};

void Test()
{
	Date d1;
	d1.Display();
}

void main()
{
	Test();
}