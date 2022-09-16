//Write a program to find the prime numbers between100 to 500.

#include <iostream>
using namespace std;

int main(){
    int i, nums = 1, count; 
    while(nums <= 100){
        count = 0;
        i = 2;
        while(i <= nums/2){
            if(nums%i == 0){
                count++;
	            break;
            }
            i++;	
        }	
        if(count == 0 && nums != 1 ){
	        printf(" %d ", nums);
        }
        nums++; 
  }
    return 0;
}