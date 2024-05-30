
#include <cstdlib>
#include <iostream>


using namespace std;

int main() {

    float subjects [10];
    float subjectsCount;
    float result;
    int counter = 0;
    cout << "welcome to the GPA calculator: \n";

    do {
        cout << "please insert how many subjects your taking in school Max is 10 subjects :\n ";
        cin >> subjectsCount;
    } while (subjectsCount > 10);


    for (int x = 0; x < subjectsCount; x++) {
        counter++;
        cout << "please enter Subject score (" << counter << "): " << endl;
        cin >> subjects [x];
        result += subjects [x];
    }

    result = result / subjectsCount;

    if (result >= 97) {
        cout << "score is :" << result << " |Grade: A+| " << "|GPA: 4.0|" << endl;
    } else if (result >= 93) {
        cout << "score is :" << result << " |Grade:  A| " << "|GPA: 4.0|" << endl;
    } else if (result >= 90) {
        cout << "score is :" << result << " |Grade: A-|" << "|GPA: 3.7|" << endl;
    } else if (result >= 87) {
        cout << "score is :" << result << " |Grade: B+|" << " |GPA: 3.5| " << endl;
    } else if (result >= 83) {
        cout << "score is :" << result << " |Grade: B|" << "|GPA: 3.0|" << endl;
    } else if (result >= 80) {
        cout << "score is :" << result << " |Grade: B-| " << " |GPA: 2.7|" << endl;
    } else if (result >= 77) {
        cout << "score is :" << result << " |Grade: C+| " << "|GPA: 2.3|" << endl;
    } else if (result >= 73) {
        cout << "score is :" << result << " |Grade: C|" << "|GPA: 2.0|" << endl;
    } else if (result >= 70) {
        cout << "score is :" << result << " |Grade: C-| " << "|GPA: 1.7|" << endl;
    } else if (result >= 67) {
        cout << "score is :" << result << "  Grade: D+ " << "GPA: 1.3" << endl;
    } else if (result >= 65) {
        cout << "score is" << result << "Grade: D " << "GPA: 1.0" << endl;
    } else if (result < 65) {
        cout << "score is :" << result << "  Grade: F" << "GPA: 0.0" << endl;
    } else {

        cout << "invalid operator ";
    }

    return 0;
}


