/*BT: Viết chương trình cho 2 giờ (giờ, phút, giây) và thực hiện cộng, trừ 2 giờ này*/

#include<iostream>
#include<ctime>

using namespace std;

int main() {
	//declare time
	struct tm time1;
	struct tm time2;
	//get the fisrt time from user
	cout << "Enter time 1: \n";
	cout << "Enter hour: ";
	cin >> time1.tm_hour;
	cout << "Enter minute: ";
	cin >> time1.tm_min;
	cout << "Enter second: ";
	cin >> time1.tm_sec;
	//get the second time from user
	cout << "Enter time 2: \n";
	cout << "Enter hour: ";
	cin >> time2.tm_hour;
	cout << "Enter minute: ";
	cin >> time2.tm_min;
	cout << "Enter second: ";
	cin >> time2.tm_sec;
	//convert the fisrt time and the second time into 1 unit (second) for calculate
	int t1 = time1.tm_hour * 3600 + time1.tm_min * 60 + time1.tm_sec;
	int t2 = time2.tm_hour * 3600 + time2.tm_min * 60 + time2.tm_sec;
	//do the addition and subtraction
	int add = t1 + t2;
	int sub = t1 - t2;
	//convert the addition and subtraction into normal form
	struct tm add_time;
	add_time.tm_hour = add / 3600;
	add_time.tm_min = (add % 3600) / 60;
	add_time.tm_sec = add % 60;
	cout << "The addition is: " 
		<< add_time.tm_hour << " hours " 
		<< add_time.tm_min << " minutes "
		<< add_time.tm_sec << " second.\n";

	struct tm sub_time;
	sub_time.tm_hour = sub / 3600;
	sub_time.tm_min = (sub % 3600) / 60;
	sub_time.tm_sec = sub % 60;
	cout << "The subtraction is: "
		<< sub_time.tm_hour << " hours "
		<< sub_time.tm_min << " minutes "
		<< sub_time.tm_sec << " second.\n";
	return 0;
}
