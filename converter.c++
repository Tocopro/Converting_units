
#include <iostream>
#include <cmath>
using namespace std;

class Distance_Units
{
public:
    double feet;
    void conversion_input()
    {
        cout << "Enter the Distance in feet: " << endl;
        cin >> feet;
    }
    void display_answer()
    {
        cout << feet << " Feet make " << getDistance_Units() << " Inches";
    }

private:

    double getDistance_Units() const
    {
        return feet * 12;
    }

};

int main() {
    Distance_Units distance{};
    distance.conversion_input();
    distance.display_answer();
    cin.get();

    return 0;
}

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
// class to contain functions that convert certain measurements into different units
class Measurements
{
public:
    double feet;
    // function to convert feet into inches
    void Input_User_Inches()
    {
        cout << "Enter the Measurement in Feet: " << endl;
        cin >> feet;
        cout << feet << " Feet into Inches = " <<  (feet * 12) << " Inches";
    }
    // function to convert feet into yards
    void Input_User_Yards()
    {
        cout << "Enter the Measurement in Feet: " << endl;
        cin >> feet;
        cout << feet << " Feet into Yards = " <<  (feet * 0.33333) << " Yards";
    }
    // function to convert feet into miles
    void Input_User_Miles()
    {
        cout << "Enter the Measurements in Feet: " << endl;
        cin >> feet;
        cout << feet << " Feet into Miles = " << setprecision(2) << (feet * 0.000189394) << " Miles";
    }

};

int main() {
    // declaring an object of the class
    Measurements units{};
    string measure;
    // conditional loop when the user selects one of the three choices 1, 2 or 3
    cout << "Enter the Units to Convert to [Inches = 1, Yards = 2, Miles = 3]" << endl;
    cin >> measure;
    if (measure == "1")
    {
        units.Input_User_Inches();
    }
    else if (measure == "2")
    {
        units.Input_User_Yards();
    }
    else
    {
        units.Input_User_Miles();
    }

    return 0;
}
