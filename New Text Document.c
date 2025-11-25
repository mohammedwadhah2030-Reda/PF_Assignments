#include <stdio.h>
//Mohammed Wadhah CT-25091
float CalculateVolume(float a, float h)
{
    float V;
    V = (a * a * h) / 3;
    return V;
}

int main()
{
    float side, height, volume;

    printf("Enter the side of base (a): ");
    scanf("%f", &side);

    printf("Enter the height (h): ");
    scanf("%f", &height);

    volume = CalculateVolume(side, height);
    printf("The volume of the object is: %.2f\n", volume);

    return 0;
}

