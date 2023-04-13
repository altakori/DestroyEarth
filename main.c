/*Textbook exercise #2.33
Create an application that calculates your daily driving cost.
Read input from a to e and compute driving cost

*/
#include <stdio.h>
int main()
{
    float mile, gallon, per, park, toll;
    char choice;
    printf("Starting driving cost calculator......\r");
    _sleep(2000);

    for(int n=0;n<38;n++)
        printf(" ");

    printf("\rLoading application......\r");
    _sleep(2000);

    printf("=========================================\n");
    printf("                Welcome!                 \n");
    printf("=========================================\n");

    while(1){
        printf("Enter 'Total miles driven per day': ____\b\b\b\b");
        scanf("%f",&mile);

        printf("Enter 'Cost per gallon of gasoline': ____\b\b\b\b");
        scanf("%f",&gallon);

        printf("Enter 'Average miles per gallon': ____\b\b\b\b");
        scanf("%f",&per);

        printf("Enter 'Parking fees per day': ____\b\b\b\b");
        scanf("%f",&park);

        printf("Enter 'Tolls per day': ____\b\b\b\b");
        scanf("%f",&toll);

        printf("\n\nYour total cost of day is: %f!\n\n",mile/per*gallon+park+toll);

        printf("You want another calculation?(y/n): _\b");
        scanf(" %c",&choice);
        if(choice == 'n')
            break;
        else if(choice == 'y')
            printf("\n\n");
        else{
            printf("Error!");
            break;
        }
    }
}
