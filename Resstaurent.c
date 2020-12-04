#include <stdio.h>
#include <conio.h>

void breakfast();
void lunch();
void dinner();
void menue();
void exit();

int a;
float b;
float static total;
char c;
int n;
void main()
{
    table();
	menue();
}
void menue(){
	char c;

  printf("\n                WELCOME TO GRAND PLACE RASTAURNT \n\n ");

  printf("PLEASE SLECET ANY MEAL : \n");
  system("COLOR 01");
  printf("\n\t      1. Breakfast\n");
  printf("\n\t      2. Lunch\n");
  printf("\n\t      3. Dinner\n");
  printf("\n\t      4. Exit\n\n");
  printf("make your choice: ");
  fflush(stdin);
  scanf("%c", &c);
		if (c== '1' )
            breakfast();
        else if (c =='2')
				  lunch();
			else if (c =='3')
					  dinner();
				else if (c=='4')
						  exit();
					  else
						  {
							  menue();
						  }
}
void breakfast(){
  int c= 0;
  int quantity = 0;
  int n= 0;
  system("COLOR F0");
  printf("                WELCOME TO GRAND PLACE RASTAURNT \n ");
  printf(" here is our BREAKFAST items \n\n");
  printf("Please select the food that you would like to purchase\n\n");
  printf("\t\t   1. Toast -50.00 tk\n");
  printf("\t\t   2. bread and egg - 100.00 tk\n");
  printf("\t\t   3. cake coffee - 300.00 tk\n");
  printf("Enter your choice here : ");
  scanf("%d", &c);
  {
  if (c==1)
	  {
	  printf("quantity : ");
	  scanf("%d", &quantity);
	  total =total+ (50 * quantity) ;
	   printf("Your total amount is tk %.2f",total);
           printf("Please pay at the counter \n\n\n ", total);
	   printf("\nWould you like to buy anything else?\n 1. Yes \n 2.No : ");
			scanf("%d", &n);

			 if (n == 1 )
				breakfast();
			 else
				 if (n== 2 )
                 { total=0;
                     exit() ;
                     menue();

                 }
                /* else
                    if (n != 1 , 2){
				 printf("\n\n\t\ Invalid Decision Entered\n\n\n\n");
				}*/
      }
	else
		  if (c== 2)
		  {
		  printf("quantity : ");
		  scanf("%d", &quantity);
		  total = total+(100* quantity) ;
		  printf("Your total amount is tk%.2f , Please pay at the counter\n\n\n ", total);
		    printf("\nWould you like to buy anything else?\n 1 .Yes, 2. No \n");
			scanf("%d", &n);

			 if (n == 1 )
				breakfast();
			 else
                if (n== 2 )
             {
                 total=0;
                 exit();
                 menue();
             }

			/*else
				if (n != 1 , 2)
				{
				 printf("\n\n\t\ wrong Decision Entered\n\n\n\n");
				 exit();
				 menue();
				}*/
		  }
		  else
			  if (c== 3 )
                {
			  printf("quantity : ");
			  scanf("%d", &quantity);
			  total = total+(300* quantity) ;
			  printf("Your total amount is %.2f Please pay at the counter\n\n\n ", total);
		         printf("\nWould you like to buy anything else?\n 1. Yes \n 2. No \n");
			   scanf("%d", &n);

			  if (n == 1 )
				{
				breakfast();
				 }
			  else
				  if (n== 2 )
				{
				    total=0;

				exit();
				menue();

				}
				/*else
				    if (n != 1 , 2)
					{
					 printf("\n\n\t\t Wrong Decision Entered\n\n\n\n");
					 exit();
					}*/
			  }
			  else
					if (c!= 1 , 2 , 3 )
						{

						printf("\n\n\t\t   Invalid Choice Entered\n\n");
						breakfast();
						}
    }

  }

void lunch()
{
  int c;
  int quantity;
  int n;
  system("COLOR 0E");


   printf("                WELCOME TO GRAND PLACE RASTAURNT \n ");
  printf("  Here is our Lunch menu  $ \n\n");
  printf(" Please select the food that you would like to purchase :\n\n");
  printf("\t\t   1. rice and chiken - 100 taka\n");
  printf("\t\t   2. beef curry and polao 200 taka\n");
  printf("\t\t   3. Fish Curry with Rice - 110 taka \n");

  printf("Enter your choice here : ");
  scanf("%d", &c);
  {
  if (c== 1)
	  {
	  printf("quantity : ");
	  scanf("%d", &quantity);
	  total =total+(100 * quantity) ;
	  printf("Your total amount is taka%.2f \n Please pay at the counter\n\n\n ", total);
	  {
		printf("\nWould you like to buy anything else?\n 1. Yes \n 2. No : ");
		scanf("%d", &n);
		if (n == 1 )
			lunch();
		else
			if (n== 2 )
				{  total=0;
				    exit();
				    menue();
				}
		/*else
			if (n != 1 , 2)
			{
			 printf("\n\n\t\t Invalid Decision Entered\n\n\n\n");
			 exit();
			}*/
		}
      }
	else
		  if ( c == 2)
		  {
		  printf("quantity : ");
		  scanf("%d", &quantity);
		  total = total+(200 * quantity) ;
		  printf("Your total amount is taka.2f \n Please pay at the counter\n\n\n ", total);
		  {
		printf("\nWould you like to buy anything else?\n 1. Yes \n 2. No : ");
		scanf("%d", &n);
		if (n == 1 )
			lunch();
		else if (n == 2 )
        {
            total=0;
            exit();
            menue();
        }

		/*else
			if (n!= 1 , 2)
			{
			 printf("\n\n\t\t Invalid Decision Entered\n\n\n\n");
			 exit();
			}*/
		}
		  }
		  else
			  if (c == 3 )
			  {
			  printf(" quantity : ");
			  scanf("%d", &quantity);
			  total = total+(110 * quantity) ;
			  printf("Your total amount is taka%.2f \n Please pay at the counter\n\n\n ", total);
			   {
				printf("\nWould you like to buy anything else?\n 1. Yes \n 2. No : ");
				scanf("%d", &n);
				if (n == 1 )
					lunch();
				else
					if (n == 2 )
                    {
                        total=0;
                       exit();
                       menue();
                    }

				/*else
					if (n != 1 , 2)
					{
					 printf("\n\n\t\t invalid decision Entered\n\n\n\n");
					 exit();
					}*/
	           }
			  }

				 else
					 if (c != 1 , 2 , 3)
						{
						printf("\n\n\t\t   Invalid Choice Entered\n\n");
						lunch();
						}
	  }

}
void dinner()
{
  int c;
  int quantity;
  int n;
system("COLOR 0D");

  printf("                WELCOME TO GRAND PLACE RASTAURNT \n ");
  printf("  Here is our dinner menu  $ \n\n");
  printf("Please select the food that you would like to purchase:\n\n");
  printf("\t\t   1. plater 1(rice,curry,salad - 150.00 taka\n");
  printf("\t\t   2. plater 2 (rice, beef, salad- 200.00 taka\n");
  printf("\t\t   3.  chawmin - 300.00 taka\n");

  printf("Enter your choice here : ");
  scanf("%d", &c);
  {
  if (c == 1)
	  {
	  printf("quantity : ");
	  scanf("%d", &quantity);
	  total = total+(150 * quantity) ;
	  printf("Your total amount is taka%.2f \n Please pay at the counter\n ", total);
	    {
		printf("\nWould you like to buy anything else?\n 1. Yes \n 2. No : ");
		scanf("%d", &n);

		if (n==1){
			dinner();

	    }
		else
			if (n == 2 )
				{  total=0;
				    exit();
				    menue();
				}
		/*else
			if (n != 1 , 2)
			{
			 printf("\n\n\t\t Invalid decision \n\n\n\n");
			 exit();
			}*/

	    }
      }
	else
		  if (c== 2)
		  {
		  printf("quantity : ");
		  scanf("%d", &quantity);
		  total = total+(200 * quantity) ;
		  printf("Your total amount is taka%.2f \n Please pay at the counter\n ", total);
		    {
			printf("\nWould you like to buy anything else?\n 1. Yes \n 2. No : ");
			scanf("%d", &n);
			if (n == 1 )
				dinner();
			else
				if (n == 2 )
                {
                    total=0;
                   exit();
                   menue;
                }

			/*else
				if (n != 1 , 2)
				{
				 printf("\n\n\t\t Invalid decision Entered\n\n\n\n");
				 exit();
				}*/
	        }
		  }
		  else
			  if ( c== 3 )
			  {
			  printf("quantity : ");
			  scanf("%d", &quantity);
			  total =total+(300 * quantity) ;
			  printf("Your total amount is taka%.2f \n pay at the counter\n\n\n ", total);
			    {
				printf("\nWould you like to buy anything else?\n 1. Yes \n 2. No : ");
				scanf("%d", &n);
				if (n == 1 )
					dinner();
				else
					if (n == 2 )
                    {
                        total=0;
                       exit();
                       menue();
                    }

				else
					if (n!= 1 , 2)
					{
					 //printf("\n\n\t\t Invalid decision Entered\n\n\n\n");
					 exit();
					}

				 }
			  }

				 else
					 if (c != 1 , 2 , 3){
						printf("\n\n\t\t Choice Entered\n\n");

						}
		 }

}

void exit()
{
    system("COLOR 0C");

  printf("                  Thank You Very Much          \n ");
  printf("             ============================+         \n\n");
  printf("               ## Please come again ##\n\n");
}
void table() {
        FILE *fp1, *fp2;
        char filename[40]="rest";
        char c;
        int del_line, temp = 1;
        system("COLOR F4");
        printf("\n                WELCOME TO GRAND PLACE RASTAURNT \n\n ");
        printf("We've Tables Available Numbering\n");
        fp1 = fopen(filename, "r");
        c = getc(fp1);
        while (c != EOF)
        {
          printf("%c", c);
          c = getc(fp1);
        }
        rewind(fp1);
        printf("\nEnter Your Required Table Count\n");
        scanf("%d", &del_line);
        fp2 = fopen("copy.c", "w");
        c = getc(fp1);
        while (c != EOF) {
          c = getc(fp1);
          if (c == '\n')
          temp++;
          if (temp != del_line)
          {
            putc(c, fp2);
          }
        }
        fclose(fp1);
        fclose(fp2);
        remove(filename);
        rename("copy.c", filename);
        printf("\n The Tables We're Available With Are:\n");
        fp1 = fopen(filename, "r");
        c = getc(fp1);
        while (c != EOF) {
            printf("%c", c);
            c = getc(fp1);
        }
        fclose(fp1);
        return 0;
      }

