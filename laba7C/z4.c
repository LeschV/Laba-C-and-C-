#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void Enable_heater()
{
    printf("Heater was enabled!\n");
}

void Enable_conditioner()
{
    printf("Conditioner was enabled!\n");
}

void Hold_temperature()
{
    printf("System is holding current temperature.\n");
}

void Disable_system()
{
    printf("System was turned off succesfully.\n");
}

int main()
{
    printf("Welcome to the climate-control system!\n");
    printf("There are 4 functions:\n1:Enable heater\n2:Enable conditioner\n3:Hold temperature\n4:Disable system");
    int option;
    do
    {
        printf("\nPlease choose the option:");
        scanf("%d", &option);
        printf("\n");
        void (*funcarray[4])(void) = {Enable_heater, Enable_conditioner, Hold_temperature, Disable_system};
        if ((option != 4) && (option < 5))
        {
            option -= 1;
            switch (option)
            {
            case 0:
                funcarray[option]();
                break;
            case 1:
                funcarray[option]();
                break;
            case 2:
                funcarray[option]();
                break;
            default:
                break;
            }
        }
        else
        {
            funcarray[3]();
        }
    } while (option != 4);

    return 0;
}