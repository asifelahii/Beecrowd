#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){

    double x1,y1,x2,y2;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    double distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    cout << fixed;
    cout << setprecision(4);

    cout << distance << endl;


    return 0;
}