/*FOOD DISTRIBUTION SYSTEM*/
/*DONE BY 20PW02*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int assignrider();
struct rider
    {
        int no;
        int status;
    };
struct rider r[5];

void login() /*LOGIN FRAMEWORK*/
{
     char username[]="Akash", password[]="Foodie12", id[6], p[9];
    int n=1, x, y;

    do{
         printf("\nUsername:");
         scanf("%s", &id);

         printf("\nPassword:");
         scanf("%s", &p);

         x=strcmp(id, username);
         y=strcmp(p, password);

         if(x==0 && y==0){
           printf("\nSucessfully Logged In");
           break;
         }else {
           printf("\nWrong Password, try again", 5-n);
            getch();
            n++;}

         if(n>5){
          printf("\nAccess Denied");
          getch();
          }

       }while (n<=5);

}

void waitFor (unsigned int secs) {
    unsigned int retTime = time(0) + secs;   // Get finishing time.
    while (time(0) < retTime);               // Loop until it arrives.
}

int main()
{
    for(int i=0;i<5;i++)
        {
            r[i].no = i+1;
            r[i].status = 0;
        }
    FILE *f2;
    system("mode 650");
    int y,ye;
    int  pizza,ch,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s=0;
    printf("\n\n\n\t\t\t\t\t\t ==========   WELCOME TO FOODIE'S JOINT   ==========");
    waitFor(3);
    login();

    printf("\n\n\t\t\t\t\t\t\t       =====START YOUR ORDER=====\n");
    printf("\n\n\n\t===========================\t\t\t==========================\t\t\t\t===========================\n");
	printf("\t[1] Veggie Supreme (Rs.480)\t\t\t[2] Exotica Pizza(Rs.440)\t\t\t[3] Chicken Sizzler (Rs.580)\n\t[4] Chrispy Chicken (Rs.520)\t\t\t[5] Spaghetti (Rs.350)\t\t\t\t\t[6] Country Feast (Rs.400)\n\t[7] Tetrazzini (Rs.420)\t\t\t\t[8] Double Cheese (Rs.540)\t\t\t\t[9] Makizushi (Rs.548)\n\t[10] Ham Burger (Rs.390)\t\t\t[11] Margherita Pizza(Rs.525)\t\t\t\t[12] Fish 'n' Chips (Rs.425)\n\t[13] Fajitas (Rs.335)\t\t\t\t[14] Tempura (Rs.324)\t\t\t\t\t[15] Hot Dog (Rs.360)\n\t===========================\t\t\t==============================\t\t\t\t===========================\n\n\n\t\t\t\t\t\t\t\t[16] EXIT\n");
    printf("\n\t=======================================================================================================================================\n");

     a:
   	b:
   		c:
   	 printf("\n\n\tENTER YOUR ORDER (one order at a time): ");
      scanf("%d",&ch);


  printf("\n\n\tDO YOU WANT TO UPDATE YOUR ORDER (Y=1/N=2) :");

  scanf("%d",&ye);

  if(ye==1)
  {
  	goto b;
  }
  else
  {
      f2 = fopen("bill.txt","w");
   switch(ch)
   {
   	case 1:
   			printf("\n\n\tHOW MANY PIZZA YOU WANT :");
   		scanf("\t%d",&pizza);

   		a=480;
   		s=s+a*pizza;
   		fprintf(f2,"YOU ORDERED  Veggie Supreme : 480");
   		fprintf(f2," \n");
   		fprintf(f2,"NUMBER OF PIZZA IS : %d",pizza);
   		fprintf(f2,"\n");
   	printf("\n\n\n\tYOU ORDERED  Veggie Supreme \n\tYOUR ORDER IS SUCCESSFULLY SAVED \n");
   	break;

   	case 2:
   		printf("\n\n\tHOW MANY PIZZA YOU WANT :");
   		scanf("\t%d",&pizza);

		   b=440;
   		s=s+b*pizza;
   		fprintf(f2,"YOU ORDERED  Exotica : 440");
   		fprintf(f2," \n");
   			fprintf(f2,"NUMBER OF PIZZA IS : %d",pizza);
   		fprintf(f2,"\n");
   	printf("\n\n\n\tYOU ORDERED  Exotica \n\tYOUR ORDER IS SUCCESSFULLY SAVED \n");
   	break;

   	case 3:
   		printf("\n\n\tHOW MANY CHICKEN SIZZLER YOU WANT :");
   		scanf("\t%d",&pizza);

   		c=580;
   		s=s+c*pizza;
   			fprintf(f2,"YOU ORDERED  Chicken Sizzler : 580");
   			fprintf(f2," \n");
   				fprintf(f2,"NUMBER OF Chicken Sizzler IS : %d",pizza);
   		fprintf(f2,"\n");
   	printf("\n\n\n\tYOU ORDERED  Chicken Sizzler \n\tYOUR ORDER IS SUCCESSFULLY SAVED \n");
   	break;

   	case 4:
   		printf("\n\n\tHOW MANY CHRISPY CHICKEN YOU WANT :");
   		scanf("\t%d",&pizza);

   		d=520;
   		s=s+d*pizza;
   		fprintf(f2,"YOU ORDERED  Chrispy Chicken : 520");
   	fprintf(f2," \n");
   		fprintf(f2,"NUMBER OF Chrispy Chicken IS : %d",pizza);
   		fprintf(f2,"\n");
	   printf("\n\n\n\tYOU ORDERED  Chrispy Chicken \n\tYOUR ORDER IS SUCCESSFULLY SAVED \n");
   	break;

   	case 5:
   		printf("\n\n\tHOW MANY SPAGHETTI YOU WANT:");
   		scanf("\t%d",&pizza);

   		e=350;
   		s=s+e*pizza;
   		fprintf(f2,"YOU ORDERED  Spaghetti : 350");
   		fprintf(f2," \n");
   			fprintf(f2,"NUMBER OF Spaghetti IS : %d",pizza);
   		fprintf(f2,"\n");
   	printf("\n\n\n\tYOU ORDERED  Spaghetti \n\tYOUR ORDER IS SUCCESSFULLY SAVED \n");
   	break;

   	case 6:
   		printf("\n\n\tHOW MANY PIZZA YOU WANT:");
   		scanf("\t%d",&pizza);

   		f=400;
   		s=s+f*pizza;
   		fprintf(f2,"YOU ORDERED Country Feast : 400");
   		fprintf(f2,"\n ");
   			fprintf(f2,"NUMBER OF PIZZA IS : %d",pizza);
   		fprintf(f2,"\n");
   	printf("\n\n\n\tYOU ORDERED Country Feast \n\tYOUR ORDER IS SUCCESSFULLY SAVED \n");
   	break;

   	case 7:
   		printf("\n\n\tHOW MANY TETRAZZINI YOU WANT:");
   		scanf("\t%d",&pizza);

   		g=420;
   		s=s+g*pizza;
   		fprintf(f2,"YOU ORDERED Tetrazzini : 420");
   		fprintf(f2,"\n ");
   			fprintf(f2,"NUMBER OF Tetrazzini IS : %d",pizza);
   		fprintf(f2,"\n");
   	printf("\n\n\n\tYOU ORDERED  Tetrazzini \n\tYOUR ORDER IS SUCCESSFULLY SAVED \n");
   	break;

   	case 8:
   		printf("\n\n\tHOW MANY PIZZA YOU WANT :");
   		scanf("\t%d",&pizza);

   		h=540;
   		s=s+h*pizza;
   		fprintf(f2,"YOU ORDERED Double Cheese : 540");
   		fprintf(f2," \n");
   			fprintf(f2,"NUMBER OF PIZZA IS : %d",pizza);
   		fprintf(f2,"\n");
   	printf("\n\n\n\tYOU ORDERED   Double Cheese \n\tYOUR ORDER IS SUCCESSFULLY SAVED \n");
   	break;

	case 9:
	printf("\n\n\tHOW MANY MAKIZUSHI YOU WANT :");
   		scanf("\t%d",&pizza);

		i=548;
		s=s+i*pizza;
		fprintf(f2,"YOU ORDERED Makizushi : 548");
		fprintf(f2," \n");
			fprintf(f2,"NUMBER OF Makizushi IS : %d",pizza);
   		fprintf(f2,"\n");
   	printf("\n\n\n\tYOU ORDERED Makizushi \n\tYOUR ORDER IS SUCCESSFULLY SAVED \n");
   	break;

   	case 10:
   		printf("\n\n\tHOW MANY HAM BURGER YOU WANT :");
   		scanf("\t%d",&pizza);

   		j=390;
   		s=s+j*pizza;
   		fprintf(f2,"YOU ORDERED Ham Burger : 390");
   		fprintf(f2," \n");
   			fprintf(f2,"NUMBER OF Ham Burger IS : %d",pizza);
   		fprintf(f2,"\n");
   	printf("\n\n\n\tYOU ORDERED Ham Burger \n\tYOUR ORDER IS SUCCESSFULLY SAVED \n");
   	break;

   	case 11:
   			printf("\n\n\tHOW MANY PIZZA YOU WANT :");
   		scanf("\t%d",&pizza);

   		k=525;
   		s=s+k*pizza;
   		fprintf(f2,"YOU ORDERED Margherita : 525");
   		fprintf(f2," \n");
   			fprintf(f2,"NUMBER OF PIZZA IS : %d",pizza);
   		fprintf(f2,"\n");
   	printf("\n\n\n\tYOU ORDERED   Margherita \n\tYOUR ORDER IS SUCCESSFULLY SAVED \n");
   	break;

   	case 12:
   		printf("\n\n\tHOW MANY FISH 'n' CHIPS YOU WANT :");
   		scanf("\t%d",&pizza);

   		l=425;
   		s=s+l*pizza;
   		fprintf(f2,"YOU ORDERED Fish 'n' Chips : 425");
   		fprintf(f2," \n");
   			fprintf(f2,"NUMBER OF Fish 'n' Chips IS : %d",pizza);
   		fprintf(f2,"\n");
   	printf("\n\n\n\tYOU ORDERED  Fish 'n' Chips \n\tYOUR ORDER IS SUCCESSFULLY SAVED \n");
   	break;

   	case 13:
   		printf("\n\n\tHOW MANY FAJITAS YOU WANT :");
   		scanf("\t%d",&pizza);

   		m=335;
   		s=s+m*pizza;
   		fprintf(f2,"YOU ORDERED  Fajitas  : 335");
   		fprintf(f2," \n");
   			fprintf(f2,"NUMBER OF Fajitas IS : %d",pizza);
   		fprintf(f2,"\n");
   	printf("\n\n\n\tYOU ORDERED Fajitas \n\tYOUR ORDER IS SUCCESSFULLY SAVED \n");
   	break;

   	case 14:
   		printf("\n\n\tHOW MANY TEMPURA YOU WANT :");
   		scanf("\t%d",&pizza);

   		n=324;
   		s=s+n*pizza;
   		fprintf(f2,"YOU ORDERED Tempura : 324");
   		fprintf(f2," \n");
   			fprintf(f2,"NUMBER OF Tempura IS : %d",pizza);
   		fprintf(f2,"\n");
   	printf("\n\n\n\tYOU ORDERED  Tempura \n\tYOUR ORDER IS SUCCESSFULLY SAVED \n");
   	break;

   	case 15:
   		printf("\n\n\tHOW MANY HOT DOG YOU WANT :");
   		scanf("\t%d",&pizza);

   		o=360;
   		s=s+o*pizza;
   		fprintf(f2,"YOU ORDERED  Hot Dog : 360");
   		fprintf(f2,"\n ");
   			fprintf(f2,"NUMBER OF Hot Dog IS : %d",pizza);
   		fprintf(f2,"\n");
   	printf("\n\n\n\tYOU ORDERED  Hot Dog\n \tYOUR ORDER IS SUCCESSFULLY SAVED \n");
   	break;

   	case 16:
   		printf("\n\t\t\t\t\t Brought To You By 247 Online Systems.\n");
   	exit(0);
   	break;

   	default:
   		printf("\n\n\t\t\t\t\t\t\tYOU ENTERED WRONG ORDER KEY !!!!! \n");
   		goto c;
   		break;
  }
printf("\n\tDO YOU WANT ANOTHER ORDER (Y=1/N=2) :");
   scanf("%d",&y);
   if(y==1)
   {
   	goto a;
   }
   else
   {
   	printf("\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ");
   	for(int a=1;a<8;a++)
	{
		printf("...");
		waitFor(1);
	}
   	printf("\n\t\t\t\t\t\t\t");
   	}


}


    printf("\n\t\t\t\t\t\t\t ================================================\n");/*BILL DISPLAY*/
						printf("\t\t\t\t\t\t\t|               Foodie's Joint                     |\n");
						printf("\t\t\t\t\t\t\t ================================================\n");
						printf("\n");
						printf("\n");

						printf("\t\t\t\t\t\t\t  Bill No : CP51           Order : NB1353\n");
						printf("\n");
						printf("\n");
						printf("\t\t\t\t\t\t\t  Cashier :  Harry\n");
						printf("\n");
                        printf("\t\t\t\t\t\t\t\t    YOUR TOTAL BILL IS Rs. %d",s);
                        printf("\n\t\t\t\t\t\t\t ================================================\n");
    int assgrider = assignrider();
    printf("\n\t\t\t\t\t\t\t ================================================\n");
						printf("\t\t\t\t\t\t\t|               Foodie's Joint                     |\n");
						printf("\t\t\t\t\t\t\t ================================================\n");
						printf("\n");
						printf("\n");
						printf("\t\t\t\t\t\t\t  Rider Assigned : %d           Will arrive in : 30 min\n",assgrider);
						printf("\t\t\t\t\t\t\t  Rider :  Harry                ORDER PIN : 1254\n");
                        printf("\n\t\t\t\t\t\t\t ================================================\n");
    waitFor(5);
    printf("\n\t\t\t\t\t\t\t ================================================\n");
						printf("\t\t\t\t\t\t\t|               Foodie's Joint                     |\n");
						printf("\t\t\t\t\t\t\t ================================================\n");
						printf("\n");
						printf("\n");
						printf("\t\t\t\t\t\t\t  ORDER DELIVERED.BON APPETIT:)",assgrider);

                        printf("\n\t\t\t\t\t\t\t ================================================\n");
    waitFor(10);
    return 0;
}

int assignrider()      /*ASSIGNING DELIVERY PERSON*/
{


    for(int j=0;j<5;j++)
    {
        if(r[j].status==0)
        {
            return (r[j].no);

        }
    }
}
