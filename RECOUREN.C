int fac();
char isDivisiablewith5(int ans);
void main()
{
     int e,ans;
     char ans1;
     clrscr();
     printf("Enter the value =");
     scanf("%d",&e);
     ans=fac(e);
     printf("%d",ans);
     ans1=isDivisiablewith5(ans);
//     puts(ans1);
	printf("%c",ans1);
     getch();

}
int fac(int e)
{
	int i,s=1;
	for(i=1;i<=e;i++)
	{
	s=s*i;
	}
	printf("%d\n",s);
	return s;
}

char isDivisiablewith5(ans)
{

      if(ans%5==0)
      {
      return 'y';
      }
	else
      {
      return 'n';
      }
}