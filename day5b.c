#include <stdio.h>
    int main()
    {
        int s,hr, min, sec;
        printf("Enter the time in seconds: ");
        scanf("%d", &s);
        hr = s / 3600;
        min = (s % 3600) / 60;
        sec = s % 60;
        printf("Time is %d hours, %d minutes and %d seconds\n", hr, min, sec);
        return 0;
    
}