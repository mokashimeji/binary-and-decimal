/*
  Program to convert Binary to Decimal and vice-versa(逆も然り)
*/

#include<stdio.h>
#include<math.h>

int B2D(long long int);  //binary to decimal
long long int D2B(int);  //Decimal to binary

int main(){
  long long binary;
  int decimal;
  printf("input a binary number : ");
  scanf("%lld",&binary);
  decimal=B2D(binary);
  printf("Binary number %lld = decimal number %d\n",binary,decimal);

}

int B2D(long long int binary){
  int decimal=0;
  int i=0;
  int rem;  //remaining

  while(binary!=0){
    rem = binary%10;
    printf("remaining of binary/10  : rem = %d\n",rem = binary%10);  //process to check the lowest digit is 1 or 0
    binary=binary/10; // this is the process to remove the smallest digit
    decimal=decimal+rem*pow(2,i);
    printf("decimal+rem+pow(2,i) = %d(next decimal)\n\n",decimal);
    ++i;
  }
  return decimal;
}
