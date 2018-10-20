#include<stdio.h>

int main()

{

    int digit, Input, scan, begin=0, cha, Holder[9999] = {0}, missing, moveOn, invalid, replace=0;

    int misChars[9999] = {0}, countChars[9999] = {0};

    const char Key[] = {[15]='I', [22]='c', [23]='j', [24]=')', [25]='e', [26]='S', [27]='&', [28]='t', [29]='d', [30]='k', [31]='m', [32]='n', [33]='p', [34]='r', [35]='s', [36]='j', [38]='t', [39]='D', [41]='f', [42]='l', [43]='v', [44]=';', [45]='w', [46]='x', [47]='y', [48]='f',

    [49]='-', [50]='v', [51]='+', [52]='O', [54]=' ', [55]='_', [56]='0', [57]='P', [59]='i', [61]='L', [62]='a', [63]='1', [64]='o', [65]='2', [66]='F', [67]='H', [68]='q', [69]='u', [70]='b', [71]='E', [72]='3', [73]='8', [74]='I', [75]='C', [76]='!', [77]='(', [78]='/', [79]='K',

    [80]='G', [81]='I', [82]='.', [83]='5', [84]='7', [85]='M', [86]='T', [87]='g', [88]='h', [89]='B', [90]='6', [91]='9', [92]='W', [93]='X', [94]='R', [95]='Z', [96]=',', [97]='A', [98]='N', [99]='4'};    

    printf("\n-- Enter 2 for help menu. --\n");    

    printf("Do you want to decode a new text? ");

    scanf("%d", &Input);

    do

    {    

            switch(Input)

            {

                    case -2: break;

                    case 1:

                            printf("Enter text to decode: \n");

                            /*begin = 0;

                            digit = 0;

                            missing = 0;    

                            moveOn = 0;

                            invalid = 0;*/

                            begin = digit = missing = moveOn = invalid = 0;

                            for (int i = 0; i < 9999; i++)

                            {

                                    Holder[i] = 0;

                                    misChars[i] = 0;

                                    countChars[i] = 0;

                            }    

                            do

                            {

                                    begin = 1;

                                    scanf(" %d",&scan);

                                    if(scan > 0)

                                    {

                                            Holder[digit] = scan;

                                            digit++;

                                    }

                                    cha = getchar();

                                    if (cha == 10)

                                            scan = -1;

                            } while (scan > 0 || begin == 0);

                            for(int a = 0; a < digit; a++)

                            {

                                    if (Holder[a] >= 100)

                                            moveOn++;

                            }

                            if(moveOn == 0)

                            {

                                    printf("\nHere is your decoded text.\n");

                                    for (int i = 0; i < digit; i++)            

                                    {

                                            if (Key[Holder[i]] != 0)

                                                    printf("%c", Key[Holder[i]]);

                                            else

                                            {

                                                    misChars[missing] = Holder[i];

                                                    missing++;

                                                    if (replace == 0)

                                                            printf("~");

                                                    else

                                                            printf("'%d'", Holder[i]);

                                            }

                                    }

                            }

                            else

                                    printf("An input was greater than master key and couldn't continue.");

                    break;

                    case 2:printf("\tInstructions: Paste code when asked \n\t\tExample: 63 91 84 73 54 49 54 38\n\t\t'~' means unrecognized number\n\t-2: Quit main program\n\t-1: Stop input at any time\n\t\tWhen in doubt, do this\n\t 0: No/Stop\n\t 1: Yes/Continue\n\t 2: Help\n\t 3: Open Debug Stats\n\t 4: Toggle character replace\n\t 5: Additional Info"); break;

                    case 3:

                            printf("--- Debug Stats---\n");

                            missing = 0;

                            for (int i = 0; i < digit; i++)

                            {                            

                                    if  (Key[Holder[i]] == 0)

                                    {                    

                                            misChars[missing] = Holder[i];            

                                            missing++;

                                    }

                            }

                            printf("In the text there were: \n\t%d Pairs (characters)\n\t%d Total missing numbers",digit,missing);

                            if (missing != 0)

                            {

                                    printf("\n\t\t");

                                    for (int i = 0; i < missing; i++)

                                            countChars[misChars[i]] += 1;

                                    for (int i = 0; i < 100; i++)

                                    {

                                            if (countChars[i] > 1)

                                                    printf("%d(%d), ",i, countChars[i]);

                                            else if (countChars[i] > 0)

                                                    printf("%d, ",i);

                                    }

                            }

                            printf("\n\t%d Invalid numbers", moveOn);

                            if (moveOn != 0)

                            {

                                    printf("\n\t\t");

                                    for (int a = 0; a < digit; a++)

                                    {

                                            if (Holder[a] >= 100)

                                                    printf("%d, ", Holder[a]);

                                    }

                            }

                            if (replace == 0)

                                    printf("\n\tRun without replacing invalid characters? (False)");

                            else if (replace == 1)

                                    printf("\n\tRun without replacing invalid characters? (True)");

                            printf("\n\t\tToggle by entering 4\n--- End of Stats ---");

                    break;

                    case 4:            

                            replace = !replace;

                            if (replace == 1)

                                    printf("\tReplace invalid characters: Now FALSE");//printf("Program no longer replaces invalid characters");

                            else if (replace == 0)

                                    printf("\tReplace invalid characters: Now TRUE");//printf("Program now replaces invalid characters");

                    break;

                    case 5: printf("\tHi, programmer here, I hope you're enjoying this program! Please play around with the program if you have any problems. \n\t\tIf you still can't fix them, feel free to message me on Canvas and I'll do my best to help. \n\t\tTo anyone who finds this little text, I hope this program helped you! Feel free to share it with others!"); break;

                    default: printf("Enter 2 for help, or -2 to quit the program."); break;

            }

            printf("\n\nDo you want to decode a new text? ");

            scanf("%d", &Input);

    } while (Input != -2);

    return 0;

}