#include <stdio.h>
#include <math.h>

double division(double , double);
double modulus(int , int);
void print_menu();

int main(){
char choice;
double first , second , result;

while(1) {
print_menu();
scanf(" %c" , &choice);
if (choice == 'g'){
    break;
}
if (choice < 'a' || choice > 'g' )
{
 fprintf(stderr, "Invalid menu choice.");
 continue;
}

printf("\nPlease enter the first number:");
scanf("%lf" , &first);
printf("\nNow print the second number: ");
scanf("%lf" , &second);

switch (choice)
{
case 'a': //Add
result = first + second;
    break;
case 'b':  //Subtract
result = first - second;
    break;
case 'c':  //Multiply
result = first * second;
    break;
case 'd':  //Divide
result = division(first , second);
    break;
case 'e':  //Modulus
result = modulus(first , second) ;
    break;
case 'f':  //Power
result = pow( first , second);
    break;

    
}
if (!isnan(result)){
printf("\nResult of the operation is : %.2f" , result);
}
};
    return 0;
}
double division(double p , double q) {
    if (q == 0)
    {
        fprintf(stderr , "Invalid argument for division\n");
        return  NAN;
    }
    else{
    return p / q;
    }
}
double modulus(int p , int q) {
    if (q == 0)
    {
        fprintf(stderr , "Invalid argument for modulus");
        return  NAN;
    }
    else{
    return p % q;
    }
}


void print_menu() {
printf("\n-------------------------------");
printf("\nWelcome to the simple calculator");
printf("\nChoose one of the following options: ");
printf("\na. Add");
printf("\nb. Substract");
printf("\nc. MUltiply");
printf("\nd. Divide");
printf("\ne. Modulus");
printf("\nf. Power");
printf("\ng. Exit");
printf("\nNow , enter your choice: ");
}


