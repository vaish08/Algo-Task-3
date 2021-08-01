#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;
    cin >> str;
    unsigned long long int num = 0; 
    long long int operation = 0;
    while(true){
        for(int i = 0; i < str.length(); i++){
            num += str[i] - 48;
        }
        operation++;
        if(num >= 10){
            str = std::to_string(num);
            num = 0;
        }
        else
            break;
    }
    cout << operation << endl;
}