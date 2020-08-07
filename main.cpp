#include <iostream>
using namespace std;

int main() {
    int value = 1;
    cout << " Enter number to calculate squares :" << endl;
    cin >> value;
    cout<<"\tTable of number squares\n";
    cout<<"\t-----------------------\n";
    cout<<endl;
    cout<<"Number \t\t\tNumber Square\n";
    cout<<"------\t\t\t-------------\n";
    cout<<endl;
    for (int i = 1; i <= value; i++ )
    {
        cout << i << "\t\t\t" << i * i << endl;
    }
}