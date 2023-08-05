/*define a structure named time having hours ,minutes and seconds as the data member
WAP to get values for two time variables and store the addition of them
into third time variable also display the value of resultant time variable.*/
struct Time
{
    int hour;
    int min;
    int sec;
};
void main()
{
    struct Time t1,t2,t3;
    clrscr();
    printf("enter the hour, min & sec in time 1:\n");
    scanf("%d",&t1.hour);
    scanf("%d",&t1.min);
    scanf("%d",&t1.sec);
    printf("enter the hour, min & sec in time 2:\n");
    scanf("%d",&t2.hour);
    scanf("%d",&t2.min);
    scanf("%d",&t2.sec);
    t3.hour=t1.hour + t2.hour;
    t3.min=t1.min + t2.min;
    t3.sec=t1.sec + t2.sec;
    if(t3.sec>60)
    {
	t3.sec=t3.sec-60;
	t3.min=t3.min+1;
    }
    if(t3.min>60)
    {
       t3.min=t3.min-60;
       t3.hour=t3.hour+1;
    }
    printf("hour=%d : min=%d : sec=%d",t3.hour,t3.min,t3.sec);
    getch();
}

