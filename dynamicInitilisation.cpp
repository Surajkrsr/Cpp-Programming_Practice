#include <iostream>
using namespace std;

class Bankdeposit{
    int principle;
    int years;
    float interestRate;
    float returnValue;

    public:
    Bankdeposit(){}
    Bankdeposit(int p, int y, float r );
    Bankdeposit(int p, int y, int r);
    void show();
};

Bankdeposit :: Bankdeposit(int p, int y, float r){
    principle = p;
    years= y;
    interestRate = r;
    returnValue = principle;

    for(int i = 0; i< y; i++){
        returnValue = returnValue * (1 + interestRate);
    }
}

Bankdeposit :: Bankdeposit(int p, int y, int r)
{
    principle = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
}

void Bankdeposit :: show(){
    cout<<endl<<"Principal amount was "<<principle
        << ". Return value after "<<years
        << " years is "<<returnValue<<endl;
}

int main(){

    Bankdeposit bd1, bd2, bd3;
    int p,y;
    float r;
    int R;

    cout << "Enter the value of p y and r" << endl;
    cin >> p>> y>> r;
    bd1 = Bankdeposit(p,y,r);
    bd1.show();

    cout << "Enter the value of p y and R" << endl;
    cin >> p>> y>> r;
    bd2 = Bankdeposit(p,y,r);
    bd2.show();
    return 0;
}