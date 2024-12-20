#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

int main() {
    int count = 0;
    float sum = 0.0;
    float sum_of_square = 0.0;
    string textline;

    ifstream source("score.txt");

    while (getline(source, textline)) {
        float value = stof(textline);
        sum += value;
        sum_of_square += value * value;
        count++;
    }

    float mean = sum / count;
    float std_dev = sqrt((sum_of_square / count) - (mean * mean));

    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << std_dev << "\n";

    return 0;
}