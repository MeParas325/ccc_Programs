#include <iostream>
#include <conio.h>
#include <ctime>
#include <windows.h>
using namespace std;

void heading(char ch, int i)
{
    int j;
    for (j = 0; j <= i; j++)
    {
        cout << ch;
    }
}

void startUp()
{
    char ch[30] = "Welcome to Calender Project.\n";
    cout << "\t\t\t";
    for (int i = 0; i < 30; i++)
    {
        Sleep(150);
        cout << ch[i];
    }
    for (int i = 0; i <= 79; i++)
    {
        Sleep(30);
        cout << "\xDB";
    }
    system("cls");
}

class calender
{
private:
    int date, month, year;

public:
    calender(int d = 1, int m = 1, int y = 1700)
    {
        date = d;
        month = m;
        year = y;
    }
    void day(int);
    void monthcal(int, int);
    bool leapyear(int);
    int DaysInMonth(int, int);
    int DayNumber(int, int, int);
};

bool calender::leapyear(int y)
{
    bool leap;
    if ((y % 4 == 0) && ((y % 100 != 0) || (y % 400 == 0)))
    {
        leap = true;
    }
    else
    {
        leap = false;
    }
    return leap;
}

int calender::DaysInMonth(int m, int y)
{
    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    case 2:
        if (leapyear(y))
        {
            return 29;
        }
        else
        {
            return 28;
        }
    default:
        return 30;
    }
}

int calender::DayNumber(int d, int m, int y)
{
    int i;
    int dow = 6;
    for (i = 1583; i < y; i++)
    {
        dow += (leapyear(i)) ? 2 : 1;
        dow += 364;
    }
    for (i = 1; i < m; i++)
    {
        dow += DaysInMonth(i, y);
    }
    dow += d;
    return dow;
}

void calender::day(int a)
{
    switch (a)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 0:
        cout << "Sunday";
        break;
    default:
        cout << "Error!";
        break;
    }
}

void calender::monthcal(int month, int year)
{
    int j, mon, c;
    j = 0;
    for (j = 0; j <= 6; j++)
    {
        day(j);
        cout << " ";
    }
    j = 1;
    c = DayNumber(--j, month, year);
    c = c % 7;
    cout << "\n";
    switch (c)
    {
    case 0:
        break;
    case 1:
        cout << "\t";
        break;
    case 2:
        cout << "\t\t";
        break;
    case 3:
        cout << "\t\t\t";
        break;
    case 4:
        cout << "\t\t\t\t";
        break;
    case 5:
        cout << "\t\t\t\t\t";
        break;
    case 6:
        cout << "\t\t\t\t\t\t";
        break;

    default:
        cout << "ERROR!";
        break;
    }
    mon = DaysInMonth(month, year);
    for (j = 1; j <= mon; j++)
    {
        cout << " " << j << "\t";
        c++;
        if (!(c % 7))
        {
            cout << "\n";
        }
    }
}

int main()
{
    int x, y, z;
    system("color 10");
    char ch;
    char t = '\xCD';
    do
    {
        system("cls");
        int i, date, year, month;
        heading(t, 7);
        cout << "Calender ranging 1700 to 2400";
        heading(t, 7);
        cout << "\n1. To jump to specific date.";
        cout << "\n2. To view calender of any given month.";
        cout << "\n3. To calculate your age.";
        cout << "\nEnter your choice: ";
        cin >> i;
        if (i == 1)
        {
            cout << "\nEnter a date(in number(dd)): ";
            cin >> date;
            if (date > 31 || date < 1)
            {
                cout << "\nPlease provide a valid date.";
                getch();
                system("cls");
                main();
            }
        month:
            cout << "Enter month(in number(mm))";
            cin >> month;
            if (month > 12 || month < 1)
            {
                cout << "\nPlease provide a valid month.";
                getch();
                goto month;
            }
        year:
            cout << "Enter a year(in number(yyyy)): ";
            cin >> year;
            if (year > 2400 || year < 1700)
            {
                cout << "Please enter year within given range.(1700-2400)";
                getch();
                goto year;
            }
            calender obj(date, month, year);
            i = obj.DayNumber(--date, month, year);
            cout << "\n"
                 << ++date << "/" << month << "/" << year << " is: ";
            i = i % 7;
            obj.day(i);
        }
        else if (i == 2)
        {
        month2:
            cout << "Enter month(in number(mm)): ";
            cin >> month;
            if (month > 12 || month < 1)
            {
                cout << "Please provide a valid month.";
                getch();
                goto month2;
            }
        year2:
            cout << "Enter year(in number(yyyy)): ";
            cin >> year;
            if (year > 2400 || year < 1700)
            {
                cout << "Please enter year within given range.(1700 - 2400)";
                getch();
                goto year2;
            }
            calender obj;
            obj.monthcal(month, year);
        }
        else if (i == 3)
        {
            cout << "Enter your date of birth: \n";
            cout << "Day(dd): ";
            cin >> date;
            if (date > 31 || date < 1)
            {
                cout << "Please provide a valid date.";
                getch();
                system("cls");
                main();
            }
        month3:
            cout << "Month(mm): ";
            cin >> month;
            if (month > 12 || month < 1)
            {
                cout << "Please provide a valid month.";
                getch();
                system("cls");
                goto month3;
            }
        year3:
            cout << "Year(yyyy): ";
            cin >> year;
            if (year > 2014 || year < 1700)
            {
                cout << "Please enter year within given range 1700 - 2400.";
                getch();
                goto year3;
            }
            long int p;
            calender dob(date, month, year);
            p = dob.DayNumber(date, month, year);
            time_t t = time(0);
            struct tm *now = localtime(&t);
            date = now->tm_mday;
            month = now->tm_mon + 1;
            year = now->tm_year + 1900;
            long int q;
            calender cur(date, month, year);
            q = cur.DayNumber(date, month, year);
            int my_y = (q - p) / 365;
            int my_m = ((q - p) % 365) / 30;
            int my_d = ((q - p) % 365) % 30;
            cout << "Your age is " << my_y << "years " << my_m << "months " << my_d << "days.\n";
        }
        cout << "\nWould you like to try again? \n Choose Y or y to try again.";
        ch = _getch();
    } while (ch == 'y' || ch == 'Y');
    cout << "\\n\nThanks for using me.\n Have a good day:)";
    return 0;
}