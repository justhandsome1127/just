#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>
#define OK 1
#define NG 0

typedef struct node{
    int num;
    char cmpyTic[60], cmpyName[60];
    double MarkCap, PE, change, volume, price[30], high[30], low[30];
    double rsvValue[23], kValue[23], dValue[23], ma5[26], ma20[11], ma20sd[11], bandUp[11], bandDown[11], bandWidth[11];
    struct node *next;
    struct node *prior;
} COMPANY;

void stay (){
int c = 523;
int d = 554;
int e = 622;
int a = 830;
int ch = 1046;
int eig = 125;

Beep(c,eig);
Beep(d,eig);
Beep(c,eig);
Beep(a, 625);
Beep(c,eig);
Beep(c,eig);
Beep(c,eig);
Beep(c,eig);
Beep(c,eig);
Beep(c,eig);
Beep(c,eig);
Beep(d,eig);
Beep(d,eig);
Beep(d,eig);
//3
Beep(c,eig);
Beep(d,eig);
Beep(c,eig);
Beep(a, 625);
Beep(c,eig);
Beep(c,eig);
Beep(c,eig);
Beep(c,eig);
Beep(c,eig);
Beep(c,eig);
Beep(c,eig);
Beep(d,eig);
Beep(d,eig);
Beep(d,eig);
//
Beep(c,eig);
Beep(d,eig);
Beep(c,eig);
Beep(a, 625);
Beep(c,eig);
Beep(c,eig);
Beep(c,eig);
Beep(c,eig);
Beep(c,eig);
Beep(c,eig);
Beep(c,eig);
Beep(d,eig);
Beep(d,eig);
Beep(d,eig);
//
Beep(c,eig);
Beep(d,eig);
Beep(c,eig);
Beep(a, 625);
Beep(d,eig);
Beep(e,eig);
Beep(e,eig);
Beep(ch, 1000);
}

void intention(){
                            int fl = 740;
                            int al = 880;
                            int b = 988;
                            int c = 1109;
                            int d = 1178;
                            int e = 1319;
                            int f = 1480;
                            int g = 1661;

                          Sleep(500);
                             Beep(b, 250); 
                             Beep(c, 250);
                             Beep(c, 250);
                             Beep(c, 250);
                             Beep(e, 250);
                             Beep(e, 250);
                            ///9
                             Beep(f, 500);
                             Beep(c, 500);
                             Beep(c, 500);
                             Beep(e, 1000);
                            ///10
                             Beep(b, 250);
                             Beep(c, 250);
                             Beep(c, 250);
                             Beep(c, 250);
                             Beep(e, 500);
                            ///11
                             Beep(f, 500);
                             Beep(e, 125);
                             Beep(c, 375);
                             Beep(c, 500);
                             Beep(e, 500);
                            ///12
                          Sleep(500);
                             Beep(b, 250);
                             Beep(c, 250);
                             Beep(c, 500);
                             Beep(al, 500);
                            ///13
                             Beep(d, 250);
                             Beep(d, 500);
                             Beep(d, 250);
                             Beep(c, 250);
                             Beep(b, 250);
                             Beep(al, 1000);
                            ///14
                             Beep(c, 500);
                             Beep(b, 250);
                             Beep(al, 500);
                             Beep(al, 500);
                            ///15
                             Beep(d, 250);
                             Beep(d, 500);
                             Beep(d, 250);
                             Beep(c, 250);
                             Beep(b, 250);
                             Beep(al, 500);
                            ///16
                            ///17
                           Sleep(250);
                             Beep(al, 250);
                             Beep(c, 250);
                             Beep(c, 250);
                             Beep(c, 250);
                             Beep(e, 250);
                             Beep(e, 250);
                            ///18
                             Beep(f, 500);
                             Beep(e, 250);
                             Beep(c, 250);
                             Beep(c, 500);
                             Beep(e, 1000);
                            ///19
                             Beep(c, 500);
                             Beep(c, 250);
                             Beep(c, 250);
                             Beep(e, 250);
                             Beep(e, 250);
                            ///20
                             Beep(f, 250);
                             Beep(g, 250);
                             Beep(f, 250);
                             Beep(c, 250);
                             Beep(c, 500);
                             Beep(b, 500);
                            ////21
                            Sleep(500);
                             Beep(al, 500);
                             Beep(al, 250);
                             Beep(al, 250);
                             Beep(b, 500);
                            ///22
                             Beep(d, 250);
                             Beep(d, 500);
                             Beep(d, 250);
                             Beep(c, 250);
                             Beep(b, 250);
                             Beep(al, 1000);
                            ///23
                             Beep(c, 500);
                             Beep(al, 250);
                             Beep(al, 500);
                             Beep(al, 250);
                            ///24
                             Beep(d, 250);
                             Beep(d, 500);
                             Beep(d, 250);
                             Beep(c, 250);
                             Beep(b, 250);
                             Beep(al, 500);
                            ///25
                          Sleep(500);
                             Beep(al, 125);
                             Beep(al, 375);
                             Beep(b, 125);
                             Beep(c, 375);
                             Beep(b, 125);
                             Beep(c, 375);
                            ///26
                             Beep(c, 125);
                             Beep(b, 375);
                             Beep(al, 125);
                             Beep(fl, 375);
                             Beep(b, 500);
                             Beep(al, 1000);
                            ///27
                             Beep(al, 125);
                             Beep(al, 375);
                             Beep(b, 125);
                             Beep(c, 375);
                             Beep(b, 125);
                             Beep(c, 375);
                            ///28
                             Beep(b, 125);
                             Beep(c, 375);
                             Beep(fl, 250);
                             Beep(fl, 250);
                             Beep(b, 500);
                             Beep(al, 500);
                            ///29
                             Beep(al, 166);
                             Beep(b, 166);
                             Beep(al, 166);
                             Beep(e, 1000);
                             Beep(e, 250);
                             Beep(e, 250);
                            ///30
                             Beep(c, 250);
                             Beep(b, 1250);
                             Beep(b, 166);
                             Beep(c, 166);
                             Beep(b, 166);
                            ///31
                             Beep(c, 1250);
                             Beep(b, 250);
                             Beep(c, 250);
                             Beep(d, 250);
                            ///32
                             Beep(c, 250);
                             Beep(al, 1750);
                            ///33
                            Sleep(250);
                             Beep(al, 250);
                             Beep(al, 125);
                             Beep(al, 125);
                             Beep(al, 125);
                             Beep(al, 125);
                             Beep(e, 500);
                             Beep(e, 125);
                             Beep(e, 375);
                            ///34
                             Beep(b, 500);
                             Beep(b, 125);
                             Beep(b, 375);
                             Beep(b, 500);
                             Beep(al, 500);
                            ///35
                           Sleep(250);
                             Beep(al, 125);
                             Beep(al, 125);
                             Beep(al, 250);
                             Beep(e, 250);
                             Beep(e, 500);
                             Beep(e, 125);
                             Beep(e, 375);
                            ///36
                             Beep(b, 500);
                             Beep(b, 125);
                             Beep(b, 375);
                             Beep(b, 500);
                             Beep(c, 500);
                            ///37
                             Beep(al, 166);
                             Beep(b, 166);
                             Beep(al, 166);
                             Beep(d, 750);
                             Beep(c, 500);
                             Beep(b, 250);
                            ///38
                             Beep(b, 1250);
                             Beep(al, 250);
                             Beep(b, 250);
                             Beep(c, 250);
                            ///39
                             Beep(c, 750);
                             Beep(c, 500);
                             Beep(b, 250);
                             Beep(c, 250);
                             Beep(d, 250);
                            ///40
                            Beep(c, 250);
                            Beep(al, 250);
                            Beep(b, 375);
                            Beep(c, 125);
                            Beep(fl, 250);
                            Beep(fl, 250);
                            Beep(b, 500);
                            Beep(al, 1500);
}

int readnum(){
    unsigned int c;
    int num = 0;
    int dec;

    while ( (c = getchar()) != '\n') {
        
        dec = c - '0';
        if (c == '#')
            return -2;
        else if ( dec >= 0 && dec <= 9) {
            num *= 10;
            num += dec;
        } else return(-1);
    }
    return num;
}

COMPANY *create_node(int j, COMPANY *target, char *cmpyTic, char *cmpyName, double MarkCap, double PE, double change, double volume, double price[], double high[], double low[]){
    COMPANY *new = malloc(sizeof(COMPANY));

    new->num = j;
    strcpy(new->cmpyTic, cmpyTic);
    strcpy(new->cmpyName, cmpyName);
    new->MarkCap = MarkCap;
    new->PE = PE;
    new->change = change;
    new->volume = volume;
    for (int i = 0; i < 30; i++){
        new->price[i] = price[i];
        new->high[i] = high[i];
        new->low[i] = low[i];
    }

    new->prior = target;
    return new;
}

COMPANY *locate_head(COMPANY *target){
    COMPANY *next = NULL, *head;
    for (head = target; head != NULL; head = head->prior){
        head->next = next;
        next = head;
    }
    return next;
}

void RSV_value(COMPANY *curCmpy){
    int i, j;
    double High, Low;
    for (i = 0; i < 22; i++){
        High = 0;
        Low = 10000;
        for (j = 0; j < 9; j++){
            if(High < curCmpy->high[i + j])
                High = curCmpy->high[i + j];
            if(Low > curCmpy->low[i + j])
                Low = curCmpy->low[i + j];
        }
        curCmpy->rsvValue[i] = (curCmpy->price[i] - Low) / (High - Low) * 100;
    }
    curCmpy->rsvValue[22] = 0;
}

void K_value(COMPANY *curCmpy){
    int i;
    curCmpy->kValue[22] = 0;
    for (i = 21; i >= 0; i--)
        curCmpy->kValue[i] = curCmpy->kValue[i + 1] * 2 / 3 + curCmpy->rsvValue[i] / 3;
}

void D_value(COMPANY *curCmpy){
    int i;
    curCmpy->dValue[22] = 0;
    for (i = 21; i >= 0; i--)
        curCmpy->dValue[i] = curCmpy->dValue[i + 1] * 2 / 3 + curCmpy->kValue[i] / 3;
}

void ma_5(COMPANY *curCmpy){
    int i, j;
    for (i = 0; i <26; i++){
        curCmpy->ma5[i] = 0;
        for (j = 0; j < 5; j++)
            curCmpy->ma5[i] += curCmpy->price[i + j];
        curCmpy->ma5[i] /= 5;
    }
}

void ma_20(COMPANY *curCmpy){
    int i, j;
    for (i = 0; i < 11; i++){
        curCmpy->ma20[i] = 0;
        for (j = 0; j < 20; j++)
            curCmpy->ma20[i] += curCmpy->price[i + j];
        curCmpy->ma20[i] /= 20;
    }
}

void ma_20_standard_deviation (COMPANY *curCmpy){
    int i, j;
    for (i = 0; i < 11; i++){
        curCmpy->ma20sd[i] = 0;
        for (j = 0; j < 20; j++)
            curCmpy->ma20sd[i] += pow(curCmpy->price[j] - curCmpy->ma20[i], 2);
        curCmpy->ma20sd[i] = sqrt(curCmpy->ma20sd[i] / 20);
    }
}

void bbands (COMPANY *curCmpy){
    int i;
    for (i = 0; i < 11; i++){
        curCmpy->bandUp[i] = curCmpy->ma20[i] + curCmpy->ma20sd[i] * 2;
        curCmpy->bandDown[i] = curCmpy->ma20[i] - curCmpy->ma20sd[i] * 2;
        curCmpy->bandWidth[i] = (curCmpy->bandUp[i] - curCmpy->bandDown[i]) / curCmpy->ma20[i];
    }
}

void calculate (COMPANY *curCmpy){
    RSV_value(curCmpy);
    K_value(curCmpy);
    D_value(curCmpy);
    ma_20(curCmpy);
    ma_5(curCmpy);
    ma_20_standard_deviation(curCmpy);
    bbands(curCmpy);
}

int cmpfunc (const void * a, const void * b){
   return ( *(int*)a - *(int*)b );
}

COMPANY *find (COMPANY *head, int num){
    COMPANY *target;
    int i;
    for (target = head, i = 0; i < num - 1; target = target->next,i++);
    return target;
}

void add (COMPANY *target){
    COMPANY *new = malloc(sizeof(COMPANY));
    int i;

    printf("You need to enter company's name, ticket, market capital, P/E, change, volume, pass 30 days' price, high and low.\n");
    scanf("%s %s %lf %lf %lf %lf", new->cmpyName, new->cmpyTic, &new->MarkCap, &new->PE, &new->change, &new->volume);
    for (i = 0; i < 30; i++)
        scanf("%lf", &new->price[i]);
    for (i = 0; i < 30; i++)
        scanf("%lf", &new->high[i]);
    for (i = 0; i < 30; i++)
        scanf("%lf", &new->low[i]);
    new->num = target->num + 1;
    new->prior = target;
    new->next = target->next;
    target->next = new;
}

void delete (COMPANY *curCmpy){
    if(curCmpy->prior == NULL)
        curCmpy->next->prior = NULL;
    else if(curCmpy->next == NULL)
        curCmpy->prior->next = NULL;
    else if(curCmpy->prior != NULL || curCmpy->next != NULL){
        curCmpy->prior->next = curCmpy->next;
        curCmpy->next->prior = curCmpy->prior;
    }
    free(curCmpy);
}

void out_put_data(int num, COMPANY *target){
    switch(num){
        case 1 :
        case 2 :
            printf("marketcapital: %.2lf ", target->MarkCap);
            if(num != 1)
                break;
        case 3 :
            printf("P/E: %.2lf ", target->PE);
            if(num !=1)
                break;
        case 4 :
            printf("change: %.2lf ", target->change);
            if(num != 1)
                break;
        case 5 :
            printf("volume: %.2lf ", target->volume);
            if(num != 1)
                break;
        case 6 :
            printf("price: %.2lf ", target->price[1]);
            if(num != 1)
                break;
        case 7 :
            printf("high: %.2lf ", target->high[0]);
            if(num != 1)
                break;
        case 8 :
            printf("low: %.2lf ", target->low[0]);
            if(num != 1)
                break;
        case 9 :
            printf("RSV-value: %.2lf ", target->rsvValue[0]);
            if(num != 1)
                break;
        case 10 :
            printf("K-value: %.2lf ", target->kValue[0]);
            if(num != 1)
                break;
        case 11 :
            printf("D-value: %.2lf ", target->dValue[0]);
            if(num != 1)
                break;
        case 12 :
            printf("5ma: %.2lf ", target->ma5[0]);
            if(num != 1)
                break;
        case 13 :
            printf("20ma: %.2lf ", target->ma20[0]);
            if(num != 1)
                break;
        case 14 :
            printf("standerd deviation: %.2lf ", target->ma20sd[0]);
            if(num != 1)
                break;
        case 15 :
            printf("upper band: %.2lf ", target->bandUp[0]);
            if(num != 1)
                break;
        case 16 :
            printf("downword band: %.2lf ", target->bandDown[0] );
            if(num != 1)
                break;
        case 17 :
            printf("bandwidth: %.2lf ", target->bandWidth[0]);
            if(num != 1)
                break;
    }
}

int main () {
    int work = 0, n, flag = NG, cmpyNum, i, j = 1, k;
    int num[20];
    char line[100000], tempchar[100];
    char *sp;
    char cmpyTic[20],cmpyName[20];
    double MarkCap, PE, change, volume, price[31], high[31], low[31], tempint;
    COMPANY *target = NULL,*head = NULL;
    FILE *fp;

    fp = fopen("C:/Users/xraywu/Desktop/final_prodject/company1.csv","r");
    if(fp == NULL){
        printf("NO READING FILE!");
        exit(0);
    }
    while(fgets(line, 1000000, fp) != NULL){
        memset(price, 0, sizeof(price));
        memset(high, 0, sizeof(high));
        memset(low, 0, sizeof(low));
        sp = strtok(line, ",");
        strcpy(cmpyTic, sp);
        sp = strtok(NULL, ",");
        strcpy(cmpyName, sp);
        sp = strtok(NULL, ",");
        MarkCap = atof(sp);
        sp = strtok(NULL, ",");
        PE = atof(sp);
        sp = strtok(NULL, ",");
        change = atof(sp);
        sp = strtok(NULL, ",");
        volume = atof(sp);
        for (i = 0; i < 30; i++){
            sp = strtok(NULL, ",");
            price[i] = atof(sp);
        }
        for(i = 0; i < 30; i++){
            sp = strtok(NULL, ",");
            low[i] = atof(sp);
        }
        for(i = 0; i < 30; i++){
            sp = strtok(NULL, ",");
            high[i] = atof(sp);
        }
        target = create_node(j, target, cmpyTic, cmpyName, MarkCap, PE, change, volume, price, high, low);
        calculate(target);
        j++;
    }
    head = locate_head(target);

    printf("These are the companies we've entered!:\n");
    for (i = 0, target = head; i < 19; i++, target = target->next){
        printf("%d.%s,%s\n", target->num, target->cmpyTic, target->cmpyName);
    }
    printf("Please enter prefered company number(1~19)(enter # to stop):\n");
    for (cmpyNum = 0; cmpyNum < 20; cmpyNum++){
        printf("#%d:", cmpyNum + 1);
        n = readnum();
        for (k = 1; k < cmpyNum; k++){
            if(num[k] == n)
                flag = OK;
        }
        if (n == -2)
            break;
        else if (n > 19 || n < 1 || flag == OK){
            printf("wrong input\n");
            cmpyNum--;
            flag = NG;
        }
        num[cmpyNum] = n;
    }
    qsort(num, cmpyNum, sizeof(int), cmpfunc);
    for (target = head, i = 0; i < 19; target = target->next, i++){
        if (num[0] == target->num){
            target->num = 1;
            head = target;
            break;
        }
        else
            delete (target);
    }
    for(target = head->next, k = 1; i < 18; i++, target = target->next){
        if(num[k] == target->num){
            target->num = k;
            k++;
        }
        else
            delete (target);
    }

    while(work != 9){
        printf("What can I help you?\n1.add a company\n2.delete a company\n3.showing all companies' name and ticker\n4.showing specific data\n");
        printf("5.searching for data\n6.Display a kind of data of the companies\n7.stock forecasting\n8.music!\n9.quit\n(enter 1~9):");
        scanf("%d", &work);
        switch(work){
            case 1:
                target = find(head, cmpyNum);
                add(target);
                calculate(target->next);
                cmpyNum++;
                break;
            case 2:
                printf("Which do you want to delete?(1~%d):", cmpyNum);
                scanf("%d", &k);
                target = find(head, k);
                if(target->prior == NULL)
                    head = target->next;
                delete (target);
                cmpyNum--;
                break;
            case 3:
                for (target = head, i = 0; i < cmpyNum; target = target->next, i++)
                    printf("%s %s\n", target->cmpyName, target->cmpyTic);
                break;
            case 4:
                memset(num, 0, sizeof(num));
                printf("whitch kind of data do you want to know?\n(1.all data 2.marketcapital 3.P/E 4.change 5.volume 6.price 7.high 8.low 9.RSV-value 10.K-value 11.D-value\n");
                printf("12.5ma 13.20ma 14.stander deviation 15.upper band 16.downword band 17.bandwidth)\n(press # to stop)");
                for (i = 0; i < 18; i++){
                    printf("#%d:", i + 1);
                    n = readnum();
                    for (k = 0; k < i; k++){
                        if(num[k] == n)
                        flag = OK;
                    }
                    if (n == -2 || n == 1)
                        break;
                    else if (n > 17 || n < 1 || flag == OK){
                        printf("wrong input\n");
                        i--;
                        flag = NG;
                    }
                    num[i] = n;
                }
                for (target = head, j = 0; j < cmpyNum; target = target->next, j++){
                    printf("%s %s\n", target->cmpyName, target->cmpyTic);
                    for (i = 0; i < 18; i++){
                        out_put_data(num[i], target);
                    }
                    printf("\n");
                }
                break;
            case 5:
                printf("what kind of data you want to search?(1.company name 2.company ticker 3.market capital 4.P/E 5.volume 6.price of the day):");
                scanf("%d", &k);
                switch(k){
                    case 1:
                        printf("enter the name you want to search:");
                        getchar();
                        fgets(tempchar, 100, stdin);
                        tempchar[strlen(tempchar) - 1] = 0x00;
                        for (target = head, j = 0; j < cmpyNum; target = target->next, j++){
                            printf("%s %s   ", tempchar, target->cmpyName);
                            if(strcmp(tempchar, target->cmpyName) == 0){
                                printf("%s %s\n", target->cmpyName, target->cmpyTic);
                                out_put_data(1, target);
                                printf("\n");
                                break;
                            }
                        }
                        if(j == cmpyNum)
                            printf("data not found\n");
                        break;
                    case 2:
                        printf("enter the ticker you want to search:");
                        getchar();
                        fgets(tempchar, 100, stdin);
                        for (target = head, j = 0; j < cmpyNum; target = target->next, j++)
                            if(strcmp(tempchar, target->cmpyTic) == 0){
                                printf("%s %s\n", target->cmpyName, target->cmpyTic);
                                out_put_data(1, target);
                                printf("\n");
                                break;
                            }
                        if(j == cmpyNum)
                            printf("data not found\n");
                        break;
                    case 3:
                        printf("enter the market capital you want to search:");
                        scanf("%lf", &tempint);
                        for (target = head, j = 0; j < cmpyNum; target = target->next, j++)
                            if(target->MarkCap == tempint){
                                printf("%s %s\n", target->cmpyName, target->cmpyTic);
                                out_put_data(1, target);
                                printf("\n");
                                break;
                            }
                        if(j == cmpyNum)
                            printf("data not found\n");
                        break;
                    case 4:
                        printf("enter the P/E you want to search:");
                        scanf("%lf", &tempint);
                        for (target = head, j = 0; j < cmpyNum; target = target->next, j++)
                            if(target->PE == tempint){
                                printf("%s %s\n", target->cmpyName, target->cmpyTic);
                                out_put_data(1, target);
                                printf("\n");
                                break;
                            }
                        if(j == cmpyNum)
                            printf("data not found\n");
                        break;
                    case 5:
                        printf("enter the volume you want to search:");
                        scanf("%lf", &tempint);
                        for (target = head, j = 0; j < cmpyNum; target = target->next, j++)
                            if(target->volume == tempint){
                                printf("%s %s\n", target->cmpyName, target->cmpyTic);
                                out_put_data(1, target);
                                printf("\n");
                                break;
                            }
                        if(j == cmpyNum)
                            printf("data not found\n");
                        break;
                    case 6:
                        printf("enter the price of the day you want to search:");
                        scanf("%lf", &tempint);
                        for (target = head, j = 0; j < cmpyNum; target = target->next, j++)
                            if(target->price[0] == tempint){
                                printf("%s %s\n", target->cmpyName, target->cmpyTic);
                                out_put_data(1, target);
                                printf("\n");
                                break;
                            }
                        if(j == cmpyNum)
                            printf("data not found\n");
                        break;
                }
                break;
            case 6 :
                printf("what kind of data do you want to display?\n(1.marketcapital 2.P/E 3.change 4.volume 5.price 6.high 7.low 8.RSV-value 9.K-value 10.D-value\n");
                printf("11.5ma 12.20ma 13.stander deviation 14.upper band 15.downword band 16.bandwidth):");
                scanf("%d", &k);
                for (i = 0, target = head; i < cmpyNum; i++, target = target->next){
                    printf("%s %s: ", target->cmpyName, target->cmpyTic);
                    out_put_data(k + 1, target);
                    printf("\n");
                }
                break;
            case 7 :
                printf("in sort term,these are the stocks we recomand to buy:\n");
                flag = NG;
                printf("Due to bollinger band: ");
                for (i = 0, target = head; i < cmpyNum; i++, target = target->next){
                    if(target->price[0] < target->bandDown[0]){
                        printf("%s ", target->cmpyTic);
                        flag = OK;
                    }
                }
                if(flag == NG)
                    printf("none");
                flag = NG;
                printf("\n");
                printf("Due to the golden cross: ");
                for (i = 0, target = head; i < cmpyNum; i++, target = target->next){
                    if((target->kValue[0] == target->dValue[0]) && (target->kValue[0] > target->kValue[1]) && (target->dValue[0] >target->dValue[1])){
                        printf("%s ", target->cmpyTic);
                        flag = OK;
                    }
                }
                if(flag == NG)
                    printf("none");
                flag = NG;
                printf("\n");
                printf("Due to the death cross: ");
                for (i = 0, target = head; i < cmpyNum; i++, target = target->next){
                    if((target->kValue[0] == target->dValue[0]) && (target->kValue[0] < target->kValue[1]) && (target->dValue[0] < target->dValue[1])){
                        printf("%s ", target->cmpyTic);
                        flag = OK;
                    }
                }
                if(flag == NG)
                    printf("none");
                flag = NG;
                printf("\n");
                printf("in long term,these are the stocks we recomand to buy:\n");
                for (i = 0, target = head; i < cmpyNum; i++, target = target->next){
                    if(target->volume > 100 && target->MarkCap > 100){
                        printf("%s ", target->cmpyTic);
                        flag = OK;
                    }
                }
                if(flag == NG)
                    printf("none");
                flag = NG;
                printf("\n");
                break;
            case 8:
                stay();
                intention();
                break;
        }
    }

    fp = fopen("C:/Users/xraywu/Desktop/final_prodject/all_values.csv","w");
    for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
        fprintf(fp, "%s,", target->cmpyName);
    fprintf(fp, "%s\n", target->cmpyName);
    for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
        fprintf(fp, "%s,", target->cmpyTic);
    fprintf(fp, "%s\n", target->cmpyTic);
    for (j = 0; j < 30; j++){
        for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
            fprintf(fp, "%.2lf,", target->price[j]);
        fprintf(fp, "%.2lf\n", target->price[j]);
    }
    for (j = 0; j < 30; j++){
        for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
            fprintf(fp, "%.2lf,", target->high[j]);
        fprintf(fp, "%.2lf\n", target->high[j]);
    }
    for (j = 0; j < 30; j++){
        for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
            fprintf(fp, "%.2lf,", target->low[j]);
        fprintf(fp, "%.2lf\n", target->low[j]);
    }
    for (j = 0; j < 22; j++){
        for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
            fprintf(fp, "%.2lf,", target->rsvValue[j]);
        fprintf(fp, "%.2lf\n", target->rsvValue[j]);
    }
    for (j = 0; j < 22; j++){
        for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
            fprintf(fp, "%.2lf,", target->kValue[j]);
        fprintf(fp, "%.2lf\n", target->kValue[j]);
    }
    for (j = 0; j < 22; j++){
        for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
            fprintf(fp, "%.2lf,", target->dValue[j]);
        fprintf(fp, "%.2lf\n", target->dValue[j]);
    }
    for (j = 0; j < 25; j++){
        for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
            fprintf(fp, "%.2lf,", target->ma5[j]);
        fprintf(fp, "%.2lf\n", target->ma5[j]);
    }
    for (j = 0; j < 10; j++){
        for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
            fprintf(fp, "%.2lf,", target->ma20[j]);
        fprintf(fp, "%.2lf\n", target->ma20[j]);
    }
    for (j = 0; j < 10; j++){
        for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
            fprintf(fp, "%.2lf,", target->ma20sd[j]);
        fprintf(fp, "%.2lf\n", target->ma20sd[j]);
    }
    for (j = 0; j < 10; j++){
        for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
            fprintf(fp, "%.2lf,", target->bandUp[j]);
        fprintf(fp, "%.2lf\n", target->bandUp[j]);
    }
    for (j = 0; j < 10; j++){
        for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
            fprintf(fp, "%.2lf,", target->bandDown[j]);
        fprintf(fp, "%.2lf\n", target->bandDown[j]);
    }
    for (j = 0; j < 10; j++){
        for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
            fprintf(fp, "%.2lf,", target->ma20[j]);
        fprintf(fp, "%.2lf\n", target->bandWidth[j]);
    }
    for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
        fprintf(fp, "%.2lf,", target->MarkCap);
    fprintf(fp, "%.2lf\n", target->MarkCap);
    for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
        fprintf(fp, "%.2lf,", target->PE);
    fprintf(fp, "%.2lf\n", target->PE);
    for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
        fprintf(fp, "%.2lf,", target->change);
    fprintf(fp, "%.2lf\n", target->change);
    for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
        fprintf(fp, "%.2lf,", target->volume);
    fprintf(fp, "%.2lf\n", target->volume);

    fclose(fp);

    fopen("C:/Users/xraywu/Desktop/final_prodject/csv/RSV_value.csv","w");
    fprintf(fp, "days,");
    for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
        fprintf(fp, "%s,", target->cmpyName);
    fprintf(fp, "%s\n", target->cmpyName);
    for (j = 0; j < 22; j++){
        fprintf(fp, "%d,", j + 1);
        for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
            fprintf(fp, "%.2lf,", target->rsvValue[j]);
        fprintf(fp, "%.2lf\n", target->rsvValue[j]);
    }
    fclose(fp);
    
    fopen("C:/Users/xraywu/Desktop/final_prodject/csv/K_value.csv","w");
    fprintf(fp, "days,");
    for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
        fprintf(fp, "%s,", target->cmpyName);
    fprintf(fp, "%s\n", target->cmpyName);
    for (j = 0; j < 22; j++){
        fprintf(fp, "%d,", j + 1);
        for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
            fprintf(fp, "%.2lf,", target->kValue[j]);
        fprintf(fp, "%.2lf\n", target->kValue[j]);
    }
    fclose(fp);

    fopen("C:/Users/xraywu/Desktop/final_prodject/csv/D_value.csv","w");
    fprintf(fp, "days,");
    for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
        fprintf(fp, "%s,", target->cmpyName);
    fprintf(fp, "%s\n", target->cmpyName);
    for (j = 0; j < 22; j++){
        fprintf(fp, "%d,", j + 1);
        for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
            fprintf(fp, "%.2lf,", target->dValue[j]);
        fprintf(fp, "%.2lf\n", target->dValue[j]);
    }
    fclose(fp);

    fopen("C:/Users/xraywu/Desktop/final_prodject/csv/band_up.csv","w");
    fprintf(fp, "days,");
    for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
        fprintf(fp, "%s,", target->cmpyName);
    fprintf(fp, "%s\n", target->cmpyName);
    for (j = 0; j < 11; j++){
        fprintf(fp, "%d,", j + 1);
        for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
            fprintf(fp, "%.2lf,", target->bandUp[j]);
        fprintf(fp, "%.2lf\n", target->bandUp[j]);
    }
    fclose(fp);

    fopen("C:/Users/xraywu/Desktop/final_prodject/csv/band_down.csv","w");
    fprintf(fp, "days,");
    for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
        fprintf(fp, "%s,", target->cmpyName);
    fprintf(fp, "%s\n", target->cmpyName);
    for (j = 0; j < 11; j++){
        fprintf(fp, "%d,", j + 1);
        for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
            fprintf(fp, "%.2lf,", target->bandDown[j]);
        fprintf(fp, "%.2lf\n", target->bandDown[j]);
    }
    fclose(fp);

    fopen("C:/Users/xraywu/Desktop/final_prodject/csv/bandwidth.csv","w");
    fprintf(fp, "days,");
    for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
        fprintf(fp, "%s,", target->cmpyName);
    fprintf(fp, "%s\n", target->cmpyName);
    for (j = 0; j < 11; j++){
        fprintf(fp, "%d,", j + 1);
        for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
            fprintf(fp, "%.2lf,", target->bandWidth[j]);
        fprintf(fp, "%.2lf\n", target->bandWidth[j]);
    }
    fclose(fp);

    fopen("C:/Users/xraywu/Desktop/final_prodject/csv/5ma.csv","w");
    fprintf(fp, "days,");
    for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
        fprintf(fp, "%s,", target->cmpyName);
    fprintf(fp, "%s\n", target->cmpyName);
    for (j = 0; j < 11; j++){
        fprintf(fp, "%d,", j + 1);
        for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
            fprintf(fp, "%.2lf,", target->ma5[j]);
        fprintf(fp, "%.2lf\n", target->ma5[j]);
    }
    fclose(fp);

    fopen("C:/Users/xraywu/Desktop/final_prodject/csv/20ma.csv","w");
    fprintf(fp, "days,");
    for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
        fprintf(fp, "%s,", target->cmpyName);
    fprintf(fp, "%s\n", target->cmpyName);
    for (j = 0; j < 11; j++){
        fprintf(fp, "%d,", j + 1);
        for (i = 0, target = head; i < cmpyNum - 1; i++, target = target->next)
            fprintf(fp, "%.2lf,", target->ma20[j]);
        fprintf(fp, "%.2lf\n", target->ma20[j]);
    }
    fclose(fp);
}