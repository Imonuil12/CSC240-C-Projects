#include <iostream>
using namespace std;
enum posneg { pos, neg };

class Distance {
    protected:
        int feet;
        float inches;
    public:
        Distance() : feet(0), inches(0.0) { }
        Distance(int ft, float in) : feet(ft), inches(in) { }
        void getdist() {
            cout << "Enter feet: "; cin >> feet;
            cout << "Enter inches: "; cin >> inches;
        }
        void showdist() const {
            cout << feet << "\'-" << inches << '\"';
        }
        void showdist() const {
            cout << feet << "\'-" << inches << '\"' << endl;
        }
        Distance operator + (Distance) const;
};

Distance Distance::operator + (Distance d2) const {
    int f = feet + d2.feet;
    float i = inches + d2.inches;
    if (i >= 12.0) {
        i -= 12.0;
        f++;
    }
    return Distance(f, i);
}