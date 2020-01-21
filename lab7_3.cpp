//status = "ONE-NIGHT-STAND";
#include<iostream>
#include<string>
using namespace std;

int main(){
    int age, height , value;
    cout << "Input your age: ";
    cin >> age;
    if(age<=20){
        cout << "Input your height: ";
        cin >> height;
        if(height<160){
            cout << "UNFRIEND";
        }else{
            if(height<175){
                cout << "FRIEND";
            }else{
                cout << "Input your property value: ";
                cin >> value;
                if(value>69000000){
                    cout << "MARRIED";
                }else{
                    cout << "ONE-NIGHT-STAND";
                }
            }
        }
    }else{
        if(age<=30){
            cout << "Input your property value: ";
            cin >> value;
            if(value>10000000){
                cout << "BESTFRIEND";
            }else{
                cout << "UNFRIEND";
            }
        }else{
            cout << "UNFRIEND";
        }
    }
}