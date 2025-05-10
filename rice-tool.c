#include <stdio.h>
int main() {
	char I3Config[] = "~/.config/i3/config";
	char window_manager[10];
	char display_server[7];
	char compositor[10];
	char compositor_config[10];
	char wallpaper[10];
	char status_bar[10];
	char start_menu[10];
	char 


	printf("Defaul i3 =");	
	printf("%s", I3Config);
	printf("\n");

	printf("Is this correct? (y/n)\n");
	
	char isCorrect = 'a';
	scanf("%c", &isCorrect);	
	printf("%c", isCorrect);

	if (isCorrect == 'y') {
		printf ("Using default config");
	}	

	return 0;
}



int backup_current_config() {
	return 1;
}

int get_package_list() {
	return 1;
}

int select_package_manager() {
	return 1;
}

int select_distro() {
	return 1;
}

int set_distro_specific() {
	return 1;
}

int set_install_command() {
	return 1;
}

int generate_package_list() {
	return 1;
}

int list_config() {
	return 1;
}
