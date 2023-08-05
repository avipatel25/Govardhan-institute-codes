int fct(int i)
{
   if(i>=1)
   {
      i=i*fct(i-1);
      return i;
   }
   else
   {
      return 1;
   }
}
void main()
{
   int i=5,j;
   clrscr();
   printf("enter the destination value =");
   scanf("%d",i);
   j=fct(i);
   printf("value = %d",j);
   getch();
}