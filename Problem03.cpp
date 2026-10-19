//#include <iostream>
//using namespace std;
//
////The main objective is to solve it in the best way possible in very few lines
//
//
//bool isLeapYear(int Year)
//{
//	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
//}
//int NumberOfDaysInAMonth(int Month, int Year)
//{
//	if (Month < 1 || Month>12)
//		return 0;
//	int NumberOfDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31
//	};
//	return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) :NumberOfDays[Month - 1];
//}
//int ReadMonth()
//{
//	int Month;
//	cout << "\nPlease enter a Month to check? ";
//	cin >> Month;
//	return Month;
//}
//int ReadYear()
//{
//	int Year;
//	cout << "\nPlease enter a year to check? ";
//	cin >> Year;
//	return Year;
//}
//int main()
//{
//	int Year = ReadYear();
//	int Month = ReadMonth();
//	cout << "\nNumber of Days in Month [" << Month << "] is "
//		<< NumberOfDaysInAMonth(Month, Year);
//}