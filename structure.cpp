/*#include<stdio.h>
struct student{
	int roll;
	char name[20];
	char address[20];
} s1[10];

int main()
{
	
	int i;
	printf("Enter roll,name and address of student s1\n:" );
	for( i=0;i<10;i++){
		scanf("%d\t %s\t %s\n",&s1[i].roll,s1[i].name,s1[i].address);
	}
		printf("Roll\t Name\t\tAddress\n");
		for(i=0;i<10;i++){
			printf("%d\t\t %s\t\t %s\n",s1[i].roll,s1[i].name,s1[i].address );
		}

}
*/

//wap to input empid,name,postand salary of 'n' number of emplouee and display record of those employee
//having salary 2000-30000

/*#include<stdio.h>
struct employee
{
	int empId;
	char name[20];
	char post[20];
	float salary;
}emp[100];

int main(){
	int n,i;
	printf("enter number of employee you want");
	scanf("%d",&n);
	printf("\nEnter empId,nMe,postand salary:\n");
	for(i=0;i<n;i++){
		
		scanf("%d%s%s%f",&emp[i].empId,emp[i].name,emp[i].post,&emp[i].salary);
	}
	printf("\n record of employees:\n");
	printf("EmpId\tName\tpost\t salary\n" );
	for(i=0;i<n;i++){
		if(emp[i].salary>=20000 && emp[i].salary<=30000)
			printf("%d\t%s\t%s\t%f\n",emp[i].empId,emp[i].name,emp[i].post,&emp[i].salary );
	}
}
*/

/*wap to input rollno name and address of 10 students and 
display the record in alphabetica order on the basis of 
name */
 display record on the basis of rollno.(ascending order:
 	differenciate between structure and union;

wap to input rollno address in structure 
pass into function and display record