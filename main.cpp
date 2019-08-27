#include <iostream>

using namespace std;

int MinLength(float arr[], int arrSize, int minCoun){
    int coun = 0;
    float valueCk = 0.0;

    if(arrSize > 0){
       while(valueCk < 1){
        valueCk += arr[arrSize - 1];
        coun++;
        arrSize -= 1;
       }
       if(minCoun == 0){
        minCoun = coun;
       }
       else if( minCoun > coun){
        minCoun = coun;
       }
       return MinLength(arr, arrSize - 1, minCoun);
    }
    else{
        return minCoun;
    }


}

int main()
{

    int sizeArr = 4;
    float arr[] = {.1, .1, .8, .2};
    int minLength = MinLength(arr, sizeArr, 0);
    cout << "Min length of sub array: " << minLength << endl;
    return 0;
}
