#include <dirent.h> 
#include <stdio.h> 
#include <string.h>

void show_dir_content(char * path) {

  DIR *d = opendir(path);
  struct dirent *dir;

  if(d != NULL){
    while((dir = readdir(d)) != NULL) {
      if(dir-> d_type == DT_DIR && strcmp(dir->d_name, ".")!=0 && strcmp(dir->d_name, "..")!=0) {
        printf("%s\n", dir->d_name);
      }
    }
    closedir(d);
  }
}

int main(int argc, char ** argv) {

  show_dir_content(argv[1]);
  return 0;
}
