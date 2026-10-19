//#include <iostream>
//using namespace std;
//
//// write a program to print a total days from the beginning of year
//
//bool isLeapYear(int Year)
//{
//    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
//}
//
//int DayOfWeekOrder(int Day, int Month, int Year)
//{
//    int a, y, m;
//    a = (14 - Month) / 12;
//    y = Year - a;
//    m = Month + (12 * a) - 2;
//    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
//}
//
//int NumberOfDaysInAMonth(int Month, int Year)
//{
//    if (Month < 1 || Month > 12)
//        return 0;
//    int NumberOfDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : NumberOfDays[Month - 1];
//}
//
//string MonthName(int month) {
//    if (month == 1) return "Jan";
//    else if (month == 2) return "Feb";
//    else if (month == 3) return "Mar";
//    else if (month == 4) return "April";
//    else if (month == 5) return "May";
//    else if (month == 6) return "June";
//    else if (month == 7) return "July";
//    else if (month == 8) return "Aug";
//    else if (month == 9) return "Sep";
//    else if (month == 10) return "Oct";
//    else if (month == 11) return "Nov";
//    else if (month == 12) return "Dec";
//    return "";
//}
//
//int ReadYear()
//{
//    int Year;
//    cout << "\nPlease enter a year? ";
//    cin >> Year;
//    return Year;
//}
//
//int ReadMonth()
//{
//    int Month;
//    cout << "\nPlease enter a Month? ";
//    cin >> Month;
//    return Month;
//}
//
//int ReadDay()
//{
//    int Day;
//    cout << "\nPlease enter a Day? ";
//    cin >> Day;
//    return Day;
//}
//
//void printNumberOfDaysInTheMonth(int start, int LengthOfTheMonth) {
//    int dayCounter = start;
//
//    for (int i = 0; i < start; i++) {
//        cout << "\t";
//    }
//
//    for (int i = 1; i <= LengthOfTheMonth; i++) {
//        cout << i << "\t";
//        dayCounter++;
//
//        if (dayCounter == 7) {
//            cout << endl;
//            dayCounter = 0;
//        }
//    }
//
//    cout << endl;
//    cout << "--------------------------------------------------------\n";
//}
//
//void Print(int year, int month) {
//    cout << "\n---------------------" << MonthName(month) << "---------------------" << endl;
//    cout << "Sun" << "\t" << "Mon" << "\t" << "Tue" << "\t" << "Wed" << "\t" << "Thu" << "\t" << "Fri" << "\t" << "Sat" << endl;
//
//    printNumberOfDaysInTheMonth(DayOfWeekOrder(1, month, year), NumberOfDaysInAMonth(month, year));
//}
//
//void PrintYearCalendar(int year) {
//    cout << "\n--------------------------------------------------------\n";
//    cout << "\t\t     Calendar - " << year << "\n";
//    cout << "--------------------------------------------------------\n";
//
//    for (int i = 1; i <= 12; i++) {
//        Print(year, i);
//    }
//}
//
//int CalculateDaysFromYearStart(int day, int month, int year) {
//    int totalDays = 0;
//
//    for (int i = 1; i < month; i++) {
//        totalDays += NumberOfDaysInAMonth(i, year);
//    }
//
//    totalDays += day;
//    return totalDays;
//}
//
//int main() {
//    int day = ReadDay();
//    int month = ReadMonth();
//    int year = ReadYear();
//
//    cout << "\nNumber of Days from the beginning of the year is: "
//        << CalculateDaysFromYearStart(day, month, year) << endl;
//}