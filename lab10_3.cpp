#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    int num=0;
    string score;
    double total1,total2,mean,stdev=0;
    while(getline(source,score)){
        
        num++;
        total1+=stod(score); total2+=pow(stod(score),2);
        
    }
    mean=total1/num;
    stdev=pow((total2/num)-pow(mean,2),0.5);

    
    
    cout << "Number of data = "<< num << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << stdev ;
    
    return 0;
}