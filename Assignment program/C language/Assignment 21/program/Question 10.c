/*Q10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.*/

#include <stdio.h>
#include <string.h>

struct Marks {
	int roll_no;
	char name[20];
	float chem_marks;
	float maths_marks;
	float phy_marks;
};

void input(struct Marks *);
void display(struct Marks *);

int main() {
	struct Marks m1[5];

	int i = 0;

	while (i < 5) {
		input(&m1[i]);
		i++;
	}

	i = 0;

	while (i < 5) {
		display(&m1[i]);
		i++;
	}

}

void input(struct Marks *m1) {

	fflush(stdin);

	printf("\nEnter name = ");
	fgets(m1->name, 20, stdin);

	printf("Enter Roll no = ");
	scanf("%d", &m1->roll_no);

	printf("Enter Physics marks = ");
	scanf("%f", &m1->phy_marks);

	printf("Enter Chemistry marks = ");
	scanf("%f", &m1->chem_marks);

	printf("Enter Mathematics marks = ");
	scanf("%f", &m1->maths_marks);
}

void display(struct Marks *m1) {

	printf("\n\nName = %sPercentage = %0.2f", m1->name,
	       ((m1->chem_marks + m1->maths_marks + m1->phy_marks ) / 300.0) * 100.0);
}
