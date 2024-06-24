class Time {
public:
    Time(); // constructor
    void setTime(int, int); // set hour, minute
    void printMilitary(); // print military time format
    void printStandard(); // print standard time format

private:
    int hour; // 0 - 23
    int minute; // 0 - 59
};
