#include <iostream>
using namespace std;
template<class TNO,class Tscore,int num>
class student {
private:
    int n;
    TNO studentID[num];
    Tscore score[num];
public:
    void append(TNO ID, Tscore s);
    void Delete(TNO ID);
    int search(TNO ID);
    void sort();
    void dispall();
    student();
};
template<class TNO, class Tscore, int num>
void student<TNO, Tscore, num>::append(TNO ID, Tscore s) {
    if (n < num) {
        studentID[n] = ID;
        score[n] = s;
        n++;
    }
}
template<class TNO, class Tscore, int num>
void student<TNO, Tscore, num>::Delete(TNO ID)
{
    for(int i=0;i<n;i++)
        if (studentID[i] == ID)
        {
            for (int j = i; j < n; j++)
            {
                studentID[j] = studentID[j + 1];
                score[j] = score[j + 1];
            }
            n--;
        }
}
template<class TNO, class Tscore, int num>
int student<TNO, Tscore, num>::search(TNO no) {
    for (int i = 0; i < n; i++)
        if (studentID[i] == no)
            return i + 1;
    return 0;
}
template<class TNO, class Tscore, int num>
void student<TNO, Tscore, num>::sort() {
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if (score[i] < score[j])
            {
                Tscore ts;
                TNO tn;
                ts = score[i], tn = studentID[i];
                score[i] = score[j], studentID[i] = studentID[j];
                score[j] = ts, studentID[j] = tn;
        }
}
template<class TNO, class Tscore, int num>
void student<TNO, Tscore, num>::dispall() {
    for (int i = 0; i < n; i++)
        cout << studentID[i] << "\t" << score[i] << endl;
}
class String {
public:
    char str[20];
    String();
};
int main()
{
    student<String, float, 100>group1;
    group1.sort();
    student<long, int, 50>group2;
    group2.append(20120926, 85);
    return 0;
}


