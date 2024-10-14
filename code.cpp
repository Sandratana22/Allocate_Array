#include <iostream>

using namespace std; 

    int main() {
        int* numbers = nullptr; 
        int size = 0;           
        int sum = 0;            
        int inNumbers;           

        cout << "Enter -1 if you wanna break the loop! " << endl;

        while (true) {
            cout << "Enter an integer: ";
            cin >> inNumbers;

            if (inNumbers == -1) {
                break;
            }

            int* temp = new int[size + 1];  

            for (int i = 0; i < size; i++) {
                temp[i] = numbers[i];
            }
            temp[size] = inNumbers; 
                
           delete[] numbers;

            numbers = temp;
            size++;
            sum += inNumbers;
        }
        cout << "The sum of the array is: " << sum << endl;

        delete[] numbers;

        return 0;
    }
