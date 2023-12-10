#include <iostream>
#include <iomanip>

class TimeOfDay
{
public:
    TimeOfDay(int h, int m, int ap) : hour(h), minute(m), ampm(ap) {}
    void print() const
    {
        std::cout << std::setfill('0') << std::setw(2) << hour
                  << ":" << std::setw(2) << minute;
        if (ampm == 0)
            std::cout << "AM\n";
        else
            std::cout << "PM\n";
    }
    void advance()
    {
        if (hour == 12 & minute == 59)
        {
            hour = 1;
            minute = 0;
        }
        else if (hour == 11 & minute == 59)
        {
            hour = 12;
            minute = 0;
            ampm = !ampm;
        }
        else
        {
            if (minute == 59)
            {
                minute = 0;
                ++hour;
            }
            else
            {
                ++minute;
            }
        }
    }

private:
    int hour, minute, ampm;
};

// non-member func
// i think this is awesome how non-member forces me to implement logic a certain way
// meaning i can ONLY advance using the member function.
void advance(TimeOfDay &tod, int n)
{
    for (int i = 0; i < n; ++i)
    {
        tod.advance();
    }
}

int main()
{
    TimeOfDay myTime(11, 59, 1);
    myTime.print();
    myTime.advance();
    myTime.print();
    advance(myTime, 100);
    myTime.print();
}