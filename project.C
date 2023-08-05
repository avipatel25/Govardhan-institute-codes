#include<chrono>
#include<thresd>
#include<unistd.h>

void main()
{
    int e,y,l,b,h,r,b,a,v,ar,p;
    float p=3.14;
    printf("press 1 to find perimeter\n");
    printf("press 2 to find area\n");
    printf("press 3 to find volume\n");
    scanf("%d",&e);
    if(e==1)
    {
       printf("press 1 for square\n");
       printf("press 2 for rectangle\n");
       printf("press 3 for triangle\n");
       printf("press 4 for circle\n");
       printf("press 5 for hexagon\n");
       printf("press 6 for octagon\n");
       printf("press 7 for pentagon\n");
       scanf("%d",&y);
       if(y==1)
       {

       }
       else if(y==2)
       {

       }
       else if(y==3)
       {

       }
       else if(y==4)
       {

       }
       else if(y==5)
       {

       }
       else if(y==6)
       {

       }
       else if(y==7)
       {

       }
       else
       {
	  printf("invalid");
       }
    }
    else if(e==2)
    {
       printf("press 1 for square\n");// r^2
       printf("press 2 for rectangle\n");   //l*w
       printf("press 3 for triangle\n");         //0.5 * b* h
       printf("press 4 for circle\n");         // pie r^2
       printf("press 5 for trapezium\n");      // 0.5(x+y) *h
       printf("press 6 for ellipse\n");         // pie * x * y
       printf("press 7 for parallelogram\n");    // b* h
       printf("press 8 for cube\n");    //6r^2
       printf("press 9 for rectngulr prism\n");//2(wl+hl+hw)
       printf("press 10 for cylinder\n"); // 2pie r(r+h)
       printf("press 11 for cone\n");//pie r(r+h)
       printf("press 12 for sphere\n"); // 4pie r^2
       printf("press 13 for hemisphere\n"); //3 pie r^2
       scanf("%d",&y);
       if(y==1)
       {

       }
       else if(y==2)
       {

       }
       else if(y==3)
       {

       }
       else if(y==4)
       {

       }
       else if(y==5)
       {

       }
       else if(y==6)
       {

       }
       else if(y==7)
       {

       }
       else if(y==8)
       {

       }
       else if(y==9)
       {

       }
       else if(y==10)
       {

       }
       else if(y==11)
       {

       }
       else if(y==12)
       {

       }
       else if(y==13)
       {

       }
       else
       {
	  printf("invalid");
       }
    }
    else if(e==3)
    {
       printf("press 1 for cube\n");     //r^3
       printf("press 2 for cuboid\n");   //l*b*h
       printf("press 3 for cone\n");     //1/3 * pie * r^2 * h
       printf("press 4 for cylinder\n"); //pie * r^2 * h
       printf("press 5 for sphere\n");   //4/3 * pie * r^3
       scanf("%d",&y);
       if(y==1)
       {

       }
       else if(y==2)
       {

       }
       else if(y==3)
       {

       }
       else if(y==4)
       {

       }
       else if(y==5)
       {

       }
       else
       {
	  printf("invalid");
       }
    }
    else
    {
       printf("invalid");
    }
}
