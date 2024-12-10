/*Project Title: Dynamic Student Database Using Pointers
Problem Description
You are tasked with creating a simple dynamic student database in C. The database will allow the user to:

Add student details (Name, ID, Marks).
Display all student details.
Edit student marks using their ID.
Free dynamically allocated memory.
Purpose of the Program
To understand and use pointers in different scenarios like dynamic memory allocation, pointer arithmetic, and referencing/de-referencing.
To manipulate data using pointers instead of arrays or structures alone.*/
#include<stdio.h>
#include<stdlib.h.>
#include<string.h>
typedef struct{
    char*name;
    int id;
    float marks;
}Student;
Student *addStudent(Student *students,int *size){
    char buffer[100];
    students = realloc(students,(*size+1)*sizeof(Student));
    if (students == NULL){
        Printf("Memory allocation failed!|n");
        exit(1);
    }

printf("Enter student name: ");
scanf(" %[^\n]",buffer);
students[*size].name= malloc(strlen(buffer)+1);
strcpy(students[*size].name,buffer);
printf("Enter student ID:");
scanf("%d",&students[*size].id);
printf("Enter student marks:");
scanf("%d",&students[*size].marks);
(*size)++;
return students;
}
void displayStudents
int main()
{
    
}