// Zeynep Orman
#include <stdio.h>
int main() {
    char menu,S0,S1,D,check;
    int base,input_base10;

    do {
        printf("Welcome to 1 TO 4 DEMULTIPLEXER!\na) Compute and Display the outputs\nb) Quit\n");
        printf("You choose:");
        scanf(" %c", &menu);


        while (menu != 'a' && menu != 'b'){
            printf("Invalid option ! Choose either a or b!\n");
            printf("You choose:");
            scanf(" %c", &menu);
        }

        if (menu == 'a'){



            printf("You have chosen option a\n");
            printf("Which base will you use to enter input (base 2 or base 10)?");
            scanf("%d", &base);


            if (base == 2){


                for (int i = 0; i < 3;) {
                    printf("Please enter your input:");
                    fflush(stdin);          // avoiding trash values as input when loop repeats itself
                    scanf("%c%c%c%c", &S1, &S0, &D, &check);

                    if ((S1 != '0' && S1 != '1') || (S0 != '0' && S0 != '1') || (D != '0' && D != '1' && D!= '\n')) {
                        printf("%c%c%c%c is not a valid number in base 2! Please try again!\n", S1, S0, D, check);
                        S1 = 0;
                        S0 = 0;
                        D  = 0;
                        check = 0;  // to empty the values of variables
                    }

                    else if (check != '\n') {
                     printf("You entered more than 3-bits! Please try again!\n");
                     S1 = 0;
                     S0 = 0;
                     D  = 0;
                     check = 0;  // to empty the values of variables
                   }
                    else if (D == '\n'|| (S0 == '\n') || (S1 == '\n')) {
                      printf("You entered less than 3-bits! Please try again!\n");
                        S1 = 0;
                        S0 = 0;
                        D  = 0;
                        check = 0;  // to empty the values of variables
                   }
                    else {
                        i = 3; // valid input, exit loop

                        S1 = S1 - 48;  // to subtract 48 because of ASCII code to make it char to int value
                        S0 = S0 - 48;
                        D = D - 48;

                        if ((S1 == 1 || S1 == 0 ) && (S0 == 1 || S0 == 0) && (D == 1 || D == 0)){
                            if (S1 == 0 && S0 == 0 && D == 0){
                                printf("Y3 is 0 Y2 is 0 Y1 is 0 YO is 0\n");
                            }
                            else if (S1 == 0 && S0 == 0 && D == 1){
                                printf("Y3 is 0 Y2 is 0 Y1 is 0 YO is 1\n");
                            }
                            else if (S1 == 0 && S0 == 1 && D == 0){
                                printf("Y3 is 0 Y2 is 0 Y1 is 0 YO is 0\n");
                            }
                            else if (S1 == 0 && S0 == 1 && D == 1){
                                printf("Y3 is 0 Y2 is 0 Y1 is 1 YO is 0\n");
                            }
                            else if(S1 == 1 && S0 == 0 && D == 0){
                                printf("Y3 is 0 Y2 is 0 Y1 is 0 YO is 0\n");
                            }
                            else if(S1 == 1 && S0 == 0 && D == 1){
                                printf("Y3 is 0 Y2 is 1 Y1 is 0 YO is 0\n");
                            }
                            else if(S1 == 1 && S0 == 1 && D == 0){
                                printf("Y3 is 0 Y2 is 0 Y1 is 0 YO is 0\n");
                            }
                            else if (S1 == 1 && S0 == 1 && D == 1){
                                printf("Y3 is 1 Y2 is 0 Y1 is 0 YO is 0\n");
                            }
                        }
                    }
                }

            }
            if(base == 10){
                int true = 0;
                do {
                    printf("Please enter your input: ");
                    scanf("%d", &input_base10);
                    if (input_base10 <= 7 && input_base10 >= 0){    //it should be smaller than 3 because the last represented with 3 bits is 7
                        true = 1;
                    }
                    else{
                        printf("Decimal %d cannot be represented with 3 bits.Please try again!\n",input_base10);
                    }
                } while (true == 0);
                if (true == 1){                      //making int to char to define
                    D = input_base10 % 2 + '0';
                    input_base10 /= 2;
                    S0 = input_base10 % 2 + '0';
                    input_base10 /= 2;
                    S1 = input_base10 % 2 + '0';
                    input_base10 /= 2;

                    S1 = S1 - 48;
                    S0 = S0 - 48;          // subtracting for make it int value
                    D = D - 48;

                    if ((S1 == 1 || S1 == 0 ) && (S0 == 1 || S0 == 0) && (D == 1 || D == 0)){
                        if (S1 == 0 && S0 == 0 && D == 0){
                            printf("Y3 is 0 Y2 is 0 Y1 is 0 YO is 0\n");
                        }
                        else if (S1 == 0 && S0 == 0 && D == 1){
                            printf("Y3 is 0 Y2 is 0 Y1 is 0 YO is 1\n");
                        }
                        else if (S1 == 0 && S0 == 1 && D == 0){
                            printf("Y3 is 0 Y2 is 0 Y1 is 0 YO is 0\n");
                        }
                        else if (S1 == 0 && S0 == 1 && D == 1){
                            printf("Y3 is 0 Y2 is 0 Y1 is 1 YO is 0\n");
                        }
                        else if(S1 == 1 && S0 == 0 && D == 0){
                            printf("Y3 is 0 Y2 is 0 Y1 is 0 YO is 0\n");
                        }
                        else if(S1 == 1 && S0 == 0 && D == 1){
                            printf("Y3 is 0 Y2 is 1 Y1 is 0 YO is 0\n");
                        }
                        else if(S1 == 1 && S0 == 1 && D == 0){
                            printf("Y3 is 0 Y2 is 0 Y1 is 0 YO is 0\n");
                        }
                        else if (S1 == 1 && S0 == 1 && D == 1){
                            printf("Y3 is 1 Y2 is 0 Y1 is 0 YO is 0\n");
                        }
                    }

                }

            }
            while (base != 2 && base != 10){
                printf("Invalid number in base 2/10 Please re-enter the base!\n");
                printf("Which base will you use to enter input (base 2 or base 10)?");
                scanf("%d", &base);
            }


        }
        else if(menu == 'b'){
            printf("You have chosen option b\nBYEE!!");
            return 0;
        }

    } while (menu != 'b');


    return 0;
}
