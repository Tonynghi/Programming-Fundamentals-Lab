class ClockType
{
public:
    ClockType(int &, int &, int &); // constructor with parameters
    ClockType();                    // default constructor

    void printTime() const;

private:
    int hr;
    int min;
    int sec;
};

void ClockType::printTime() const
{
    if (hr < 10)
        cout << "0";
    cout << hr << ":";
    if (min < 10)
        cout << "0";
    cout << min << ":";
    if (sec < 10)
        cout << "0";
    cout << sec;
}

ClockType::ClockType(int &hours, int &minutes, int &seconds)
{
    if (hours < 0 || hours >= 24)
        hours = 0;
    if (minutes < 0 || minutes >= 60)
        minutes = 0;
    if (seconds < 0 || seconds >= 60)
        seconds = 0;

    this->hr = hours;
    this->min = minutes;
    this->sec = seconds;
}

ClockType::ClockType()
{
    this->hr = 0;
    this->min = 0;
    this->sec = 0;
}
