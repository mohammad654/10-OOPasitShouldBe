
#include <iostream>
using namespace std;
class Calculator{
private:
    float _result = 0;
    float _lastNumber = 0;
    string _lastOperation = "clear";
    float _previousResult = 0;
    bool _IsZero(float number){return (number == 0);}

public:
    void add(float number){
        _lastNumber = number;
        _previousResult = _result;
        _lastOperation ="adding";
        _result += number;
    }
    void subtract(float number){
        _lastNumber = number;
        _previousResult = _result;
        _lastOperation ="subtracting";
        _result -= number;
    }
    void divide(float number){
        _lastNumber = number;
        if (_IsZero(number)){ number = 1; }
        _previousResult = _result;
        _lastOperation ="dividing";
        _result /= number;
    }
    void multiply(float number){
        _lastNumber = number;
        _previousResult = _result;
        _lastOperation ="multiply";
        _result *= number;
    }
    void clear(){
        _lastNumber = 0;
        _previousResult = 0;
        _lastOperation ="clear";
        _result = 0;
    }
    void cancelLastOperation(){
        _lastNumber = 0;
        _lastOperation ="cancelling Last Operation";
        _result = _previousResult;
    }
    void printResult(){
        cout<<"Result ";
        cout<<"after "<<_lastOperation<<" "<<_lastNumber<<" is: "<< _result<<"\n";
     }


};

int main(){
	cout << "\n****************************************************\n\n";

Calculator calculator;
calculator.clear();
calculator.add(10);
calculator.printResult();
calculator.add(100);
calculator.printResult();
calculator.subtract(20);
calculator.printResult();
calculator.divide(0);
calculator.printResult();
calculator.divide(2);
calculator.printResult();
calculator.multiply(3);
calculator.printResult();
calculator.cancelLastOperation();
calculator.printResult();
calculator.clear();
calculator.printResult();
system("pause>0");

    cout << "\n\n***************************************************\n\n";
return 0;
}

