#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(){

    int num[2]; // container for two inputs of integer 
    int temp;
    string numInEnglish[9] = {"one","two","three","four",\
        "five","six","seven","eight","nine"};

    cin >> num[0] >> num[1];


    // your code goes here
    for (int i = 0; i <= (num[1]-num[0]); i++){
        temp = num[0] + i;
        if (temp <= 9){
            cout << numInEnglish[temp - 1] << endl;
        } 
        else {
            if (temp % 2 == 0)
                printf("even \n");
            else 
                printf("odd \n");
        }
    }

      

    return 0;

}

    // for (int j = 0; j < 2; ++j){
    //     if (num[j] <= 9){
    //         temp = num[j];
    //         cout << numInEnglish[temp-1] << endl;
    //     }
    //     else if (num[j] > 9)
    //         printf("nine \n");
    // }

    // for (int j = 0; j < 2; ++j){
    //     // if (num[j] > 9){
    //         if (num[j] % 2 == 0){
    //             printf("even \n");
    //         }
    //         else if (num[j] % 2 != 0){
    //             printf("odd \n");
    //         }
    //     // }
    // } 
