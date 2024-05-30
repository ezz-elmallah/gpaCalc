
#include <cstdlib>
#include <iostream>


using namespace std;

int main() {

    float math;
    float english;
    float science;
    float economics;
    float electives;
    float chemistry;
    float result;

    cout << "welcome to the GPA calculator: \n";
    cout << "please insert the 6 subjects so i can tell your GPA\n";
    cin >> math >> english >> science >> economics >> electives >> chemistry;
    result = math + english + science + economics + electives + chemistry;
    result = result / 6;

    if (result >= 97) {
        cout << "score is :" << result << " |Grade: A+| " << "|GPA: 4.0|" << endl;
    }
    else if (result >= 93) {
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
    }

    else if (result >= 67) {
        cout << "score is :" << result << "  Grade: D+ " << "GPA: 1.3" << endl;
    }
    else if (result >= 65) {
        cout << "score is" << result << "Grade: D " << "GPA: 1.0" << endl;
    } else if (result < 65) {
        cout << "score is :" << result << "  Grade: F" << "GPA: 0.0" << endl;
    } else {

        cout << "invalid operator ";
    }

    return 0;
}


