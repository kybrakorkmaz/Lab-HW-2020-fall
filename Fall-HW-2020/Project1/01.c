//12.12.2020 Introduction to programming-I Fall
//Kubra Korkmaz 152120181102

#include<stdio.h>

main() {
	int a = 0, sum = 0, counter = 0, min = 0, sec_min = 0, th_min = 0, engel = 0;
	float average = 0;

	printf("Enter some numbers until -1 entered: \n");

	while (1) {

		scanf_s("%d", &a);

		counter = counter++;
		

		if (a == -1) {

			break;

		}
		if (counter == 1) {
			min = a;
			sec_min = a;
			th_min = a;
		}
		if (a < min && min <= sec_min) {
			th_min = sec_min;
			sec_min = min;
			min = a;
		}
		if (a > sec_min && sec_min <= th_min) {
			if (sec_min == th_min && a > th_min) {
				th_min = a;
			}
			if (a < th_min) {
				sec_min = sec_min;
				th_min = a;
			}
			if (min == sec_min && th_min > sec_min) {
				sec_min = th_min;
				th_min = a;
			}
		}
		if (a > min && a < sec_min && sec_min < th_min) {
			th_min = sec_min;
			sec_min = a;
		}

		sum = sum + a;
		average = (float)sum / counter;
	}

	printf("sum of all numbers: %d\n", sum);
	printf("average: %.2f\n", average);
	printf("the minimum is: %d\n", min);

	if (min == sec_min) {
		printf("\n", sec_min);
	}
	else {
		printf("the second minimum is: %d\n", sec_min);
	}
	if (sec_min == th_min) {
		printf("\n", th_min);
	}
	else {
		printf("the third minimum is: %d\n", th_min);
	}

	system("pause");
}