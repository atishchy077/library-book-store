//Add book module
void addbook(){
	
	printf("Enter Book id \n");
	scanf("%d",&b[i].book_id);
	
    printf("Enter Book Name\n");
    scanf("%s",b[i].book_name);
    
    printf("Enter Name of Author \n");
    scanf("%d",&b[i].author_name);//   %[^\n]= read wit space
	
 //Open file in append mode
fp = fopen("bookrecord.txt","w");
	if(fp == NULL){
    printf("Error in opening file!\n");
	break;
	}
	//Write book data to file 
	fprintf(fp, "d:%s:%s ",b[i].book_id,b[i].book_name,b[i].author_name);
	fclose(fp);
	i++;
	printf("Book added successfully!\n");
}
