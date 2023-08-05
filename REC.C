int i=1;
void disp()
{
    printf("HELLO : %d\n",i);
    i++;
    if(i<=5)
    {
	disp();
	disp();
    }
}
void main()
{
    clrscr();
    disp();
    getch();
}