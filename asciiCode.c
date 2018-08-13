
/*
The goal of the program is to get a valid two 4 digit hexadecimal numbers and
convert them into thier decimal form
*/

#include<stdio.h>

int main()
        {       

                int hex1;   // hexadecimal input 1
                int hex2;   // hexadecimal input 2
                int test2;  //store hex2 after left shift
                int test1;  // store hex2 and hex1 concatenation result

                /* getting the input as a hex number */
                        
                printf("Enter a 4-digit hexadecimal number (e.g., \"af43\") : ");
                scanf("%x",&hex1);   
                                
                /*loop to check if the number is valid anf if not then we prompt the user to give another input this is done until the user enters a valid 4 digit hex number*/
                
                while(hex1<0x0000 || hex1>0xffff||(char)hex1>'f' ||(char)hex1>'F')
                        {
                                printf("%x is out of range. Please try again...\n",hex1);
                                printf("Enter a 4-digit hexadecimal number (eg.,\"af43\") :" );
                                scanf("%x",&hex1);
                        }
                printf("Your number in decimal is: %d\n",hex1);
                printf("Enter another 4-digit hexadecimal number (e.g., \"af43\") : ");
                                
/* getting the second number input*/
                                
                scanf("%x",&hex2);
                while(hex2<0x0000 || hex2>0xffff)
                        {
                                printf("%x is out of range. Please try again...\n",hex2);
                                printf("Enter another 4-digit hexadecimal number (e.g., \"af43\") : ");

                                scanf("%x",&hex2);
                        }
                printf("your number in decimal is: %u\n",hex2);

/* shifting thr hex2 digits to left*/
                test2 = hex2<<16;
/* concatenating hex2 and hex1 with hex2 as most significant and hex1 as least significant*/
                test1 = (hex1 |test2);
/*printing the results */                
               if(hex2<=0x000f)
               {
                    if(hex1<=0x000f)
                    {
                        printf("Merging 0x000%x and 0x000%x results in 0x000%x or the decimal form is %u\n",hex1,hex2,(test2|hex1), (test2|hex1));
                    }
                    else if(hex1<=0x00ff)
                    {
                        printf("Merging 0x00%x and 0x000%x results in 0x000%x or the decimal form is %u\n",hex1,hex2,(test2|hex1),(test2|hex1));

                    }
                    else if(hex1<=0x0fff)
                    {
                        printf("Merging 0x0%x and 0x000%x results in 0x000%x or the decimal form is %u\n",hex1,hex2,(test2|hex1), (test2|hex1));
                    }
                    else
                        printf("Merging 0x%x and 0x000%x results in 0x000%x ot the decimal form is %u\n",hex1, hex2, (test2|hex1), (test2|hex1));
               }
               else if(hex2<=0x00ff)
               {

                   if(hex1<=0x000f)
                   {
                       printf("Merging 0x000%x and 0x00%x results in 0x00%x or %u in decimal\n",hex1,hex2,(test2|hex1), (test2|hex1));
                   }
                   else if(hex1<=0x00ff)
                   {
                       printf("Merging 0x00%x and 0x00%x results in 0x00%x or %u in decimal\n",hex1,hex2,(test2|hex1), (test2|hex1));
                   }
                   else if(hex1<=0x0fff)
                   {
                       printf("Merging 0x0%x and 0x00%x results in 0x00%x or %uin decimal\n",hex1,hex2,(test2|hex1), (test2|hex1));

                   }
                   else
                       printf("Merging 0x%x and 0x00%x results in 0x00%x or %u in decimal\n",hex1, hex2, (test2|hex1), (test2|hex1));
            }
            else if(hex2<=0x0fff)
            {

                    if(hex1<=0x000f)
                    {

                        printf("Merging 0x000%x and 0x0%x results in 0x0%x or %u in decimal\n",hex1,hex2,(test2|hex1), (test2|hex1));
                    }
                    else if(hex1<=0x00ff)
                    {
                        printf("Merging 0x00%x and 0x0%x results in 0x0%x or %u in decimal\n",hex1,hex2,(test2|hex1), (test2|hex1));
                    }
                    else if(hex1<=0x0fff)
                    {
                        printf("Merging 0x0%x and 0x0%x results in 0x0%x or %u in decimal\n",hex1,hex2,(test2|hex1), (test2|hex1));
                    }
                    else
                        printf("Merging 0x%x and 0x0%x results in 0x0%x or %u in decimal\n",hex1, hex2, (test2|hex1), (test2|hex1));
            }

            else
            {
                    if(hex1<=0x000f)
                    {
                        printf("merging 0x000%x and 0x%x results in 0x%x or the decimal form is %u\n",hex1,hex2,(test2|hex1), (test2|hex1));
                    }
                    else if(hex1<=0x00ff)
                    {
                        printf("merging 0x00%x and 0x%x results in 0x%x or the decimal form is %u\n",hex1,hex2,(test2|hex1), (test2|hex1));
                    }
                    else if(hex1<=0x0fff)
                    {
                        printf("merging 0x0%x and 0x%x results in 0x%x or the decimal form is %u\n",hex1,hex2,(test2|hex1), (test2|hex1));

                    }
                
                    else
                        printf("Merging 0x%x and 0x%x results in 0x%x or %u in decimal\n",hex1,hex2,(test2|hex1), (test2|hex1));
            }
                return 0;


}

