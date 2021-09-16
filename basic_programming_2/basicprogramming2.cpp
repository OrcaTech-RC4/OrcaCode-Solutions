#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main(){
    int N;
    int t;
    cin >> N;
    cin >> t;
    vector<int> inputArray;
    for (int i = 0; i < N; i++){
        int inputNumber;
        cin >> inputNumber;
        inputArray.push_back(inputNumber);
    }
    // sort first since many of the subtask benefits from a sorted array
    sort(inputArray.begin(), inputArray.end());
    if (t == 1){
        // 2 pointer technique
        int startIndex = 0;
        int endIndex = inputArray.size()-1;
        for (int k = 0; k < inputArray.size() - 1; k++){
            int sumOfTwoNumbers = inputArray[startIndex] + inputArray[endIndex];
            if (sumOfTwoNumbers == 7777){
                cout << "Yes";
                return 0;
            }
            else if (sumOfTwoNumbers < 7777){
                startIndex++;
            }
            else if (sumOfTwoNumbers > 7777){
                endIndex--;
            }
        }
        cout << "No";
    }
    if (t == 2){
        // if there are duplicates, they will be side by side in sorted array
        for (int i = 0; i < inputArray.size() - 1; i++){
            if (inputArray[i] == inputArray[i+1]){
                cout << "Contains duplicate";
                return 0;
            }
        }
        cout << "Unique";
    }
    if (t == 3){
        // if there is an integer that appears >N/2 times
        // it will occupy the middle index of the sorted array
        // just get value at middle index and count it
        int sizeOfArray = inputArray.size();
        int middleIndex = sizeOfArray / 2;
        int numberCheck = inputArray[middleIndex];
        if (middleIndex < count(inputArray.begin(), inputArray.end(), numberCheck)){
            cout << numberCheck;
        }
        else {
            cout << -1;
        }
    }
    if (t == 4){
        // just get middle value of array since it's sorted
        int sizeOfArray = inputArray.size();
        int middleIndex = sizeOfArray/2;
        if (sizeOfArray % 2 == 1){
            cout << inputArray[middleIndex];
        }
        else {
            cout << inputArray[middleIndex - 1] << " " << inputArray[middleIndex];
        }
    }
    if (t == 5){
        // just iterate through
        for (int &value : inputArray) {
            if (value > 99 && value < 1000) {
                cout << value << " ";
            }
        }
        cout << endl;
    }
}