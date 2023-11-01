#include<stdio.h>
struct Time{
    int hours;
    int mins;
    int secs;
} time[2];
int main()
{
    int i;
    int time1, time2, t, hr, rem, mins, secs;
    for(i=1; i<3; i++)
    {
        printf("Enter number of hours, minutes and seconds in time %d: ", i);
        scanf("%d%d%d", &time[i].hours, &time[i].mins, &time[i].secs);
    }
    time1 = time[1].hours*3600 + time[1].mins*60 + time[1].secs;
    time2 = time[2].hours*3600 + time[2].mins*60 + time[2].secs;
    t = time2-time1;
    if(t<0)
        t = -t;
    hr = t/3600;
    rem = t%3600;
    mins = rem/60;
    secs = rem%60;
    printf("The time difference is %d hours, %d minutes, %d seconds.", hr, mins, secs);
    return 0;
}