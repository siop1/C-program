#include <stdio.h>
#include<string.h>

struct employee {
    int code;
    char name[20];
}e1;
void func(struct employee *e2){
    printf("code=%d \n",e2->code);
    printf("name=%s \n",e2->name);
    e2->code=2;
}
int main(){
    e1.code=1;
    strcpy(e1.name,"aryan");
    func(&e1);
    printf("new e1.code=%d",e1.code);
    return 0;
}