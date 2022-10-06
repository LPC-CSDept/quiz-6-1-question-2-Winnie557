#include <iostream>
#include <iomanip>
using namespace std;

// ******************************
// Your code here
// ******************************
void getInput(int &n1, int &n2, int &n3);
int findMin(int n1, int n2, int n3);
void printResult(int n1, int n2, int n3, int min);

void getInput(int &n1, int &n2, int &n3){
    cout << "Enter three numbers: " << endl;
    cin >> n1 >> n2 >> n3;
}
int findMin(int n1, int n2, int n3){
    if(n1<n2 && n1 < n3){
        return n1;
    }
    else if(n2 < n1 && n2 < n3){
        return n2;
    }
    else{
        return n3;
    }
}
// ******************************
// this function will help you pass the test. When you print the result with this function, you will get the same output format
void printResult(int n1, int n2, int n3, int min)
{
	cout << n1 << " " << n2 << " " << n3 << " " << min << " " << endl;
}
int main(){
    int n1, n2, n3 , min;
    getInput(n1, n2, n3);
    min = findMin(n1, n2, n3);
    printResult(n1, n2, n3, min);
}