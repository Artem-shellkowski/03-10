/*
// Case 1
/*
#include <iostream>
using namespace std;
int main() {
	int day;
	cin >> day ;
		switch (day) {
		case 1: cout << "monday" << endl; break;
		case 2: cout << "tuesday" << endl; break;
		case 3: cout << "wensday" << endl; break;
		case 4: cout << "thurday" << endl; break;
		case 5: cout << "friday" << endl; break;
		case 6: cout << "saturday" << endl; break;
		case 7: cout << "sunday" << endl; break;
		default: cout << "worng day number" << endl;
		}


}
*/
// Case 2
/*
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int mark;
	cin >> mark;
	switch (mark) {
	case 1: cout << "�����" << endl; break;
	case 2: cout << "�����������������" << endl; break;
	case 3: cout << "������������������" << endl; break;
	case 4: cout << "������" << endl; break;
	case 5: cout << "�����" << endl; break;
	default: cout << "� ������ ������ � ����������� ����������� �������" << endl;
	}


}
*/
// Case 3
/*
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int manth;
	cin >> manth;
	switch (manth) {
	case 12: 
	case 1: 
	case 2: cout << "����" << endl; break;
	case 3: 
	case 4: 
	case 5: cout << "�����" << endl; break;
	case 6: 
	case 7: 
	case 8: cout << "����" << endl; break;
	case 9: 
	case 10: 
	case 11: cout << "�����" << endl; break;

	default: cout << "������� ���� 12" << endl;
	}


}
*/
// Case 4
/*
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int manth;
	cin >> manth;
	switch (manth) {
	case 12:
	case 5:
	case 3:
	case 8:
	case 7:
	case 10:
	case 1:cout << "� ���� ������ 31 ����" << endl; break;
	case 2: cout << "� ���� ������ 28 ����" << endl; break;
	case 6:
	case 11:
	case 9:
	case 4:cout << "� ���� ������ 30 ���� " << endl; break;
	default: cout << "������� ���� 12" << endl;
	}


}
*/

// Case 5
/*
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int Verbs;
	int A ;
	int B;
	cout << "������� ����� �: ";
	cin >> A ;
	cout << "������� ����� B: ";
	cin >> B;
	switch (Verbs) {
	case 1:cout << A + B ;
	case 2:cout << A - B;
	case 3:cout << A * B;
	case 4:cout << A / B;
	default: cout << "������������ ���� 4 ��������" << endl;
	}


}
*/
// ������ � if-else 1
/*
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "������� a ";
	cin >> a;
	if (a == 0)
	{
		cout << "�����";
	}
	else
	{
		cout << "�������";
	}

}
*/
// ������ � if-else 2
/*
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "������� a ";
	cin >> a;
	if (a > 0)
	{
		cout << "�����";
	}
	else
	{
		cout << "�������";
	}

}
*/
// ������ � if-else 3
/*
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "������� a ";
	cin >> a;
	if (a < 0)
	{
		cout << "�����";
	}
	else
	{
		cout << "�������";
	}

}
*/
// ������ � if-else 4
/*
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "������� a ";
	cin >> a;
	if (a >= 0)
	{
		cout << "�����";
	}
	else
	{
		cout << "�������";
	}

}
*/
// ������ � if-else 5
/*
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "������� a ";
	cin >> a;
	if (a != 0)
	{
		cout << "�����";
	}
	else
	{
		cout << "�������";
	}

}
*/
