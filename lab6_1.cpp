#include<iostream>
using namespace std;

void checkeven(int num[],int size){
    int i = 0;
    int count = 0;
    while(i < (size-1)){
        if((num[i] % 2) == 0){
            count++;
        }
        i++;
    }
    cout << "#Even numbers = " << count << endl;
}

void checkodd(int num[],int size){
    int i = 0;
    int count = 0;
    while(i < (size-1)){
        if((num[i] % 2) != 0){
            count++;
        }
        i++;
    }
    cout << "#Odd numbers = " << count << endl;
}

int main(){
    int i;
    int size = 0;
    int num[1000];
    while(i != 0){
        cout << "Enter an integer: ";
        cin >> i;
        num[size] = i;
        size++;
    }
    checkeven(num,size);
    checkodd(num,size);
    return 0;
}