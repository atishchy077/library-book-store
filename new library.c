#include <stdio.h>
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

int main()
{
	int i,user_admin;
	printf("********Welcome to Library Book Store System*********\n");
	printf("Choose one of them\n");
    printf("\t0. User \n\t1. Admin\n");
	scanf("%d",&user_admin);
	if(user_admin==0){
		FILE*fp;
		int option,i,key,flag,position;
			printf("\t======>Welcome to User Menu<======\n");
			printf("\t\nPlease choose one option\n\n");
			printf("\t 1. View Books\n");
			printf("\t 2. Search Book\n");
			printf("\t 3. Exit\n");
			printf("\n");
			scanf("%d",&option);
			switch (option){
				case 1:
					printf("===List of Books===\n");
					
					printf("Book id :%d\t Book name :%s\t Author name :%s\n",b[i].book_id,b[i].book_name,b[i].author_name);
				
					break;
					case 2:
						printf("Enter Book information which you want to search\n");
					    printf(" Enter Book ID to Search\t\n");
						scanf("%d",&key);
						for(i=0;i<50;i++){
							if(b[i].book_id==key){
								flag=1;
								position=i;
								break;
							}
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
							deafult:
							printf("You have entered invalid option\n");
							}
							printf("\n\n Press any key to continue...");
							getch();
							
		}else{
			FILE*fp;
			int option,student_id,student_name,student_program,i,key,position=0,flag;
			adminMenu:
			printf("======>Welcome to Admin Menu<======\n");
			printf("\t Please choose one option\n");
			printf("\t 1. View Books\n");
			printf("\t 2. Search Book\n");
			printf("\t 3. Add New Book\n");
			printf("\t 4. Add Student Details\n");
			printf("\t 5. Issue book\n");
			printf("\t 6. View Issued Book List\n");
			printf("\t 0. Exit\n");
			scanf("%d",&option);
			switch (option){
				case 0:
					exit(0);
				case 1:
					printf("===List of Books===\n");
					fp =fopen("studentrecord.txt","r");
					if(fp == NULL){
					printf("No records found or error in opening file!\n");
					}
					break;
					printf("\n Student Records:\n");
					
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
							printf("===Adding Book Details===\n");
							break;
						    case 4:
						    	if(position>=50){
						    		printf("Database is full\n");
						    		break;
								}
						    	printf("===Adding Student Details===\n\n");
						    	printf("Enter Student id \n");
					        	scanf("%d",&s[position].student_id);
						        printf("Enter Student Name\n");
						        scanf("%s",s[position].student_name);
						        printf("Enter Student Semester\n");
						        scanf("%d",&s[position].student_semester);//   %[^\n]= read wit space
						        printf("Enter Student Program\n");
						        scanf("%s",s[position].student_program);
						        printf("Enter Student Contact no.\n");
						        scanf("%14s",s[position].student_contact);
						        //Open file in append mode
						        fp = fopen("studentrecord.txt","w");
						        if(fp == NULL){
						        	printf("Error in opening file!\n");
						        	break;
								}
								//Write student data to file 
								fprintf(fp, "d:%s:%d:%s:%d \n",s[position].student_id,s[position].student_name,s[position].student_semester,s[position].student_program,s[position].student_contact);
								fclose(fp);
								position++;
								printf("Student added successfully!\n");
						        break;
						    getch ();
						    goto adminMenu;
						}
	        }
return 0;
}


