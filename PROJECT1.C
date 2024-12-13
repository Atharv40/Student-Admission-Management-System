#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#define MAX_PASSWORD_LEN 100

void Enquiry_Form();
void Admission_Form();
void feeDeposit();
void Student_Record();
void Search_Detail();
void Modify_Record();
void Delete_Detail();
int login();

struct ADMISSION
{
	int Unique_Id;
	char first_name[20];
	char middle_name[20];
	char last_name[20];
	char DOB[20];
	char Caste[10];
	char Gender[10];
	char Religion[10];
	char Nationality[10];
	char Address[50];
	char POB[10];
	char City[10];
	char State[10];
	long Student_Mobile_Number;
	long Student_Aadhar_Number;
	char Father_Name[20];
	char Father_Occupation[10];
	char Mother_Name[10];
	char Mother_Occupation[10];
	long Father_Income;
	long Mother_Income;
	char name_of_school[50];
    char name_of_board[50];
    char state[30];
    int marks;
    float per;
	int year_of_pass;
	char name_of_collage[50];
	char stream[10];
    int id;
    char name[50];
    char course[50];
    float totalFee;
    float remainingFee;
    float fee;

};

int main()
{
    int choice;
     if (login()) 
     {
	 system("Cls");
    while(1)
    {
	printf("\n\n+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+--+-+--\n");
	printf("+\t====ADMISSION MANAGEMENT SYSTEM====\t+\t\t");
	printf("\n+\t\t\t\t\t\t+\n+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n");
	printf("+ \t\t     MENU\t\t\t+\n+\t\t\t\t\t\t");
	printf("+\n+\t\t\t\t\t\t+\n+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n");
	printf("+\t\t\t\t\t\t+\n+ 1. Enquiry Form\t\t\t\t+\n+\t\t\t\t\t\t+\n+ 2. Admission/Registration\t\t\t+\n+\t\t\t\t\t\t+\n+ 3. fees Deposit\t\t\t\t+\n+\t\t\t\t\t\t+\n+ 4. Student Record\t\t\t\t+\n+\t\t\t\t\t\t+\n+ 5. Search Detail\t\t\t\t+\n+\t\t\t\t\t\t+\n+ 6. Modify Detail\t\t\t\t+\n+\t\t\t\t\t\t+\n+ 7. Delete Detail \t\t\t\t+\n+\t\t\t\t\t\t+\n+ 8.Exit\t\t\t\t\t+\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+--+-+-+-+-+-+-");
	printf("\n\nEnter Your Choice? \n\n");
	scanf("%d",&choice);

		switch(choice)
		{
			
			case 1:
				system("Cls");
			    Enquiry_Form();
			    printf("\t\t\t\t Press any key to exit\n");
			    getch();
				system("Cls");
				break;
				
			case 2:
				system("Cls");
				Admission_Form();
				system("Cls");
				break;

			case 3:
				system("Cls");
				feeDeposit();
				printf("\t\t\t\t Press any key to exit\n");
				getch();
				system("Cls");
				break;

	
			case 4:
			    system("Cls");
				Student_Record();
				printf("\t\t\t\t Press any key to exit\n");
				getch();
				system("Cls");
				break;

			case 5:
			   system("Cls");
			   Search_Detail();
			   printf("\t\t\t\t Press any key to exit\n");
			   getch();
			   system("Cls");
			   break;

			case 6:
			   system("Cls");
			   Modify_Record();
			   printf("\t\t\t\t Press any key to exit\n");
			   getch();
			   system("Cls");
			   break;
			
			case 7:
			   system("Cls");
			   Delete_Detail();
			   printf("\t\t\t\t Press any key to exit\n");
			   getch();
			   system("Cls");
			   break;

			case 8:
			  system("Cls");
			  printf("\n\t\t\t\t Thank you. for used this software.\n\n");
			  exit(0);
			  break;

		}

    
	}
}
  else
 return 0;

}

void Enquiry_Form() 
{
  int choice;
  char full_name[20];
  char address[20];
  long mobile_number;
  
  printf("\t\t\n Enter Your Full Name: ");
  scanf("%s",&full_name);
  printf("\t\t\n Enter Your Address: ");
  scanf("%s",&address);
  printf("\t\t\n Enter Your Mobile Number: ");
  scanf("%d",&mobile_number);
    
  printf("\t\t Select Any Course: ");
  printf("\t\t\n 1.MBA \n 2.MCA ");
  printf("\t\t\n Enter Your Choice: ");
  scanf("%d",&choice);
  
  switch(choice) 
  {
      
    case 1:
      printf("\t\n 1.Course Name-MBA \t\n 2.Course Duration-2 Years \t\n 3.Fees/Yr-85,000 \t\n 4.Entrance Exam Fees-1700 \t\n 5.Required Document List-\t\t\t\t\n I.SSC Marksheet \t\t\t\t\n II.HSC Marksheet \t\t\t\t\n III.Transfer Certificate \t\t\t\t\n IV.Graduation Marksheet \t\t\t\t\n V.Aadhar Card Xerox \t\t\t\t\n VI.4 Photographs \t\t\t\t\n VII.Gap Certificate/Migration Certificate");
      break;
    
	case 2:
	  printf("\t\n 1.Course Name-MCA \t\n 2.Course Duration-2 Years \t\n 3.Fees/Yr-85,000 \t\n 4.Entrance Exam Fees-1700 \t\n 5.Required Document List-\t\t\t\t\n I.SSC Marksheet \t\t\t\t\n II.HSC Marksheet \t\t\t\t\n III.Transfer Certificate \t\t\t\t\n IV.Graduation Marksheet \t\t\t\t\n V.Aadhar Card Xerox \t\t\t\t\n VI.4 Photographs \t\t\t\t\n VII.Gap Certificate/Migration Certificate");
      break;
      
    default:
	 printf(" Your Invalid Choice! ");
	 break;	  
  }
  getch();
}

void Admission_Form()
 {
	char another;
	FILE *fp;
	struct ADMISSION info;

	do{
		system("Cls");
		printf("\t\t\t\t=====Add Student info=====\n\n\n");
		fp=fopen("ADMISSION_info.txt","a");
		printf("\n\t\t\t Enter your Unique Id:  ");
		scanf("%d",&info.Unique_Id);
		printf("\n\t\t\t Enter first name: ");
		scanf("%s",&info.first_name);
		printf("\n\t\t\t Enter middle name: ");
		scanf("%s",&info.middle_name);
		printf("\n\t\t\t Enter last name: ");
		scanf("%s",&info.last_name);
		printf("\n\t\t\t Enter the DOB in DD/MM/YY format: ");
		scanf("%s",&info.DOB);
		printf("\n\t\t\t Enter Gender: ");
		scanf("%s",&info.Gender);
		printf("\n\t\t\t Enter Your Caste: ");
		scanf("%s",&info.Caste);
		printf("\n\t\t\t Enter Your Religion: ");
		scanf("%s",&info.Religion);
		printf("\n\t\t\t Enter Your Nationality: ");
		scanf("%s",&info.Nationality);
		printf("\n\t\t\t Enter Your Permanent Address: ");
		scanf("%s",&info.Address);
		printf("\n\t\t\t Enter Your Place Of Birth: ");
		scanf("%s",&info.POB);
		printf("\n\t\t\t Enter Your City: ");
		scanf("%s",&info.City);
		printf("\n\t\t\t Enter Your State: ");
		scanf("%s",&info.State);
		printf("\n\t\t\t Enter Student_Mobile_Number: ");
		scanf("%d",&info.Student_Mobile_Number);
		printf("\n\t\t\t Enter Student_Aadhar_Number: ");
		scanf("%d",&info.Student_Aadhar_Number);
		printf("\n\t\t\t Enter Your Father's Name: ");
		scanf("%s",&info.Father_Name);
		printf("\n\t\t\t Enter Your Father's Occupation: ");
		scanf("%s",&info.Father_Occupation);
		printf("\n\t\t\t Enter Your Mother's Name: ");
		scanf("%s",&info.Mother_Name);
		printf("\n\t\t\t Enter Your Mother's Occupation: ");
		scanf("%s",&info.Mother_Occupation);
		printf("\n\t\t\t Enter Your Father's Income: ");
		scanf("%d",&info.Father_Income);
		printf("\n\t\t\t Enter Your Mother's Income: ");
		scanf("%d",&info.Mother_Income);
		
		printf("\n\t\t\t\t 2.Academic Details: ");
        printf("\n\t\t\t\t Class 10th:- ");
        printf("\n\t\t Name of School: ");
        scanf("%s",&info.name_of_school);
        printf("\n\t\t Name Of Board: ");
		scanf("%s",&info.name_of_board);
		printf("\n\t\t Enter A State: ");
		scanf("%s",&info.state);
		printf("\n\t\t Enter Your Obtained Marks: ");
		scanf("%d",&info.marks);
		printf("\n\t\t Enter Your Percentage: ");
		scanf("%d",&info.per);
		printf("\n\t\t Enter Year Of Passing: ");
		scanf("%d",&info.year_of_pass);
		printf("\n\t\t\t\t Class 12th ");
		printf("\n\t\t Name of College: ");
        scanf("%s",&info.name_of_collage);
        printf("\n\t\t Name Of Board: ");
		scanf("%s",&info.name_of_board);
		printf("\n\t\t Enter A State: ");
		scanf("%s",&info.state);
		printf("\n\t\t Enter Your Obtained Marks: ");
		scanf("%d",&info.marks);
		printf("\n\t\t Enter Your Percentage: ");
		scanf("%f",&info.per);
		fflush(stdin);
		printf("\n\t\t Enter Year Of Passing: ");
		scanf("%d",&info.year_of_pass);
		
		printf("\n\t\t+#+#+#+#+# Stream Selection +#+#+#+#+# ");
		printf("\t\t\n 1.MBA \t\t\n 2.MCA");
		printf("\n\t\t Select Your Stream: ");
		scanf("%s",&info.stream);
		printf("\n\t\t\t___________________________________");

		if(fp==NULL)
		{
			fprintf(stderr,"\t\t\t Canit open file\n");
		}
		else
		{
			printf("\t\t\t\n Record stored successfully \n");
		}

		fwrite(&info,sizeof(struct ADMISSION),1,fp);
		fclose(fp);

		printf("\t\t\t Do you want to add another record?(y/n) : ");
		scanf("%s",&another);
	}
	while(another=='y'||another=='Y');
}



void feeDeposit() {
    struct ADMISSION info;
    int id;
    
    FILE *fp, *fpTemp;

    printf("Enter student ID: ");
    scanf("%d", &id);

    fp = fopen("ADMISSION_info.txt","r");
    if (fp == NULL) {
        printf("Error: Unable to open file.");
        return;
    }

    while (fread(&info, sizeof(struct ADMISSION), 1, fp)) {
        if (info.Unique_Id == id) {
            break;
        }
    }

    if (info.Unique_Id != id) {
        printf("Error: Student not found.");
        fclose(fp);
        return;
    }

    fclose(fp);

    fp = fopen("ADMISSION_info.txt","w");
    if (fp == NULL) {
        printf("Error: Unable to open file.");
        return;
    }
    printf(" \n\t\t Fees For All 1.MCA 2.MBA Courses Are Same: ");
    info.totalFee =85000;
    printf("\n\t\t Total fee: %.2f\n", info.totalFee);
    
    printf("\n\t\t Enter fee deposit amount: ");
    scanf("%f", &info.fee);
    printf("\n\t\t Your Fee Is Successfully Depositd...");
    info.remainingFee = info.totalFee-info.fee;
    printf("\n\t\t Your Remaining Fees: %.2f\n", info.remainingFee);

    fseek(fp, sizeof(struct ADMISSION), SEEK_CUR);
    fwrite(&info, sizeof(struct ADMISSION), 1, fp);

    fclose(fp);
    getch();
}

void Student_Record()
 {
	FILE *fp1;
	struct ADMISSION info;
		fp1=fopen("ADMISSION_info.txt","r");

	printf("\t\t\t\t=====Student Record=====\n\n\n");

	if(fp1==NULL)
	{
		fprintf(stderr,"\t\t\t can't open file\n");
	}
	else
	{
		printf("\t\t\t\t Records\n");
		printf("\t\t\t\t _________________________________________________\n\n");
	}
	 fseek(fp1, 0, SEEK_SET);  

	while(fread(&info,sizeof(struct ADMISSION),1,fp1))
	{
	   system("Cls");	
	   printf("\n\t\t\t\t=*=*=*=*=*=*=*=*=*=*=*=*=*||*=*=*=*=*=*=*=*=*=*=");
	   printf("\n\t\t\t\t------- Sr No.------------||--Information-------");
	   printf("\n\t\t\t\t=*=*=*=*=*=*=*=*=*=*=*=*=*||*=*=*=*=*=*=*=*=*=*=");
	   printf("\n\t\t\t\t 1.Unique_Id              ||   : %d",info.Unique_Id);
	   printf("\n\t\t\t\t 2.Student name           ||   : %s %s %s",info.first_name,info.middle_name,info.last_name);
	   printf("\n\t\t\t\t 3.DOB                    ||   : %s",info.DOB);
	   printf("\n\t\t\t\t 4.Gender                 ||   : %s",info.Gender);
	   printf("\n\t\t\t\t 5.Caste                  ||   : %s",info.Caste);
	   printf("\n\t\t\t\t 6.Religion               ||   : %s",info.Religion);
	   printf("\n\t\t\t\t 7.Nationality            ||   : %s",info.Nationality);
	   printf("\n\t\t\t\t 8.Address                ||   : %s",info.Address);
	   printf("\n\t\t\t\t 9.Place Of Birth         ||   : %s",info.POB);
	   printf("\n\t\t\t\t 10.City                  ||   : %s",info.City);
	   printf("\n\t\t\t\t 11.State                 ||   : %s",info.State);
	   printf("\n\t\t\t\t 12.Student Mobile_Number ||   : %d",info.Student_Mobile_Number);
	   printf("\n\t\t\t\t 13.Student Aadhar_Number ||   : %d",info.Student_Aadhar_Number);
	   printf("\n\t\t\t\t 14.Father Name           ||   : %s",info.Father_Name);
	   printf("\n\t\t\t\t 15.Father Occupation     ||   : %s",info.Father_Occupation);
	   printf("\n\t\t\t\t 16.Mother Name           ||   : %s",info.Mother_Name);
	   printf("\n\t\t\t\t 17.Mother Occupation     ||   : %s",info.Mother_Occupation);
	   printf("\n\t\t\t\t 18.Father Income         ||   : %f",info.Father_Income);
	   printf("\n\t\t\t\t 19.Mother Income         ||   : %f",info.Mother_Income);
	   printf("\n\t\t\t\t -------------------------||----------------------");
	   printf("\n\t\t\t\t=*=*=*=*=*=*= Academic Details *=*=*=*=*=*=*=*=*=**=");
	   printf("\n\t\t\t\t -------------------------||----------------------");
	   printf("\n\t\t\t\t -------------------Class 10th STD--------------------");
	   printf("\n\t\t\t\t 1.Name Of School         ||   : %s",info.name_of_school);
	   printf("\n\t\t\t\t 2.Name of Board          ||   : %s",info.name_of_board);
	   printf("\n\t\t\t\t 3.State                  ||   : %s",info.state);
	   printf("\n\t\t\t\t 4.Obtained Marks         ||   : %d",info.marks);
	   printf("\n\t\t\t\t 5.Percentage             ||   : %f",info.per);
	   printf("\n\t\t\t\t 6.Year Of Passing        ||   : %d",info.year_of_pass);
	    printf("\n\t\t\t\t -------------------Class 12th STD--------------------");
	   printf("\n\t\t\t\t 1.Name Of Collage        ||   : %s",info.name_of_collage);
	   printf("\n\t\t\t\t 2.Name of Board          ||   : %s",info.name_of_board);
	   printf("\n\t\t\t\t 3.State                  ||   : %s",info.state);
	   printf("\n\t\t\t\t 4.Obtained Marks         ||   : %d",info.marks);
	   printf("\n\t\t\t\t 5.Percentage             ||   : %f",info.per);
	   printf("\n\t\t\t\t 6.Year Of Passing        ||   : %d",info.year_of_pass);
	   printf("\n\t\t\t\t -------------------------------------------------");
	   printf("\n\t\t\t\t+#+#+#+#+#+#+#+#+#+ Stream Selection +#+#+#+#+#+#+#+#+#+#");
	   printf("\n\t\t\t\t  Stream                  ||   :%s",info.stream);
	   printf("\n\t\t\t\t+#+#+#+#+#+#+#+#+#+#+ Student Fees #+#+#+#+#+#+#+#+#+#+#");
	   printf("\n\t\t\t\t Total Course Fees        ||   : %f",info.totalFee);
	   printf("\n\t\t\t\t Deposit Fees             ||   : %f",info.fee);
	   printf("\n\t\t\t\t Remaining Fees           ||   : %f",info.remainingFee);
	   printf("\n\t\t\t\t________________________________________________\n");
	}
	fclose(fp1);
	getch();
}

void Search_Detail()
 {
	FILE *fp2;
	struct ADMISSION info;
	int Unique_Id,found=0;

	fp2=fopen("ADMISSION_info.txt","r");

	printf("\t\t\t\t======Search Student======\n\n\n");
	printf("\t\t\t Enter Unique Id : ");
	scanf("%d",&Unique_Id);

	while(fread(&info,sizeof(struct ADMISSION),1,fp2))
	{
		if(info.Unique_Id==Unique_Id)
		{
		 system("Cls");
		found=1;
	   printf("\n\t\t\t\t=*=*=*=*=*=*=*=*=*=*=*=*=*||*=*=*=*=*=*=*=*=*=*=");
	   printf("\n\t\t\t\t------- Sr No.------------||--Information-------");
	   printf("\n\t\t\t\t=*=*=*=*=*=*=*=*=*=*=*=*=*||*=*=*=*=*=*=*=*=*=*=");
	   printf("\n\t\t\t\t 1.Unique_Id              ||   : %d",info.Unique_Id);
	   printf("\n\t\t\t\t 2.Student name           ||   : %s %s %s",info.first_name,info.middle_name,info.last_name);
	   printf("\n\t\t\t\t 3.DOB                    ||   : %s",info.DOB);
	   printf("\n\t\t\t\t 4.Gender                 ||   : %s",info.Gender);
	   printf("\n\t\t\t\t 5.Caste                  ||   : %s",info.Caste);
	   printf("\n\t\t\t\t 6.Religion               ||   : %s",info.Religion);
	   printf("\n\t\t\t\t 7.Nationality            ||   : %s",info.Nationality);
	   printf("\n\t\t\t\t 8.Address                ||   : %s",info.Address);
	   printf("\n\t\t\t\t 9.Place Of Birth         ||   : %s",info.POB);
	   printf("\n\t\t\t\t 10.City                  ||   : %s",info.City);
	   printf("\n\t\t\t\t 11.State                 ||   : %s",info.State);
	   printf("\n\t\t\t\t 12.Student Mobile_Number ||   : %d",info.Student_Mobile_Number);
	   printf("\n\t\t\t\t 13.Student Aadhar_Number ||   : %d",info.Student_Aadhar_Number);
	   printf("\n\t\t\t\t 14.Father Name           ||   : %s",info.Father_Name);
	   printf("\n\t\t\t\t 15.Father Occupation     ||   : %s",info.Father_Occupation);
	   printf("\n\t\t\t\t 16.Mother Name           ||   : %s",info.Mother_Name);
	   printf("\n\t\t\t\t 17.Mother Occupation     ||   : %s",info.Mother_Occupation);
	   printf("\n\t\t\t\t 18.Father Income         ||   : %f",info.Father_Income);
	   printf("\n\t\t\t\t 19.Mother Income         ||   : %f",info.Mother_Income);
	   printf("\n\t\t\t\t -------------------------||----------------------");
	   printf("\n\t\t\t\t=*=*=*=*=*=*= Academic Details *=*=*=*=*=*=*=*=*=**=");
	   printf("\n\t\t\t\t -------------------------||----------------------");
	   printf("\n\t\t\t\t -------------------Class 10th STD------------------");
	   printf("\n\t\t\t\t 1.Name Of School         ||   : %s",info.name_of_school);
	   printf("\n\t\t\t\t 2.Name of Board          ||   : %s",info.name_of_board);
	   printf("\n\t\t\t\t 3.State                  ||   : %s",info.state);
	   printf("\n\t\t\t\t 4.Obtained Marks         ||   : %d",info.marks);
	   printf("\n\t\t\t\t 5.Percentage             ||   : %f",info.per);
	   printf("\n\t\t\t\t 6.Year Of Passing        ||   : %d",info.year_of_pass);
	   printf("\n\t\t\t\t -------------------Class 12th STD--------------------");
	   printf("\n\t\t\t\t 1.Name Of Collage        ||   : %s",info.name_of_collage);
	   printf("\n\t\t\t\t 2.Name of Board          ||   : %s",info.name_of_board);
	   printf("\n\t\t\t\t 3.State                  ||   : %s",info.state);
	   printf("\n\t\t\t\t 4.Obtained Marks         ||   : %d",info.marks);
	   printf("\n\t\t\t\t 5.Percentage             ||   : %f",info.per);
	   printf("\n\t\t\t\t 6.Year Of Passing        ||   : %d",info.year_of_pass);
	   printf("\n\t\t\t\t+#+#+#+#+#+#+#+#+#+ Stream Selection +#+#+#+#+#+#+#+#+#+#");
	   printf("\n\t\t\t\t  Stream                  ||   :%s",info.stream);
	   printf("\n\t\t\t\t+#+#+#+#+#+#+#+#+#+#+ Student Fees #+#+#+#+#+#+#+#+#+#+#");
	   printf("\n\t\t\t\t Total Course Fees        ||   : %f",info.totalFee);
	   printf("\n\t\t\t\t Deposit Fees             ||   : %f",info.fee);
	   printf("\n\t\t\t\t Remaining Fees           ||   : %f",info.remainingFee);
	   printf("\n\t\t\t\t____________________________________________________\n");
}
}

  if(!found)
      {
	printf("\n\t\t\t Record not found\n");
      }
    fclose(fp2);
    getch();
}

void Modify_Record()
{
	int Unique_id;
	int another;
    
    FILE *fp;
    struct ADMISSION info;

    do {
        system("Cls");
        printf("\t\t\t\t=====Modify Student info=====\n\n\n");
        fp = fopen("ADMISSION_info.txt", "r+");
        if (fp == NULL) 
		{
            fprintf(stderr, "\t\t\t Can't open file\n");
        }
		 else 
		{
            printf("\n\t\t\tEnter the Unique Id of the student to modify: ");
            scanf("%d", &Unique_id);
             while (fread(&info, sizeof(struct ADMISSION), 1, fp) == 1)
			{
                if (info.Unique_Id == Unique_id) 
				{        
                    printf("\n\t\t\t Enter the new first name: ");
                    scanf("%s",&info.first_name);
                    printf("\n\t\t\t Enter middle name: ");
		            scanf("%s",&info.middle_name);
                    printf("\n\t\t\t Enter the new last name: ");
                    scanf("%s",&info.last_name);
                    printf("\n\t\t\t Enter the DOB in DD/MM/YY format: ");
		            scanf("%s",&info.DOB);
		            printf("\n\t\t\t Enter Gender: ");
		            scanf("%s",&info.Gender);
		            printf("\n\t\t\t Enter Your Caste: ");
		            scanf("%s",&info.Caste);
		            printf("\n\t\t\t Enter Your Religion: ");
		            scanf("%s",&info.Religion);
		            printf("\n\t\t\t Enter Your Nationality: ");
		            scanf("%s",&info.Nationality);
		            printf("\n\t\t\t Enter Your Permanent Address: ");
		            scanf("%s",&info.Address);
		            printf("\n\t\t\t Enter Your Place Of Birth: ");
		            scanf("%s",&info.POB);
		            printf("\n\t\t\t Enter Your City: ");
		            scanf("%s",&info.City);
		            printf("\n\t\t\t Enter Your State: ");
		            scanf("%s",&info.State);
		            printf("\n\t\t\t Enter Student_Mobile_Number: ");
		            scanf("%d",&info.Student_Mobile_Number);
		            printf("\n\t\t\t Enter Student_Aadhar_Number: ");
		            scanf("%d",&info.Student_Aadhar_Number);
		            printf("\n\t\t\t Enter Your Father's Name: ");
		            scanf("%s",&info.Father_Name);
		            printf("\n\t\t\t Enter Your Father's Occupation: ");
		            scanf("%s",&info.Father_Occupation);
		            printf("\n\t\t\t Enter Your Mother's Name: ");
		            scanf("%s",&info.Mother_Name);
		            printf("\n\t\t\t Enter Your Mother's Occupation: ");
		            scanf("%s",&info.Mother_Occupation);
		            printf("\n\t\t\t Enter Your Father's Income: ");
		            scanf("%d",&info.Father_Income);
		            printf("\n\t\t\t Enter Your Mother's Income: ");
		            scanf("%d",&info.Mother_Income);
		            
		            printf("\n\t\t\t 2.Academic Details: ");
                    printf("\n\t\t Class 10th ");
                    printf("\n\t\t Name of School: ");
                    scanf("%s",&info.name_of_school);
                    printf("\n\t\t Name Of Board: ");
	               	scanf("%s",&info.name_of_board);
	               	printf("\n\t\t Enter A State: ");
	             	scanf("%s",&info.state);
	            	printf("\n\t\t Enter Your Obtained Marks: ");
		            scanf("%d",&info.marks);
	             	printf("\n\t\t Enter Your Percentage: ");
	              	scanf("%f",&info.per);
	            	printf("\n\t\t Enter Year Of Passing: ");
	            	scanf("%d",&info.year_of_pass);
	            	printf("\n\t\t\t Class 12th ");
	            	printf("\n\t\t Name of College: ");
                    scanf("%s",&info.name_of_collage);
                    printf("\n\t\t Name Of Board: ");
	            	scanf("%s",&info.name_of_board);
	             	printf("\n\t\t Enter A State: ");
	            	scanf("%s",&info.state);
	             	printf("\n\t\t Enter Your Obtained Marks: ");
	             	scanf("%d",&info.marks);
	             	printf("\n\t\t Enter Your Percentage: ");
	               	scanf("%d",&info.per);
		            printf("\n\t\t Enter Year Of Passing: ");
		            scanf("%d",&info.year_of_pass);
		            printf("\t\t\n  1.MBA \t\t\n 2.MCA");
		            printf("\t\t\n Select Your Stream: ");
		            scanf("%s",&info.stream);
                    fseek(fp,sizeof(info), SEEK_CUR);
                    fwrite(&info, sizeof(info), 1, fp);
                    printf("\n\t\t\tRecord modified successfully\n");
                    break;
                }
                
            }
            fclose(fp);
        }
        printf("\n\t\t\tDo you want to modify another record? (y/n) ");
        another = getch();
    }
	 while (another == 'y' || another == 'Y');
}

	void Delete_Detail()
   {
    int unique_id, found = 0;
    struct ADMISSION info;
    FILE *fp, *temp;

    fp = fopen("ADMISSION_info.txt", "r");
    temp = fopen("temp.txt", "w");

    if (fp == NULL) 
	{
        printf("Error: could not open file.\n");
        return;
    }

    printf("Enter unique ID to delete: ");
    scanf("%d", &unique_id);

    while (fread(&info, sizeof(struct ADMISSION), 1, fp) == 1)
	 {
        if (info.Unique_Id == unique_id)
		 {
            found = 1;
            printf("Record deleted successfully.\n");
        } 
		else 
		{
            fwrite(&info, sizeof(struct ADMISSION), 1, temp);
        }
    }

    fclose(fp);
    fclose(temp);

    if (!found)
	 {
        printf("Error: no record found with unique ID %d.\n", unique_id);
        remove("temp.txt");
    }
	 else 
	{
        remove("ADMISSION_info.txt");
        rename("temp.txt", "ADMISSION_info.txt");
    }
}

int login() 
 {
    int option;
    char input[20];
    printf("\n\n\n\n\n\t\t\t\t   WELCOME TO ADMISSION MANAGEMENT SYSTEM");
    printf("\n\n\n\n\n\t\t\t\t-------------------------------------------\n");

    char password[MAX_PASSWORD_LEN];
    FILE* fp = fopen("pass.txt", "r");
    if (fp == NULL) 
	 {
        printf("\tCreating password file...\n");
        printf("\tDefault password is set to 'password'\n You can change it anytime from the edit password option\n");
        fp = fopen("pass.txt", "w");
        fprintf(fp, "password");
        fclose(fp);

        fp = fopen("pass.txt", "r");
        if (fp == NULL) 
		{
            printf("\tError opening password file!\n");
            return 0;
        }
    }

    fgets(password, MAX_PASSWORD_LEN, fp);
    fclose(fp);

    password[strcspn(password, "\n")] = '\0';

    do {
        printf("\n\n\n\n\n\t\t\t\t\t Enter Password : ");
        scanf("%s", input);

        if(strcmp(input, password) != 0) 
		{
            printf("\n\t\t\t\tInvalid password!\n");
            printf("\n\t\t\t\tPress '1' to try again or '2' to exit :");

            do {
                option = getchar();
                fflush(stdin);
            } while(option != '1' && option != '2');

            if(option == '2') 
			{
                return 0;
            }
            system("cls"); 
        }
    } while (strcmp(input, password) != 0);

    return 1;
}
