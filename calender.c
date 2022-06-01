#include<stdio.h>
int notleap(int k){
     if(k==0)
              printf("It was Friday\n");
          else if(k==1){
              printf("It was Saturday\n");
          }
          else if(k==2){
              printf("It was Sunday\n");
          }
          else if(k==3){
              printf("It was Monday\n");
          }
          else if(k==4){
              printf("It was Tuesday\n");
          }
          else if(k==5){
              printf("It was Wednesday\n");
          }
          else{
              printf("It was Thursday\n");
          }
          
}
int leap(int k){
      if(k==0)
              printf("It was Thursday\n");
          else if(k==1){
              printf("It was Friday\n");
          }
          else if(k==2){
              printf("It was Saturday\n");
          }
          else if(k==3){
              printf("It was Sunday\n");
          }
          else if(k==4){
              printf("It was Monday\n");
          }
          else if(k==5){
              printf("It was Tuesday\n");
          }
          else{
              printf("It was Wednesday\n");
          }
}
int main(){
    int choose,end;
     printf("\n\n                 CALENDER             \n\n");
     printf("1. Find day on a particular date\n");
     printf("2. Print all days of a choosen month\n");
     printf("3. Add a note: \n");
     printf("4. View all your notes: \n");
     printf("5. Exit\n");
     printf("Enter your choice :");
     scanf("%d",&choose);
     if(choose==1){
     int date,year,month;
     printf("Enter date: ");
     scanf("%d",&date);
     printf("Enter month: ");
     scanf("%d",&month);
     printf("Enter year: ");
     scanf("%d",&year);
     int arr[12]={0,31,59,90,120,151,181,212,243,273,304,334};
     int week[7]={0,1,2,3,4,5,6};
     if(year%4!=0){
         int k=(((year/4)+year+date+arr[month-1])%7);
         notleap(k);
     }  
     else if(year%100==0 && year%400!=0){
         int k=(((year/4)+year+date+arr[month-1])%7);
         notleap(k);     
     }
      else{
          if(month==1 || month==2){
         int k=(((year/4)+year+date+arr[month-1])%7);
         leap(k);
          }
          else{
              int k=(((year/4)+year+date+arr[month-1]+1)%7);
              leap(k);
          }
      }
      printf("Press 0 to exit: ");
      scanf("%d",&end);
     }
     if(choose==2){
         printf("\033[0;36m");
         int date=1,year,month,day,day1,day2,day3,day4,day5,day6,flag=0;
        int arr[12]={0,31,59,90,120,151,181,212,243,273,304,334};
     int week[7]={0,1,2,3,4,5,6};
         printf("Enter Month: \n");
         scanf("%d",&month);
         printf("Enter year: ");
         scanf("%d",&year);
         if(((year%4!=0) || month!=2) || (year%100==0 && year%400!=0)){
         int k=(((year/4)+year+date+arr[month-1])%7)*100;
         if(k==0){
             k=1000;
         }
         FILE *nleap;
         FILE *noleap;
         FILE *nlfeb;
         nlfeb=fopen("febnol.txt","r");
         noleap=fopen("thirty.txt","r");
         nleap=fopen("Thirtyone.txt","r");
         printf("   S       M       T      W       T       F       S\n\n");
         if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
        while(fscanf(nleap,"%d",&day)!=EOF){
            if(k==day){
                while(fscanf(nleap,"%d   %d   %d   %d   %d   %d   %d",&day,&day1,&day2,&day3,&day4,&day5,&day6)!=1000){
               if(day==0 && day1==0 && day2==0 && day3==0 && day4==0 && day5==0 && day6==0){
                   flag++;
                   break;
               }
               else{
         printf("   %02d     %02d      %02d      %02d      %02d      %02d      %02d\n",day,day1,day2,day3,day4,day5,day6);
               flag++;
            }
            }
            if(flag>0){
                break;
            }
        }
        }
        }
        else if(month==4 || month==6 || month==9 || month==11){
               while(fscanf(noleap,"%d",&day)!=EOF){
            if(k==day){
                while(fscanf(noleap,"%d   %d   %d   %d   %d   %d   %d",&day,&day1,&day2,&day3,&day4,&day5,&day6)!=1000){
               if(day==0 && day1==0 && day2==0 && day3==0 && day4==0 && day5==0 && day6==0){
                   flag++;
                   break;
               }
               else{
         printf("   %02d     %02d      %02d      %02d      %02d      %02d      %02d\n",day,day1,day2,day3,day4,day5,day6);
               flag++;
            }
            }
            if(flag>0){
                break;
            }
        }
        }
        printf("\033[0m");
        }
        else{
             while(fscanf(nlfeb,"%d",&day)!=EOF){
            if(k==day){
                while(fscanf(nlfeb,"%d   %d   %d   %d   %d   %d   %d",&day,&day1,&day2,&day3,&day4,&day5,&day6)!=1000){
               if(day==0 && day1==0 && day2==0 && day3==0 && day4==0 && day5==0 && day6==0){
                   flag++;
                   break;
               }
               else{
         printf("   %02d     %02d      %02d      %02d      %02d      %02d      %02d\n",day,day1,day2,day3,day4,day5,day6);
               flag++;
            }
            }
            if(flag>0){
                break;
            }
        }
        }
        }
     }
      else{
        FILE *leapfeb;
        leapfeb=fopen("leapfeb.txt","r");
        int z=(((year/4)+year+date+arr[month-1])%7)*100;
        if(z==0){
            z=1000;
        }
        printf("   S       M       T      W       T       F       S\n\n");
          while(fscanf(leapfeb,"%d",&day)!=EOF){
            if(z==day){
                while(fscanf(leapfeb,"%d   %d   %d   %d   %d   %d   %d",&day,&day1,&day2,&day3,&day4,&day5,&day6)!=1000){
               if(day==0 && day1==0 && day2==0 && day3==0 && day4==0 && day5==0 && day6==0){
                   flag++;
                   break;
               }
               else{
         printf("   %02d     %02d      %02d      %02d      %02d      %02d      %02d\n",day,day1,day2,day3,day4,day5,day6);
               flag++;
            }
            }
            if(flag>0){
                break;
            }
        }
        }

      }
      printf("Press 0 to exit: ");
      scanf("%d",&end);
     }  
     if(choose==3){
         int mon1,date1;
         char sen[100];
         printf("Enter a month: ");
         scanf("%d",&mon1);
         printf("Enter date: ");
         scanf("%d",&date1);
         printf("\n\n\n\n");
         printf("Enter a note upto 30 characters: ");
         getchar();
         gets(sen);
        // printf("Note added!!!!");
         FILE *thirty;
         thirty=fopen("notes.txt","a");
         fprintf(thirty,"%d / %d: %s\n",date1,mon1,sen);
         fclose(thirty);
         printf("Press 0 to exit: ");
      scanf("%d",&end);
     }
     if(choose==4){
         FILE *notes;
         notes=fopen("notes.txt","r");
         char c=fgetc(notes);
         while(c!=EOF){
             printf("%c",c);
             c=fgetc(notes);
         }
         printf("Press 0 to exit: ");
      scanf("%d",&end);
     }
     else{

     }
   return 0;
}