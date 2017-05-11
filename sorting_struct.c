#include <stdio.h>
#include <stdlib.h>

#define MAX_STAFF 50
#define NAME_STRLEN 40

#define STAFF_TABLE_HEADER \
"--------------------------------------------------------" \
"     Given Name,     Family Name,         ID,     Salary"

#define STAFF_TEMPLATE "%15s, %15s, %10d, %10d\n"

typedef char name_t[NAME_STRLEN+1];

typedef struct {
    name_t given, family;
} fullname_t;

typedef struct {
    fullname_t name;
    int employeenumber;
    int annualsalary;
} staff_t;

typedef struct{
    int n;
    staff_t staffs[MAX_STAFF];
} staff_list_t;

void scan_staff_list(staff_list_t *staffs);
void print_staff_list(staff_list_t *staffs, char *title);

void swap_staff(/* */);
void sort_staff_by_number(staff_list_t *staffs);

int main(int argc, char *argv[]){
    staff_list_t staffs;
    scan_staff_list(&staffs);
    print_staff_list(&staffs, "Staffs");

    sort_staff_by_number(&staffs);
    print_staff_list(&staffs, "Staffs");
    return 0;
}

void scan_staff_list(staff_list_t *staffs){
    for(staffs->n=0;
        staffs->n<MAX_STAFF && 1 /* TODO: How to scan? */;
        staffs->n++);
}

void print_staff_list(staff_list_t *staffs, char *title){
    int i;
    printf("%s\n", title);
    printf(STAFF_TABLE_HEADER);
    for(i=0; i<staffs->n; i++){
        printf(STAFF_TEMPLATE,
            staffs->staffs[i].name.given,
            staffs->staffs[i].name.family,
            staffs->staffs[i].employeenumber,
            staffs->staffs[i].annualsalary);
    }
}

/* what should be the arguments? Don't forget to update the prototype as well */
void swap_staff(/* */){
    
}

void sort_staff_by_number(staff_list_t *staffs){
    // insertion sort
    int i, j;

    for(i=1; i<staffs->n; i++) {
        for(j=i-1; j>=0 && 1 /* TODO: replace with swapping condition */;
                j--) {
            //swap_staff(list+j, list+j+1);
        }
    }
}
