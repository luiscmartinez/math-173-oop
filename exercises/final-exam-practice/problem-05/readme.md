Class TimeOfDay represents the time of day using int members hour, minute, and ampm. Members hour and minute represent what they describe, while member ampm is set to 0 to represent ”AM” times, or anything nonzero to represent ”PM” times.

```
class TimeOfDay {
         public:
           TimeOfDay(int h, int m, int ap):  hour(h), minute(m), ampm(ap) {}
           void print() const {
             std::cout << std::setfill('0') << std::setw(2) << hour
                       << ":" << std::setw(2) << minute;
             if (ampm == 0) std::cout << "AM";
             else std::cout << "PM";
           }
           void advance();
         private:
           int hour, minute, ampm;
         };

```

Define member function advance which advances the time to the next minute of the day. (Examples: 11:59AM advances to 12:00PM and 12:59AM advances to 1:00AM.)
