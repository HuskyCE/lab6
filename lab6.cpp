//Jared Haight

#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;

void insert(int arr[], int n) {
    int hold;
    
    for (int i = 0; i < n; i++) {
        hold = arr[i];
        if (hold < arr[i+1]) {
            continue;
        }
        if (hold > arr[i+1]) {
            for (int j = 0; j < i; j++) {
                swap(arr[j], arr[j+1]);
            }
            arr[i] = hold;
        }
        if (hold == arr[i+1]) {
            for (int k = 0; k < i; k++) {
                swap(arr[k], arr[k+1]);
            }
            arr[i] = hold;
        }
    }
    for (int m=0; m<n; m++) {
        cout << arr[m] << " ";
    }
    cout << endl;
    for (int l = 0; l < n-1; l++) {
        if (arr[l] > arr[l+1]) {
            cout << "Error: not ordered\n";
            break;
        }
    }
}




int main() {

    int n, ans;
    srand ((unsigned) time(NULL));
    
    cout << "Enter amount of numbers you would like to use: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;

    while (ans != 0) {
        cout << "How would you like to sort the data?\n"
             << "1. Insertion Sort\n"
             << "2. Selection Sort\n"
             << "0. Exit\n";
        cin >> ans;
        switch (ans) {
            case 1:
                insert(arr, n);
                break;
            case 2:
                //select(arr, n);
                break;
            case 0:
                cout << "Good bye" << endl;
                break;
            default:
                cout << "Invalid option." << endl;
                break;
        }
    }
    return(0);
}
