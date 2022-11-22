#include <iostream>
using namespace std;
int main()
{
    cout << "Every" << "\n";
    cout << "\tHunter" << "\n";
    cout << "\t\tWants" << "\n";
    cout << "\t\t\tTo know" << "\n";
    cout << "\t\t\t\t Where" << "\n";
    cout << "\t\t\t\t\tDoes Pheasant" << "\n";
    cout << "\t\t\t\t\t\t\tSit" << "\n\n";


    cout << "\tMy blood type is on my sleeve.\n"
        "\tMy serial number is on my sleeve.\n"
        "\tWish me now some luck in the fight,\n"
        "\twish me...\n"
        "\tI wont stay in this field of green.\n"
        "\tI wont stay in this field of green.\n"
        "\tWish me now to be lucky,\n"
        "\twish me now...\n"
        "\tto be lucky.\n"
        "\t\tV. Tsoy\n\n";

    cout << "\tI will sell puppies.\n\n\t";
    cout << "Rottweiler breed.\n\n\t";
    cout << "Telephone number: 222-22-22\n\n\t";
    cout << "222 | 222| 222\n\n";
    cout << "\t22  | 22 | 22\n\n";
    cout << "\t22  | 22 | 22\n\n";

    double r1 = 2;
    double r2 = 4;
    double r3 = 8;
    double r0 = 1 / r1 + 1 / r2 + 1 / r3;
    cout << "\tR0 = " << 1 / r0;

    /*double pi = 3.14;
    double r = 9;
    double s = pi * r;
    double l = 2 * pi * r * 2;
    cout  << "\n\n\t" << l;*/

    int v = 100;
    int t = 60;
    int a = 30;
    int s = v * t + (a * t * 2) / 2;
    cout << "\n\n\tThe distance traveled " << s;

    double distance = 0;
    double time = 0;
    cout << "\n\n\tInput distance in km/h: ";
    cin >> distance;
    cout << "\n\tInput time in hours: ";
    cin >> time;
    double speed = distance / time;
    cout << "\n\t Speed of movement over " << speed << " km/h a distance " << distance << " km.";

    double cosеOfMinute = 0.30;
    double minut;
    cout << "\n\n\tNumber of minutes of conversation: ";
    cin >> minut;
    double costOfTheConversation = cosеOfMinute * minut;
    cout << "\tcost of the conversation: " << costOfTheConversation << " rub.";

    int distanse;
    int fuelConsumption;
    int costGasoline92;
    int costGasoline95;
    int costGasoline98;
    cout << "\n\n\tDistance: ";
    cin >> distanse;
    cout << "\n\tFuel consumption: ";
    cin >> fuelConsumption;
    cout << "\n\tThe cost of gasoline 92 rub.: ";
    cin >> costGasoline92;
    cout << "\n\tThe cost of gasoline 95 rub.: ";
    cin >> costGasoline95;
    cout << "\n\tThe cost of gasoline 98 rub.: ";
    cin >> costGasoline98;
    int theCostOfTheTrip92 = fuelConsumption * distanse * costGasoline92 / 100;
    int theCostOfTheTrip95 = fuelConsumption * distanse * costGasoline95 / 100;
    int theCostOfTheTrip98 = fuelConsumption * distanse * costGasoline98 / 100;
    cout << "\n\n\tThe cost of the trip 92 gaz: " << theCostOfTheTrip92 << " rub.";
    cout << "\n\n\tThe cost of the trip 95 gaz: " << theCostOfTheTrip95 << " rub.";
    cout << "\n\n\tThe cost of the trip 98 gaz: " << theCostOfTheTrip98 << " rub.";


}