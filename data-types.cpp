#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int input1;
    long int input2;
    char input3;
    float input4;
    double input5;
    
    scanf("%d %ld %c %f %lf",&input1, &input2, &input3, &input4, &input5);

    printf("%d \n",input1);
    printf("%ld \n",input2);
    printf("%c \n",input3);
    printf("%0.3f \n",input4);
    printf("%0.9lf \n",input5);

    return 0;
}