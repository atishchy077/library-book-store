#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

struct books 
{
	int book_id;
	char book_name[30];
	char author_name[30];
};
struct books b[50];

struct student
{
	int student_id;
	char student_name[30];
	int student_semester;
	char student_program[50];
	char student_contact[20];
};
struct student s[50];

void addstudent(void);   // add student Function declaration
void addbook(void);
void booklist(void); // booklist function declaration

int main()
{
	int user_admin;
	printf("********Welcome to Library Book Store System*********\n");
	printf("Choose one of them\n");
    printf("\t0. User \n\t1. Admin\n");
	scanf("%d",&user_admin);
	if(user_admin==0){
		int option,key,flag=0,position=0,i;
		while(1){                        //it will always be true until break is used.       
			printf("\t======>Welcome to User Menu<======\n");
			printf("\t\nPlease choose one option\n\n");
			printf("\t 1. View Books\n");
			printf("\t 2. Search Book\n");
			printf("\t 3. Exit\n");
			printf("\n");
			scanf("%d",&option);
			switch (option){
				case 1:
				printf("implementation for view book is remaining\n");
					break;
					case 2:
						printf(" Enter Book information which you want to search\n");
					    printf(" Enter Book ID to Search\t\n");
						scanf("%d",&key);
							 if(b[i].book_id == key){
								flag=1;
								position=i;
								break;
							}
						if(flag==1){
							printf("===Searched Book Details :===\n");
							printf("\n Book id : %d",b[position].book_id);
							printf("\n Book name : %s",b[position].book_name);
							printf("\n Book author : %s",b[position].author_name);
						}else{
							printf("The book you are trying to search is not available.\n");
						}

						break;
						case 3:
							exit(0);
							break;
							
							deafult:
							printf("You have entered invalid option\n");
							}
							printf("\n\n Press any key to continue...");
							getch();
			    }
							
		}else{
			int option,student_id,student_name,student_program,i,key,position=0,flag,n;
			printf("======>Welcome to Admin Menu<======\n");
			printf("\t Please choose one option\n");
			printf("\t 1. Add New Book\n");           //running module
			printf("\t 2. Search Book\n");
			printf("\t 3. view Book\n");
			printf("\t 4. Add Student Details\n");
			printf("\t 5. Issue book\n");
			printf("\t 6. View Issued Book List\n");
			printf("\t 0. Exit\n");
			scanf("%d",&option);
			switch (option){
				case 0:
					exit(0);
				case 1:
					printf("addbook function implementation is also remaining");
					break;
					
					case 2:
						printf("===Searched Book Details===\n");
						printf(" Enter Book ID to Search\t");
						scanf("%d",&key);
						for(i=0;i<50;i++){
					      	if(b[i].book_id==key){
								flag=1;
								position=i;
								break;
							}
						}
						if(flag==1){
							printf("\n Book id : %d",b[position].book_id);
							printf("\n Book name : %s",b[position].book_name);
							printf("\n Book author : %s",b[position].author_name);
						}else{
							printf("The book you are trying to search is not available.\n");
						}
						break;
						case 3:
							printf("Book list not Implemented\n");
							break;
						    case 4:
						    	addstudent();
						    	printf("Add student not Implemented\n");
						        break;
						    }
						        return 0;
						}
						void booklist(void){
                            int i;
                            printf("\n=== All Books ===\n");
                            for (i = 0; i < 50; i++) {
                                if (b[i].book_id != 0) {
                                    printf("ID: %d, Name: %s, Author: %s\n",
                                          b[i].book_id, b[i].book_name, b[i].author_name);
        }
    }
}

						}
void addstudent(){
static int i=0;
if(i>=50){
	printf("student list is full\n");
	return;
}
				printf("===Adding Student Details===\n\n");
				printf("Enter Student id \n");
				scanf("%d",&s[i].student_id);
			    printf("Enter Student Name\n");
				scanf("%s",&s[i].student_name);
				printf("Enter Student Semester in Number\n");
			    scanf("%d",&s[i].student_semester);
				printf("Enter Student Program \n");
				scanf("%s",&s[i].student_program);
			    printf("Enter Student Contact no.\n");
			    scanf("%d",&s[i].student_contact);
			    printf("students added successfully");
			    i++;
}



