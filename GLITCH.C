void sub()
{
     clrscr();
     printf("*");
     sub();
     getch();
}
void main()
{
     sub();
}