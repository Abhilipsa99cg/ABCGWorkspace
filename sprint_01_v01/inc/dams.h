#ifndef DAMS_H
#define DAMS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#define BUFF 256

typedef struct admin
{
	int _aid;
	struct admin *next;
}AD;
	
	
	
typedef struct doctor
{
	int _did;
	char _name[BUFF];
	char _designation[BUFF];
	int _phonenum;
	struct doctor *next;

}DD;
typedef struct patient
{
	int _pid;
	char _name[BUFF];
	int _phonenum;
	char _illness[BUFF];
	struct patient *next;

}PD;

typedef struct appointment
{
    int capacity;
    int _did;
    int _pid;
    char _date[BUFF];
    char _time[BUFF];
    struct appointment *next;
}Appd;

DD* signUpDoctor(DD *, int *);
PD* signUpPatient(PD *, int *);
int signInDoctor(DD *);
int signInPatient(PD *);
int signInAdmin();
DD* loadDD();
PD* loadPD();

int tokenizeDD(DD *, char *);
int tokenizePD(PD *, char *);
int writeDD(DD *);
int writePD(PD *);
int writeappd(Appd *);
void dispDD(DD *);
void dispPD(PD *);
void viewAppointment(Appd *);
Appd* loadappd();
Appd* bookAppointment(Appd *, int *);
int tokenizeappd(Appd *, char *);

void removeLeading(char *, char*);
void removeTrailing(char *);
void removeLeadDoc(char *, char*);
void removeTrailDoc(char *);
int updateDocDetails(DD *);
int updatePatDetails(PD *);
int cap(Appd *);


#endif
