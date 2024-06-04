//Task: Student Grade Calculator

#include<iostream>
using namespace std;

class gradecalculate
{
private:
int numsubmakrks;
float average;
float sum;
int arr[20];

public:
// constructor to intialize sum and average
gradecalculate() : sum(0.0), average(0.0) {}


void setnumsubmakrks(int n)
{
    numsubmakrks=n;
    for (int i = 0; i < numsubmakrks; i++)
    {
        cout << "Enter the marks of subject " << i + 1 << ": "<<endl;
        cin>>arr[i];
        sum+=arr[i];
    }
    
}
void calculate()
{
    average=sum/numsubmakrks;
}
void getnumsubmarks()
{
    
    cout<<"average grade of : "<<average;
}
  
};

int main()
{
    int n;
    gradecalculate c;
    cout<<"Enter the number of subjects: "<<endl;
    cin>>n;
    
    c.setnumsubmakrks(n);
    c.calculate();
    c.getnumsubmarks();
    getchar();
    return 0;
}



