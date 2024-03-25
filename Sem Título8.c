# include <stdio.h>
# include <locale.h>
# include <string.h>


int main() {
	setlocale(LC_ALL, "");
		int i;
	for (i = 100; i <= 120; i++) {
		if (i % 2 == 0) {
		printf("%d \n", i);
	}
	
}
	
	
	
return 0;	
}
