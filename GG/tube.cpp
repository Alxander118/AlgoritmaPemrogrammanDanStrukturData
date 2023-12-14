#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

// Function prototypes
double rectangleArea(double length, double width);
double circleArea(double radius);
double tubeArea(double radius, double height);

int main() {
    int choice;
    char repeat;

    do {
        cout << "pilih bentuk yang ingin di hitung:" << endl;
        cout << "1. persegi" << endl;
        cout << "2. lingkaran" << endl;
        cout << "3. tabung" << endl;
        cout << "masukkan pilihan anda (1, 2, 3): ";
        cin >> choice;

        switch (choice) {
            case 1: // Rectangle
                double length, width;
                cout << "masukkan panjang persegi : ";
                cin >> length;
                cout << "masukkan lebar persegi: ";
                cin >> width;
                cout << "luas persegi: " << rectangleArea(length, width) << endl;
                break;

            case 2: // Circle
                double radius;
                cout << "masukkan jari jari lingkaran: ";
                cin >> radius;
                cout << "luas lingkaran: " << circleArea(radius) << endl;
                break;

            case 3: // Tube
                double tubeRadius, tubeHeight;
                cout << "masukkan jari jari tabung: ";
                cin >> tubeRadius;
                cout << "masukkan tinggi tabung: ";
                cin >> tubeHeight;
                cout << "luas permukaan tabung: " << tubeArea(tubeRadius, tubeHeight) << endl;
                break;

            default:
                cout << "Invalid choice. Please enter 1, 2, or 3." << endl;
                break;
        }

        cout << "apakah anda ingin menghitung bentuk lain? (y/n): ";
        cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}

// Function to calculate the area of a rectangle
double rectangleArea(double length, double width) {
    return length * width;
}

// Function to calculate the area of a circle
double circleArea(double radius) {
    return M_PI * radius * radius;
}

// Function to calculate the surface area of a tube
double tubeArea(double radius, double height) {
    return 2 * M_PI * radius * (radius + height);
}

