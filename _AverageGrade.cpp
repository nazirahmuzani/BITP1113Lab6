//Nazirah Binti Muhammad Muzani
//B032610198
//S2G1
#include <iostream>
using namespace std;
void showTitle();
double getscore();

double calculateaverage(double, double, double, double, double);
char identifygrade(double);
void showresult(double, char);

int main()
{
    double score1, score2, score3, score4, score5;
    double average;
    char grade;

    showTitle();
    score1 = getscore();
    score2 = getscore();
    score3 = getscore();
    score4 = getscore();
    score5 = getscore();
    average = calculateaverage(score1, score2, score3, score4, score5);
    grade = identifygrade(average);

    showresult(average, grade);


    showTitle();
    return 0;
}
void showTitle()
{
    cout << "AVERAGE SCORE AND GRADE " << endl;

}
double getscore()
{
    double score;

    cout << "Enter score: ";
    cin >> score;
    return score;

}
double calculateaverage(double score1, double score2, double score3, double score4, double score5)
{
    double average;
    average = (score1 + score2 + score3 + score4 + score5) / 5;
    return average;

}
char identifygrade(double average)
{
    if (average >= 80)
        return 'A';
    else if (average >= 65)
        return'B';
    else if (average >= 50)
        return'C';
    else if (average >= 40)
        return'D';
    else
        return 'F';

}
void showresult(double average, char grade)
{
    cout << "\n averagescore : " << average << endl;
    cout << "Grade" << grade << endl;
}
