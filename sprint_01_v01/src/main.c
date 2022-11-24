#include <dams.h>
  
   int main()
   {
            DD *dd = NULL;
            DD *headdd = NULL;
            PD *pd = NULL;
            PD *headpd = NULL;
            Appd *appd = NULL;
           Appd *headappd = NULL;
	   AD *headad = NULL;
           int ch = 0;
	   int _id=0;
           char _name[BUFF] = {'\0', };
           memset(_name, '\0', BUFF);
           headdd = loadDD();
           headpd = loadPD();
           headappd = loadappd();
           while(1)
           {
             if(signInAdmin(headad) == 0)
              {
                 printf("\n\tId does not match \n");
              }

	     else
	     {
		  printf("\n\tLogged In\n");

		  printf("\n\t**********************Welcome******************\n\t");
                  printf("\n\t******************DOCTOR APPOINMENT MANAGEMENT SOFTWARE*********************\n\t");
                  printf("\n\tPress\n\t1. Create Profile For Doctor\n\t2. Create Profile For Patient\n\t3.Book Appoinment\n\t4.View Appointment\n\t5. Update Profile forDoctor\n\t6. Update Profile for Patient\n\t7. Display Doctor Profile\n\t8. Display Patient Profile\n\t0. Exit\n\tChoice:");
                  scanf("%d",&ch);
                  switch(ch)
                  {
                      case 1:  
			      headdd = signUpDoctor(headdd,&_id);
                              writeDD(headdd);
                              printf("\n\tSuccessfully Registered\n");
                              sleep(2);
                              break;
                      case 2:
                              headpd = signUpPatient(headpd,&_id);
                              writePD(headpd);
                              printf("\n\tSuccessfully Registered\n");
                              sleep(2);
                              break;
		      case 3:
			      headappd=bookAppointment(headappd, &_id);
                              writeappd(headappd);
                              sleep(1);
                              break;
		      case 4:
			      printf("\n\t Appointment details are:\n");
                              viewAppointment(headappd);
                              sleep(1);
                              break;
		      case 5:
			      updateDocDetails(headdd);
            writeDD(headdd);
                              sleep(1);
                              break;
                              //dispDD(headdd);
                      case 6:
			                       updatePatDetails(headpd);
                             writePD(headpd);
                              sleep(1);
                              break;
                              //dispPD(headpd);
                      case 7:
			      printf("\n\t Doctor details are:\n");
                              dispDD(headdd);
                              sleep(1);
                  	      break;
		      case 8:
			      printf("\n\t Patient details are:\n");
                              dispPD(headpd);
                              sleep(1);
                              break;
		      case 0:
			    exit(EXIT_SUCCESS);
                      default:
                            printf("Incorrect Choice:");
        
               }
	     }
	   }

	printf("\n\n");

	return 0;

 }
