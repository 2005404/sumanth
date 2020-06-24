#include<stdio.h>
#define N 3
#define MAX_NAME_LEN 50
int i;
/

struct book2 {
  char name[MAX_NAME_LEN];
  char title[MAX_NAME_LEN];
   char publisher[MAX_NAME_LEN];
   char author[MAX_NAME_LEN];
   int price;
   int pages;
   int year;
   }book3={"book","title","sumanth","author",1000,140,2015};

struct book1 {
  char name[MAX_NAME_LEN];
  char title[MAX_NAME_LEN];
   char publisher[MAX_NAME_LEN];
   char author[MAX_NAME_LEN];
   int price;
   int pages;
   int year;
   }book[3],*ptrbook=&book;


 void display0(struct book2 book3);

   void display1(struct book1 *);
   void avg(struct book1 *);

   void maxprice(struct book1 *);
   void minprice(struct book1 *);

void maxpages(struct book1 *);

    int main()
  {
    int i;
    display0(book3);
printf("Taking input from user for library books\n");
  for(i=0;i<N;i++)
  {
      fflush(stdin);

  printf("enter the book name ");
 //scanf("%[^\n]s",book[i].name);
gets(book[i].name);
printf("enter the title ");
gets(book[i].title);
//scanf("%[^\n]s",book[i].title);
printf("enter the publisher ");
//scanf("%[^\n]s",book[i].publisher);
gets(book[i].publisher);
 printf("enter the author ");
gets(book[i].author);
printf("enter the price ");
scanf("%d",&book[i].price);
printf("enter the pages ");
scanf("%d",&book[i].pages);
printf("enter the year of publication ");
scanf("%d",&book[i].year);
}

display1(ptrbook);
avg(ptrbook);

maxprice(ptrbook);
minprice(ptrbook);

maxpages(ptrbook);

}
void display0(struct book2 book3)
 {
 printf("book name: %s\n book title: %s\n book publisher :%s\n book author :%s\n price : %d\n pages: %d\n year:%d\n",book3.name,book3.title,book3.publisher,book3.author,book3.price,book3.pages,book3.year);
printf("-------------------------------------------------------------\n");
 }
void display1(struct book1 *ptrbook)
{ int i;
printf("Display of all records\n");
printf("-------------------------------------------------------------\n");
    for(i=0;i<N;i++)
    {
        printf("book name: %s\n book title: %s\n book publisher :%s\n book author :%s\n price : %d\n pages: %d\n year:%d\n\n",(ptrbook+i)->name,(ptrbook+i)->title,(ptrbook+i)->publisher,(ptrbook+i)->author,(ptrbook+i)->price,(ptrbook+i)->pages,(ptrbook+i)->year);
    }
    printf("-------------------------------------------------------------\n");
}

void avg(struct book1 *ptrbook)
{
    int sum=0,i,average;
     for(i=0;i<N;i++)
     {
         sum=sum+(ptrbook+i)->price;
     }
         average=sum/N;
         printf("The average price of all books is: %d\n\n", average);
     }

void maxprice(struct book1 *ptrbook)

void maxpages(struct book1 *ptrbook)

     {
     int max=0;
     char n[20];
     for(i=0;i<N;i++)
     {
         if((ptrbook+i)->price>max){
        max=(ptrbook+i)->price;
        strcpy(n,(ptrbook+i)->name);
         }}printf("The book with maximum price is :%d\n",max);
         printf("The book name is : ");
         puts(n);}
 void minprice(struct book1 *ptrbook)
        {
            int min=(ptrbook+0)->price;
             char b[20];
             strcpy(b,(ptrbook)->name);
         for(i=1;i<N;i++)
     {
         if((ptrbook+i)->price<min){
        min=(ptrbook+i)->price;
        strcpy(b,(ptrbook+i)->name);
         }}printf("\n The book with minimum price is :%d\n",min);
         printf("The book name is : ");
         printf("%s",b);

}


         if((ptrbook+i)->pages>=max){
        max=(ptrbook+i)->pages;
        strcpy(n,(ptrbook+i)->name);
         }}printf("\n\n The book with maximum page is :%d\n",max);
         printf("The book name is : ");
         puts(n);}

