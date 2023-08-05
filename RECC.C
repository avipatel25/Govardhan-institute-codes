int fac(int j)
{
    if(j>=1)
    {
       j=j*fac(j-1);
       return j;
    }
    else
    return 1;
}
void main()
{
    int s,j;
    clrscr();
    printf("enter the destination value =");
    scanf("%d",j);
    s=fac(j);
    printf("factorial : %d ",s);
    getch();
}