#include <stdio.h>

int main(){

//decalres variables
	char ch;
	int is_valid = 1;
	
//asks user to enter password
	printf("Enter input:");
	ch = getchar();
	

	while(ch != '\n'){//loop that ends once user clicks enter
		if(!((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9')||(ch==' ')||(ch=='!')||(ch=='.')||(ch=='?')))
			is_valid = 0;//if user enters invalid password the variable reads false
		ch = getchar();
}

	if(is_valid) printf("valid");//if variable reads true then prints valid
	else printf("invalid");//if variable reads false then prints invalid












	return 0;

}
