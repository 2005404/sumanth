#include<stdio.h>
#define N 3
#define MAX_NAME_LEN 50
int i;

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
   void uniqueid(struct book1 *);
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
uniqueid(ptrbook);
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
 void uniqueid(struct book1 *ptrbook)
  {
      int id;
      char p[20];
      printf("\n enter the unique id:(1-book1,2-book2,3-book3.......) ");
  scanf("%d",&id);
      for(i=0;i<N;i++)
      {
          if(i+1==id){
            strcpy(p,(ptrbook+i)->name);
            printf("The book name is : ");
          puts(p);}
      }
  }
